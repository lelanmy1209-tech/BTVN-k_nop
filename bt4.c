#include <stdio.h>
#include <math.h>

int main() {
   
      int a, b, c;
      printf("Nhập cạnh a, b và c: ");
      scanf("%d%d%d", &a, &b, &c) ;

      if ( a + b > c && b + c > a && a + c > b) {
            float p = ( a + b + c) / 2.0;
            float s = sqrt(p * ( p - a) * ( p - b) * ( p -c));
            printf("Diện tích tam giác là: %f", s);
      }
      else
         printf("Không tồn tại tam giác");

      return 0;
}