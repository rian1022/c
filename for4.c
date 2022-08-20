#include <stdio.h>

int main(void) {
  //100부터 0까지 10만큼 감소시키면서 출력하기
   for(int n = 100; n >= 0; n-=10){
     printf("%d\n", n);
   }
  return 0;
}
