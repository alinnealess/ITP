#include <stdio.h>

int mdc_mmc(int auxMMC, int a, int b) {
  int mmc;

  if (a % b == 0) {
    printf("MDC = %d, ", b);
  } else {
    return mdc_mmc(auxMMC, b, a % b);
  }

  mmc = (auxMMC) / b;
  printf("MMC = %d", mmc);
}

int main(void) {
  int a, b, auxMMC;
  scanf("%d %d", &a, &b);
  auxMMC = a * b;

  mdc_mmc(auxMMC, a, b);

  return 0;
}