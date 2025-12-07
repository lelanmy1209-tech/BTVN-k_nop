#include <stdio.h>

int main() {

      int a;
      printf("Nhập thứ bằng số: ");
      scanf("%d", &a);
      
      switch(a) {
            case 2:
                printf("Thứ 2");
                break;
            case 3:
                printf("Thứ 3");
                break;
            case 4:
                printf("Thứ 4");
                break;
            case 5:
                printf("Thứ 5");
                break;
            case 6:
                printf("Thứ 6");
                break;
            case 7:
                printf("Thứ 7");
                break;
            default:
                printf("Chủ nhật");
      }

      return 0;
}