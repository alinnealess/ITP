#include <stdio.h>

int fibon(int y) {
  if (y <= 1)
    return y;
  else
    return fibon(y - 1) + fibon(y - 2);
}

void intFibon() {
  int n1, n2, fib2, c = 0;
  scanf("%d %d", &n1, &n2);

  for (int i = 0; i < 15; i++) {
    fib2 = fibon(i);

    if (n1 < fib2 && fib2 < n2) {
      c++;
    }
  }

  printf("Existem %d números de fibonacci entre %d e %d\n", c, n1, n2);
}

int main(void) {

  intFibon();

  return 0;
}