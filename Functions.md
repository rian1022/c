#함수
*매개변수x, 반환x
```c
#include <stdio.h>

void Sum1(){
  int a; scanf("%d", &a);
  int sum = 0;
  
  for (int i = 0; i <= a; i++) {
    sum += i;
  }
  printf("%d\n", sum);
}

int main(void) {
  Sum1();
  return 0;
}
```
*매개변수o, 반환x
```c
#include <stdio.h>

void Sum2(int a){
  int sum = 0;
  
  for (int i = 0; i <= a; i++) {
    sum += i;
  }
  printf("%d\n", sum);
}

int main(void) {
  int n;
  scanf("%d", &n);
  Sum2(n);
}
```
