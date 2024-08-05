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
    int max;
    int position_of_element;
    int value;
    // position_of_element = 
    printf("please enter the size of array: ");
    scanf("%d",&size_array);
    printf("enter elemnt wwhich you want to insert in array: \n");
    scanf("%d",&value);
    printf("enter the index where you want to insert the value: \n");
    scanf("%d",&position_of_element);
    scaning_array(a,size_array);
    while (position_of_element>(max-1))
    {
        a[position_of_element] = a[position_of_element+1];
        position_of_element++;
    }
    a[position_of_element] = value;
    traversing(a,size_array);
    return 0;
}