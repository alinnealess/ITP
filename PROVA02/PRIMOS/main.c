#include <stdio.h>

void primo(int n) {
  if (n == 1)
    printf("%d ", n);
  else {
    printf("%d ", n);
    if (n % 2 == 0) {
      n = n / 2;
    }

    else if (n % 3 == 0) {
      n /= 3;
    }

    else if (n % 5 == 0) {
      n /= 5;
    }

    else if (n % 7 == 0) {
      n /= 7;
    } else {
      return 0;
    }

    primo(n);
  }
}

int main(void) {
  int n;
  scanf("%d", &n);
  primo(n);
  return 0;
}