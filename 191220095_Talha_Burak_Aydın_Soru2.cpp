#include <stdio.h> // A,B gibi iki sayının karşılaştırılması.

int main() 


  {
  	
  	int a, b;
	
	printf("Karsilastirmak istediginiz sayilardan birincisini giriniz : ");
	scanf("%d",&a);
	printf("ikinci sayiyi  giriniz: ");
	scanf("%d",&b);
	
	if (a>b) {
		printf(" %d buyuktur %d sayisindan ",a,b);
	}
	else if (a<b){
		printf("%d kucuktur %d sayisindan " ,a,b);
	}
	else if (a=b)
{ 
printf("Girdiginiz iki sayi biribirine esittir.");



}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
