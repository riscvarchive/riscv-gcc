#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <inttypes.h>

struct data {
  size_t vl;
  scalar_type x;
  scalar_type* mem;
  scalar_type* mem_golden;
};

void set_golden(struct data *a);

scalar_type get_rand()
{
  scalar_type r = (scalar_type)rand() + 4294967296ll;
  return r;
}

void print_data(char* tag, struct data *a)
{
  printf("\n");
  printf(tag);
  printf("\n====================\n");
  printf("vl: %u, x: %" PRId64 "\n\n", a->vl, a->x);
  printf("mem:\n");
  for (size_t i = 0; i < a->vl; i += 1) {
    printf("%d: %" PRId64 "\n", i, a->mem[i]);
  }
  printf("\n");
  printf("mem_golden:\n");
  for (size_t i = 0; i < a->vl; i += 1) {
    printf("%d: %" PRId64 "\n", i, a->mem_golden[i]);
  }
  printf("====================\n");
}

void set_rand(struct data *a)
{
  for (size_t i = 0; i < a->vl; i += 1) {
    scalar_type t = get_rand();
    a->mem[i] = t;
  }
}

bool check(struct data *a)
{
  for (size_t i = 0; i < a->vl; i += 1) {
    if (a->mem[i] != a->mem_golden[i]) {
      abort();
    }
  }
  return true;
}

size_t get_rand_vl()
{
  return (size_t)((rand() % 64) + 1);
}

struct data* get_data(size_t vl, scalar_type op2)
{
  scalar_type *mem = malloc(vl * 8);
  scalar_type *mem_golden = malloc(vl * 8);
  struct data *result = malloc(sizeof(struct data));
  result->vl = vl;
  result->mem = mem;
  result->mem_golden = mem_golden;
  result->x = op2;

  set_rand(result);
  set_golden(result);
  print_data("before:\n", result);

  return result;
}