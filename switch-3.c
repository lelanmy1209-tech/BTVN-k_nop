#include <stdio.h>

int main() {

      int n;
      printf("Nhập tháng: ");
      scanf("%d", &n);

      switch(n) {
            case 1: case 2 : case 3 :
                printf("Quý 1");
                break;
            case 4: case 5 : case 6 : 
                printf("Quý 2");
                break;
            case 7: case 8 : case 9 : 
                printf("Quý 3");
                break;
            case 10: case 11 : case 12 : 
                printf("Quý 4");
                break;
            default:
                printf("Tháng không hợp lệ");
                
      }

      /*
      if (n < 1 || n > 12)
            printf("Tháng không hợp lệ");
      else
            printf("Quý %d", (n - 1) / 3 + 1);
      */

      
      return 0;
}