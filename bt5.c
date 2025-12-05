#include <stdio.h>
#include <math.h>
int main() {

      float a,b,c;
      float x, x1, x2;
      printf("Nhập a, b và c: ");
      scanf("%f%f%f", &a, &b , &c);
      
      if ( a == 0) {
            if ( b == 0 ) {
                  if ( c == 0) 
                     printf("PT vô số nghiệm");
                  else 
                     printf("PT vô nghiệm");
            }
            else 
                  printf("PT bậc 1 có nghiệm x = %.2f", x = -c/b);
      }
      else {
            float delta = b*b - 4*a*c ;
            if ( delta < 0) 
               printf("PT vô nghiệm");
            else if ( delta == 0 ) 
               printf("PT có nghiệm kép x = %.2f", x = -b/(2*a)) ;
            else {
                  printf("PT có 2 nghiệm phân biệt: \n");
                  printf("x1 = %.2f\n", x1 = (-b + sqrt(delta)) / (2*a));
                  printf("x2 = %.2f\n", x2 = (-b - sqrt(delta)) / (2*a));
            }
      }


      return 0;
}