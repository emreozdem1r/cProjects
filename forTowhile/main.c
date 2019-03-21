#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *dosya,*yaz;
    int i,k,sayac=0,j;
    char *f,dizi[100000];
    dosya=fopen("main.c","r");
    yaz=fopen("yaz.txt","w");
    char A[20],B[20],C[20];
    int tut;
    int t=0;
    if(dosya!=NULL){
        do{
            f=fgets(dizi,10000,dosya);
            if(f!=NULL){
                for(i=0; i<strlen(dizi); i++){
                    if(dizi[i]=='f' && dizi[i+1]=='o' && dizi[i+2]=='r' ){
                        tut=i;
                        k=i+4;
                        while(dizi[k]!=';'){
                            A[t++]=dizi[k++];
                        }
                        t=0;
                        while(dizi[k+1]!=';'){
                            B[t++]=dizi[k+1];
                            k++;
                        }
                        t=0;
                        while(dizi[k+2]!=')'){
                            C[t++]=dizi[k+2];
                            k++;
                        }
                        fprintf(yaz,"%s\n",A);
                        fprintf(yaz,"while(%s){\n",B);
                        fprintf(yaz,"%s\n",C);
                    }
                } if(dizi[tut]=='f' && dizi[tut+1]=='o' && dizi[tut+2]=='r' ){
                continue;
            }
            else
                fprintf(yaz,"%s",dizi);
            }
        }
        while(f!=NULL);
    }
    else
    {
        printf("dosya bulunamadi!");
    }
    fclose(dosya);
    fclose(yaz);
    return 0;
}
