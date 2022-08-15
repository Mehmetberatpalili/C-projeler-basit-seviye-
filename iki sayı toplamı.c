#include <stdio.h>
#include <stdlib.h>


int main() {
	double s1,s2,toplam,carpma;
    	printf("Bir sayi giriniz:");
	      scanf("%lf",&s1);
		   printf("Bir sayi giriniz:");
	         scanf("%lf",&s2);
	         toplam=s1+s2;
	             printf("toplamý = %lf",toplam);
	             if(toplam<40){
	         	   printf("Sayi 40 ten küçüktür.");
			      }
			      else if (toplam>40){
			      	printf("Sayi 40 ten büyüktür.");
				  }
				  else if(toplam==40){
				  	printf("Sayi 40 a eþittir.");
				  }
	return 0;    
	
}
