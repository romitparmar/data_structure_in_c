// #include<stdio.h>


// int main(){

//     int k;
//     int j;
//     int temp;
//     int a[4] = {7,5,3,1};
//     int n = 4;
//     int i;
//     j = k-1;
//     k=1;
//     temp = a[j];
//     for ( i = 0; i < n-1; i++)
//     {
//         while (temp<=a[j] && j>=0)
//         {
//             a[j+1] = a[j];
//             j-=1;
//         }
//         a[j+1] = temp;
//     }
//     puts("Sorted array:");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
//     return 0;
// }







#include<stdio.h>

int main() {
    int i, j, temp;
    int a[4] = {7, 5, 3, 1};
    int n = 4;  // Length of the array

    // Insertion sort algorithm
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;

        // Shift elements of a[0..i-1] that are greater than temp
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    // Print the sorted array
    puts("Sorted array:");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
