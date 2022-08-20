#include <stdio.h>

int main(void) {
  //마지막엔 뭐가 나올까?
  int n;
  for(n = -10; n <= -1; n++){
    printf("%d", n);
  }
  printf("마지막 : n = %d", n);
  return 0;
}
