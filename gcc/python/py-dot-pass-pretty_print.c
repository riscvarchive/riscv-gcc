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

#include "config.h"
#include "system.h"
#include "ansidecl.h"
#include "coretypes.h"
#include "tm.h"
#include "opts.h"
#include "tree.h"
#include "tree-iterator.h"
#include "tree-pass.h"
#include "gimple.h"
#include "toplev.h"
#include "debug.h"
#include "options.h"
#include "flags.h"
#include "convert.h"
#include "diagnostic-core.h"
#include "langhooks.h"
#include "langhooks-def.h"
#include "target.h"
#include "cgraph.h"

#include <gmp.h>
#include <mpfr.h>

#include "vec.h"
#include "hashtab.h"

#include "gpython.h"
#include "py-il-dot.h"
#include "py-il-tree.h"
#include "py-vec.h"
#include "py-runtime.h"

bool GPY_OPT_dump_dot = false;
static void gpy_dot_pass_dump_IL (VEC(gpydot,gc) *, const char *);
static void gpy_dot_pass_dump_node (FILE *, gpy_dot_tree_t *);

static
void gpy_dot_pass_dump_node (FILE * fd, gpy_dot_tree_t * node)
{
  switch (DOT_TYPE (node))
    {
      //....

    default:
      break;
    }
}

static
void gpy_dot_pass_dump_IL (VEC(gpydot,gc) * decls, const char * outfile)
{
  FILE * fd = fopen (outfile, "w");
  if (!fd)
    {
      error ("unable to open <%s> for writeable!\n", outfile);
      return;
    }
  int idx;
  gpy_dot_tree_t * idtx = NULL_DOT;
  for (idx = 0; VEC_iterate (gpydot, decls, idx, idtx); ++idx)
    {
      gpy_dot_pass_dump_node (fd, idtx);
    }
  fclose (fd);
}

/*
  A Pretty-printer to dump out the IL if -fpy-dump-dot was passed
*/
VEC(gpydot,gc) * gpy_dot_pass_pretty_print (VEC(gpydot,gc) * decls)
{
  if (GPY_OPT_dump_dot)
    gpy_dot_pass_dump_IL (decls, "gccpy-tu.dot");

  return decls;
}
