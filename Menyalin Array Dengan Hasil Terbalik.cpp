#include<stdio.h>

int main(void)
{
    int c[5] = {5,10,6,0,4};
    int d[5];
    int i=0, j=0;
    printf("Nilai array yang akan di tampilkan\n");
    for (i=4; i>=0; i--)
    {
        d[i]=c[j];
        printf("%d", c[j]);
        j++;
    }

    printf("\n");
    printf("Posisi terbalik dari array A ke array B sebagai beriut\n");
    for(i=0; i<5; i++)
    {
        printf("%d", d[i]);
    }
    printf("\n");
    return 0;
}
