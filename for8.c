#include <stdio.h>

int main(void) {
  int m; scanf("%d", &m);
  int cnt; scanf("%d", &cnt);
  int a;
  int b;
  int sum = 0;
  for(int i = 0; i < cnt; i++){
    scanf("%d %d", &a, &b);
    sum += a * b;
    a = 0;
    b = 0;
  }
  if (sum == m) printf("Yes");
  else printf("No");
  return 0;
}
