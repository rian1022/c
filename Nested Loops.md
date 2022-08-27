#중첩반복문

*1, 2, 3, 4, 5를 5줄 출력하는 프로그램
```c
#include <stdio.h>

int main(void) {
  for(int i = 1; i < 6; i++){
    for(int j = 1; j < 6; j++){
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}
```

*별찍기
```c
#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int b = n;
  int i;
  int j;
  for (i = 1; i <= n; i++) {
    for(int m = b + 1; m <= n; m++){
      printf(" ");
    }
    for (j = n; j >= i; j--) {
      printf("*");
    }
    printf("\n");
    b--;
  }
  return 0;
}
```
