#include <stdio.h>

int main() {
      int a;
      printf("Nhập a: ");
      scanf("%d", &a);

      if ( a % 3 == 0 && a % 2 == 0)
         printf("Số %d chia hết cho 3 và 2",a);
      else 
         printf("Số %d không chia hết cho 3 và 2",a);




      return 0;
}