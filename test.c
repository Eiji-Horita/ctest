#include <stdio.h>
#include <memory.h>

#define WIDTH 14
#define HEIGHT 14

static int field[HEIGHT][WIDTH];

void main(void) {
  memset(field, 0, sizeof(field));
  for (int i = 0 ; i < WIDTH + 1 ; i++) {
    field[HEIGHT - 1][i] = 1;
  }
}
