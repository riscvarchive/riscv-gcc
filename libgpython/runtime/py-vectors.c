/* This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdarg.h>
#include <stdbool.h>

#include <gpython/gpython.h>
#include <gpython/vectors.h>
#include <gpython/objects.h>

gpy_hashval_t gpy_dd_hash_string (const char * s)
{
  const unsigned char *str = (const unsigned char *) s;
  gpy_hashval_t r = 0;
  unsigned char c;

  while ((c = *str++) != 0)
    r = r * 67 + c - 113;

  return r;
}

gpy_hash_entry_t *
gpy_dd_hash_lookup_table (gpy_hash_tab_t * tbl, gpy_hashval_t h)
{
  gpy_hash_entry_t * retval = NULL;
  if (tbl->array)
    {
      gpy_hashval_t size = tbl->size, idx = (h % size);
      gpy_hash_entry_t *array = tbl->array;
      
      while (array[idx].data)
        {
          if (array[idx].hash == h)
            break;

          idx++;
          if (idx >= size)
            idx= 0;
        }
      retval = (array+idx);
    }
  else
    retval= NULL;

  return retval;
}

void ** gpy_dd_hash_insert (const gpy_hashval_t h,
			    void * const obj,
			    gpy_hash_tab_t * const tbl)
{
  void **retval = NULL;
  gpy_hash_entry_t *entry = NULL;
  if( tbl->length >= tbl->size )
    gpy_dd_hash_grow_table( tbl );

  entry= gpy_dd_hash_lookup_table( tbl, h );
  if( entry->data )
    retval= &( entry->data );
  else
    {
      entry->data = obj;
      entry->hash = h;
      tbl->length++;
    }
  return retval;
}

void gpy_dd_hash_grow_table (gpy_hash_tab_t * tbl)
{
  unsigned int prev_size= tbl->size, size= 0, i= 0;
  gpy_hash_entry_t *prev_array= tbl->array, *array;

  size = gpy_threshold_alloc( prev_size );
  array = (gpy_hash_entry_t*)
    gpy_calloc( size, sizeof(gpy_hash_entry_t) );

  tbl->length = 0; tbl->size= size;
  tbl->array= array;

  for ( ; i<prev_size; ++i )
    {
      gpy_hashval_t h= prev_array[i].hash;
      void *s= prev_array[i].data;

      if( s )
        gpy_dd_hash_insert( h, s, tbl );
    }
  if( prev_array )
    gpy_free( prev_array );
}

inline
void gpy_dd_hash_init_table (gpy_hash_tab_t * tb)
{
  tb->size= 0; tb->length= 0;
  tb->array= NULL;
}

inline
void gpy_vec_init (gpy_vector_t * const v)
{
  v->size = gpy_threshold_alloc( 0 );
  v->vector = (void **) gpy_calloc( v->size, sizeof(void *) );
  v->length = 0;
}

void gpy_vec_push (gpy_vector_t * const v, void * const s)
{
  if (s)
    {
      if (v->length >= v->size)
	{
	  signed long size = gpy_threshold_alloc (v->size);
	  v->vector = (void**) gpy_realloc (v->vector, size * sizeof (void *));
	  v->size = size;
	}
      v->vector[v->length] = s;
      v->length++;
    }
}

inline
void * gpy_vec_pop (gpy_vector_t * const v)
{
  register void * retval = NULL;
  if (v->length > 0)
    {
      retval = v->vector[v->length-1];
      v->length--;
    }

  return retval;
}

void * gpy_vec_index (int idx, gpy_vector_t * const v)
{
  void * retval = NULL;
  if (v)
    {
      if ((idx >= 0) && (idx < v->length))
	{
	  retval = v->vector[idx];
	}
      else
	fatal("vector index <%i> out of bounds!\n", idx );
    }
  return retval;
}

void gpy_vec_free (gpy_vector_t * v)
{
  if (v)
    {
      if (v->vector)
	gpy_free (v->vector);
      gpy_free (v);
    }
  v = NULL;
}
