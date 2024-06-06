#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Kac elemanli dizi olsun? ");
    scanf("%d",&n);
    int dizi[n];
    int i;
    int j;
    int gecici;

    for(i=0;i<n;i++)
    {
        scanf("%d",&dizi[i]);
    }

    for (i=1;i<n;i++)
    {
        j=i;
        while(j>0 && dizi[j] < dizi[j-1])
        {
            gecici=dizi[j];
            dizi[j]=dizi[j-1];
            dizi[j-1]=gecici;
            j--;
        }
    }

    printf("Algortima sonrasi dizi\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",dizi[i]);
    }


    return 0;
}
