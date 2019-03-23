#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10
void sort(int dizi[],int boyut);
void write(int dizi[],int boyut);
int main()
{
    int sayiDizisi[10]= {2,4,8,7,3,0,1,6,9,5};
    int i;
    printf("Dizi Siralanmadan Once:\n");
     for(i=0; i<10; i++)
        printf("%d-",sayiDizisi[i]);
    printf("\n\n");
    sort(sayiDizisi,BOYUT);
    printf("Dizi Siralandiktan Sonra:\n");
    write(sayiDizisi,BOYUT);

    return 0;
}
void sort(int dizi[],int boyut)
{
    int i,j,temp;

    for(i=0; i<10; i++)
    {
        for(j=0; j<i; j++)
        {
            if(dizi[i]<dizi[j])
            {
                temp=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=temp;
            }
        }
    }
}
void write(int dizi[],int boyut)
{
    int i;
     for(i=0; i<10; i++)
        printf("%d-",dizi[i]);
}
