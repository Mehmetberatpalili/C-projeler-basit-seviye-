#include <stdio.h>
#include <stdlib.h>

/*Giriþ seviyesi kodtur.Baþka döngüler eklenerek boþ bir case týkladýkmý baþa dönebiliriz. Else if kullandým sadece else kullanabilirdim. */

int main() {
	int islem,bakiye,mocha=15,kahve=25,oralet=4,cay=9;
	printf("Bakiye girin?\n");
	scanf("%d",&bakiye);
	printf("mevcut bakiyeniz : %d\n",bakiye);
	printf("urunlerun\n");
	printf("1.mocha = 15TL\n");
	printf("2.kahve = 25TL\n");
    printf("3.oralet = 4TL\n");
	printf("4.cay = 9TL\n");
	scanf("%d",&islem);
   switch(islem) 
   {
   	case 1 : 
   	
   	 if(bakiye>mocha) {
   	 	printf("mocha aldiniz hazirlaniyor\n.");
   	    bakiye-=mocha;
   	    printf("guncel bakiye = %d\n",bakiye);
   	 	}
	 else if(bakiye<mocha){
	 	printf("yetersiz bakiye");
	 }
   	 break;
   	 
   	 	case 2 :
		if(bakiye>kahve)
		{
			printf("kahve aldiniz hazirlaniyor\n.");
			bakiye-=kahve;
   	        printf("guncel bakiye = %d\n",bakiye);
   	 	}
   	 	else if(bakiye<kahve)
			{
	 	printf("yetersiz bakiye");
		}
		break;
		
		case 3 :
		if(bakiye>oralet)
		{
			printf("Oralet aldiniz hazirlaniyor\n.");
			bakiye-=oralet;
   	        printf("guncel bakiye = %d\n",bakiye);
   	 	}
   	 	else if(bakiye<oralet)
			{
	 	printf("yetersiz bakiye");
		}
		break;
		case 4 :
			if(bakiye>cay){
				printf("cay aldiniz hazirlaniyor");
				bakiye-=cay;
				printf("guncel bakiye = %d\n",bakiye);
			}
			else if(bakiye<cay){
				printf("yetersiz bakiye");
			}
			break;
			default:
				printf("gecerli bir secim yapiniz.");
			
   	   }
	return 0;
}
