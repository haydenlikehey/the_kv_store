#include <stdio.h>
#include "../include/kv.h"

int main() {
  kv_t* entry1 = kv_init(3);
  printf("%p\n", entry1);
  printf("%d\n", entry1->capacity);
}