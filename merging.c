#include<stdio.h>
int main()
{
    int a[10]={1,2,3};
    int b[10]={1,3,3};
    int c[5];
    int size_array;
    int i,j,k;
    i = 0;
    k = 0;
    while (i<3)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    j = 0;
    while (j<3)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    i=0;
    while (i<=5)
    {
        printf("%d",c[i]);
        i++;
    }
    return 0;
}