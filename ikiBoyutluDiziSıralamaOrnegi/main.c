#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[3][3]={4,1,7,5,3,9,2,8,6};
    int k,l,i,j,tut;
    for(k=0;k<3;k++)
    {
        for(l=0;l<3;l++)
        {
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                        if(dizi[k][l]<dizi[i][j])
                        {
                            tut=dizi[k][l];
                            dizi[k][l]=dizi[i][j];
                            dizi[i][j]=tut;
                        }
                }
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",dizi[i][j]);
        }
        printf("\n");
    }
    return 0;
}
