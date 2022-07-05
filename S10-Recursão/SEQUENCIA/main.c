#include <stdio.h>

void seqNum(int n) {
  if (n == 1) {
    printf("%d ", n);
  } else {
    printf("%d ", n);
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = n * 3 + 1;
    }
    seqNum(n);
  }
}

int main(void) {
  int n;
  scanf("%d", &n);
  seqNum(n);
  return 0;
}