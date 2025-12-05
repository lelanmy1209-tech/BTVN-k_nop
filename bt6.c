#include <stdio.h>

int main() {
 
      int salary, thue, thuclinh ;
      printf("Nhập lương: ");
      scanf("%d", &salary);
  

      if (salary > 15 ) {
            thue = salary * 0.3;
      }
      else if ( salary >= 7 ) {
            thue = salary * 0.2;
      }
      else {
            thue = salary * 0.1;
      }
      thuclinh = salary - thue;
      printf("Thực lĩnh NV nhận dc là: %d", thuclinh);

      return 0;
}
