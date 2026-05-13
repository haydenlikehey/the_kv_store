#include <stdio.h>
#include "../inc/kv.h"

int main() {
  kv_t* entry1 = kv_init(3);
  printf("%p\n", entry1);
  printf("%zu\n", entry1->capacity);
}