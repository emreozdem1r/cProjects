// Assignment : Bisection metod ile kök bulma

#include <stdio.h>
#include <math.h>

int main() {
	float x1,x2,x3;								//Burada degiskenleri tanimliyoruz.
	float hata_payi,sabit;
	float sayi=0,a,toplam=0;
	float f,f2;
	float b,c;
	float min,max;
	min=0;
	max=0;
	printf("Gireceginiz denklem asagidaki gibi 3. dereceden bir denklem olmali.\n");
	printf("Ax^3 + Bx^2 + Cx+ D\n\n");
	printf("A,B,C denklemin kat sayilari ve D sabit olup asagida girmeniz istenecektir!\n\n");
	printf("Simdi kat sayilari giriniz.\n\n");

	printf("X'in 3. dereceden katsayisi:"); 	//Tanimlanan degiskenlere kullanicidan denklemin katsayilarini ve sabit sayiyi istiyoruz.
	scanf("%f",&x3);
	printf("X'in 2. dereceden katsayisi:");
	scanf("%f",&x2);
	printf("X'in 1.dereceden katsayisini:");
	scanf("%f",&x1);
	printf("Sabit sayi:");						//Kullanicidan hata payi, minimum ve maximum araliklari kullanicidan istiyoruz.
	scanf("%f",&sabit);
	printf("Hata payini giriniz:");
	scanf("%f",&hata_payi);
	if(hata_payi==0) //hata payini 0 girilmesinin engelliyoruz.
				{
					printf("Hata payi 0 olamaz");
				}
				else
				{
	printf("maximum deger: ");
	scanf("%f",&max);
	printf("minimum deger: ");
	scanf("%f",&min);
			if(min>=max)							//Minimum ve maximum araliklarinin dogru bir sekilde girilmesinin kontrolünü gerçeklestiriyoruz.
			{
				printf("max ve min degerleri ters girilmistir.");
			}
			else
			{
				a=max-min;							// a sayisi max-min olarak tanimlaniyor araligi küçültmek açisindan
				sayi=(max+min)/2;					//Bisection metodunda verilen max ve min degerlerin toplaminin ortalamasi aliniyor.
			int i;
			for(i=0;i<=1;i++)						//Girilen degerlerin araliginda kökler mevcut olup olmadiginin kontrolü yapiliyor.
			{
				if(i==0)
				{
					f2=x3*(pow(min,3))+x2*(pow(min,2))+x1*min+sabit;	// Girilen sayi araliklarinin fonksiyonda ki sonuçlarini aliyoruz.
					b=f2;

				}
				else if(i==1)
				{
					f2=x3*(pow(max,3))+x2*(pow(max,2))+x1*max+sabit;
					c=f2;
				}
			}
			if(b*c>0)					// Bu aldigimiz sonuçlarin çarpimi sifirdan büyük yani pozitif ise girilen aralikta kök olmadigi anlami tasiyor.
			{
				printf("Bu aralikta kok yoktur.");
			}
			else
			{
				for(;a>hata_payi;)			//Kökün belirli bir hata payi ile hesaplanmasi islemi burada gerçeklestiriliyor.
				{
					f=x3*(pow(sayi,3))+x2*(pow(sayi,2))+x1*sayi+sabit;
					if(f<0)
					{
						min=sayi;
						a=max-min;		// Fonksiyonda min degeri girildiginde sonuç negatif çikiyor ise onu sayiya'ya atýyoruz.
					}					// ve a=max-min yaparak kök araligini daraltip sonuca varmaya çalisiyoruz.
					else if(f>0)
					{
						max=sayi;
						a=max-min;			// Fonksiyonda max degeri girildiginde sonuç pozitif çikiyoryor ise max degerini sayiya atiyoruz.
					}						// burada da ayni sekilde a'yi küçülterek sonuca varmaya çalisiyoruz.
						sayi=(min+max)/2;	// sayi her islem sonunda maximum ve minimum degerinin yarisini alir.
				}

    	printf("Denkleminizin koku: %.2f",sayi);		// Bulunan kökün ekrana çiktisi
    		}
		}
	}
	return 0;
}
