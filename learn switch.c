#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  switch (n / 10) {
  case 0:
    printf("유소년");
    break;
  case 1:
    printf("청소년");
    break;
  case 2:
    printf("청년");
    break;
  case 4:
    printf("중년");
    break;
  case 6:
    printf("장년");
    break;
  case 7:
    printf("노년");
    break;
  case 9:
    printf("도전백세");
    break;
  default:
    printf("성공백세");
    break;
  }
  return 0;
}
