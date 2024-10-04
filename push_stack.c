// #include<stdio.h>
// int main()
// {
//     int a[]= {23,34,54,23};
//     int top;
//     top = -1;
//     int i;
//     int max = 6;
//     int element = 12;
//     if(top>=(max-1))
//     {
//         printf("stack overflow: ");
//         return -1;
//     }
//     a[top] = element;
//         top+=1;
//     for(i=0;i<5;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[]= {23,34,54,23};
//     int top;
//     // top = -1;
//     int i;
//     int max = 4;
//     int element;
//     top = max-1;
//     if (top<0)
//     {
//         printf("stack underflow: ");
//         return -1;
//     }
//     element = a[top];
//     printf("%d pop element of stack is: ",a[top]);
//     top-=1;
//        printf("%d pop element of stack is: ",a[top]);
//     return 0;
// }



#include<stdio.h>
int get(int a[],int n)
{
    int i;
    for ( i = 0; i <6; i++)
    {
        scanf("%d",&a[i]);
    }
}

int print(int a[],int n)
{
    int i;
    for ( i = 0; i < 7; i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int a[6];
    int n = 5;
    int top = -1;
    int elemnt = 9;
    get(a,n);
    if(top>=(n-1))
    {
        printf("stack overflow:");
        return -1;
    }
    a[top]=elemnt;
    top+=1;
    print(a,n);
    return 0;
}