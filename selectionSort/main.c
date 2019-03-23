#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void selectionSort(int dizi[],int boyut);
void print(int dizi[],int boyut);
int main()
{
    int i,sayiDizisi[SIZE]= {9,6,3,2,1,5,4,8,7,0}; //Siralanacak Dizi
    printf("Siralanmadan Once\n");
            for(i=0; i<SIZE; i++)   //Sirali olmayan dizinin yazdirilmasi
                printf("%d-",sayiDizisi[i]);

    printf("\n------------------------\n");
    printf("Siralandiktan Sonra\n");
    selectionSort(sayiDizisi,SIZE);     // Diziler fonksiyona sadece isimleriyle yazılır
    print(sayiDizisi,SIZE);             //koseli parantez kullanılmaz.
    return 0;
}
void selectionSort(int dizi[],int boyut)
{
    int i,j,temp;
    for(i=0; i<boyut; i++)
    {
        for(j=i; j<boyut; j++)  // Siralanacak dizi 0. elemandan baslar ve bu eleman
        {                       // butun diziyle karsilastirilir.
            if(dizi[i]>dizi[j]) // i=0 oldugunda j=0 dan baslar ve geri kalan listeyle karsilastilir
            {                   // i artarken 5'e geldigi zaman j=5 ten baslayacak.
                temp=dizi[i];   // Bunun nedeni 5'e kadar olan elemanlar zaten siralanmistir.
                dizi[i]=dizi[j];// isimiz geri kalab elemanlari siralamaktir.
                dizi[j]=temp;
            }
        }
    }
}
void print(int dizi[], int boyut)
{
    int i;
    for(i=0; i<boyut; i++)
        printf("%d-",dizi[i]);
}
