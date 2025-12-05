#include <stdio.h>

int main () {
      int thang, nam ;
	printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);
	
	if ( thang >= 1 && thang <= 12) {
		if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
			printf("Thang %d co 31 ngay",thang);
		}
		else if ( thang == 4 || thang == 6 || thang == 9 || thang == 11) {
			printf("Thang %d co 30 ngay", thang);
		}
	    else {
		    if ( nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0 )) {
		     	printf("nam %d, thang %d co 29 ngay", nam, thang);
		    }else {
		     	printf("nam %d, thang %d co 28 ngay", nam , thang);
		}	
	}}
	else {
		printf("Thang nhap k hop le");
	}



      return 0;
}
