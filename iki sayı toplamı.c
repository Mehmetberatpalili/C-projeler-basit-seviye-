#include <stdio.h>
#include <stdlib.h>


int main() {
	double s1,s2,toplam,carpma;
    	printf("Bir sayi giriniz:");
	      scanf("%lf",&s1);
		   printf("Bir sayi giriniz:");
	         scanf("%lf",&s2);
	         toplam=s1+s2;
	             printf("toplam� = %lf",toplam);
	             if(toplam<40){
	         	   printf("Sayi 40 ten k���kt�r.");
			      }
			      else if (toplam>40){
			      	printf("Sayi 40 ten b�y�kt�r.");
				  }
				  else if(toplam==40){
				  	printf("Sayi 40 a e�ittir.");
				  }
	return 0;    
	
}
