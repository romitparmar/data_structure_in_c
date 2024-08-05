#include<stdio.h>
int scaning_array(int a[],int size_array)
{
    int i;
    printf("enter the elemnts of array: \n");
     for ( i = 0; i <(size_array-1); i++)
    {
        scanf("%d\n",&a[i]);
    }
}
int traversing(int a[],int size_array)
{
    int i;
    for ( i = 0; i <(size_array-1); i++)
    {
        printf("the element of the array is:%d\n",a[i]);
    }
}
int main()
{
    int a[10];
    int size_array;
    printf("please enter the size of array: ");
    scanf("%d",&size_array);
    scaning_array(a,size_array);
    traversing(a,size_array);
    return 0;
}