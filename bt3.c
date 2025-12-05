#include <stdio.h>

int main () {
      
      int age;
      printf("Nhập tuổi: ");
      scanf("%d", &age);
      if ( age < 16 ) 
         printf("Không đủ điều kiện vào học lớp 10");
      else
         printf("Đủ điều kiện vào học lớp 10");

      return 0;
}