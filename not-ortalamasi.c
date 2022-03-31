//girilen notlara gore sýnýfýn ortalamasýný bulmak 


#include <stdio.h>

int main (void)

{
	int i;
	int toplam;
	float ortalama;
	int notu;
	
	toplam=0;
	i=0;
	
	printf ("not giriniz ve ortalama hesabi icin -1 e basiniz !!! \n\n");
	printf ("lutfen notunuzu giriniz : ");
	scanf ("%d",&notu);
	
	while (notu != -1)
	{
		toplam =toplam+notu;
		i = i +1;
		
		printf ("lutfen notunuzu giriniz : ");
		scanf ("%d",&notu);
		
	}
	if (i != 0)	
	{
		ortalama = (float) toplam / i ;
		printf ("sonuc %.2f",ortalama);
	}
	
	else 
	{
		printf ("lutfen notunuzu giriniz : ");
	}
	
	
}
