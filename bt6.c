#include <stdio.h>

int main() {
 
      int salary, thue, thuclinh ;
      printf("Nhập lương: ");
      scanf("%d", &salary);
  

      if (salary < 7000 ) {
            thue = salary * 0.1;
            thuclinh = salary - thue;
      }
      else if ( salary < 15000 ) {
            thue = salary * 0.2;
            thuclinh = salary - thue;
      }
      else if ( salary == 15000) {
            thue = salary * 0.3;
            thuclinh = salary - thue;
      }

      printf("Thực lĩnh NV nhận dc là: %d", thuclinh);

      return 0;
}