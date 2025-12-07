#include <stdio.h>

int main () {
      int n;
      printf("Nhập n: ");
      scanf("%d", &n);

      switch(n) {
            case 1:
                printf("*");
                break;
            case 2:
                printf("**");
                break;
            default:
                printf("***");
      }
      
      return 0;
}