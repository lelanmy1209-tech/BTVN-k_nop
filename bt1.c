#include <stdio.h>

int main() {
      int a,b,c;
      printf("Nhập a, b và c: ");
      scanf("%d%d%d", &a, &b, &c);

      int max = a;
      if ( b > max) {
         max = b;   
      }
      if ( c > max ) {
         max = c;
      }
      printf("Số lớn nhất là: %d", max);
      return 0;
}