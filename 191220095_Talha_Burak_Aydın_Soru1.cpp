#include <stdio.h> // Vize,Final,B�t�nleme verileri ile dersi ge�ti�inizi kontrol eden koddur.20.11.2020-Algoritma Dersi-2.�DEV-1.soru
#include <conio.h>

int main(){
	
	int vize, final, telafi;
	float sonuc1, sonuc2;
	
	printf("Vize notunuzu giriniz: ");
	scanf("%d",&vize);
	printf("\nFinal notunuzu giriniz: ");
	scanf("%d",&final);
	
	if (vize<0|vize>100|final<0|final>100){
		printf("\nGirdiginiz degerler 0 ile 100 arasinda olmak zorunda");
	}
	else{
	 sonuc1 = ( 0.6 * final ) + ( 0.4 * vize );
	
    if (sonuc1 >= 60 ){
    	
     printf("\nTebrikler ortalamaniz:%.2f Gectiniz! \n ",sonuc1);
	}
	else {
		
		 printf("\nOrtalamaniz(%.2f) -> 60'in altinda oldugu icin gecemediniz,\n\nLutfen butunleme notunuzu giriniz: ",sonuc1);
	     scanf("%d",&telafi);
	     
		 if (telafi<0|telafi>100){
	     printf("\nGirdiginiz butunleme notu 0 ile 100 arasinda olmak zorunda, tekrar deneyiniz");
	     
		 }
		 else {
		 sonuc2 = ( 0.6 * telafi) + ( 0.4 * vize );
		 
		 if (sonuc2 >= 60 ){
		 
		 printf("\nTebrikler notunuz :%.2f Gectiniz! ",sonuc2);
	
	}
	else 
	 printf("\nOrtalamaniz(%.2f) -> 60'in altinda oldugu icin gecemediniz. ",sonuc2);

}
}
}
	
	
	
	

getch();
return 0;
	
}
