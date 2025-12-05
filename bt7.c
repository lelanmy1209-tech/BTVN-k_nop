#include <stdio.h>

int main () {
 
      int tien, doanhso;
      printf("Nhập doanh số bán hàng: ");
      scanf("%d", &doanhso);
      if ( doanhso <= 100000000 ) 
            tien = doanhso * 0.05;
      else if ( doanhso <= 300000000 )
            tien = doanhso = doanhso * 0.1;
      else 
            tien = doanhso = doanhso * 0.2;

      printf("Tiền hoa hồng sẽ nhận được : %d", tien);

      return 0;
}