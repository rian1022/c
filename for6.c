#include <stdio.h>

int main(void) {
  int a; scanf("%d", &a);
  int m = 0;
  for(int i = 1; i <= a; i++){
    m += i;
  }
  printf("%d", m);
  return 0;
}
