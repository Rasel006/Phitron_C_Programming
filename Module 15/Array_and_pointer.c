#include<stdio.h>

int main()

{

    int arr[5] = {10, 4, 45, 89, 15};
    printf("Address of 0'th index address: %p\n", &arr[0]);
    printf("Address of 0'th index address: %p\n", arr); // arr = &arr[0]

    printf("0'th index val: %d\n", arr[0]);
    printf("0'th index val: %d\n", *arr); // *arr = arr[0]


    printf("3'rd inded val: %d\n", arr[3]);
    printf("3'rd inded val: %d\n", *(arr+3)); // *(arr+3) = arr[3]

    
    /*---> So, arr[i] = *(arr + i) <----
    And another twist is__>
    arr[i] = *(arr+i) = *(i+arr) = i[arr]
    here, i[arr] = *(i + arr)
    */

    printf("\n\n\n------------------------************************************-----------------------------\n");
    printf("Proof:\n");
    printf("1'st index: %d\n", arr[1]);
    printf("1'st index: %d\n", 1[arr]);
    printf("1'st index: %d\n", *(arr+1));
    printf("1'st index: %d\n", *(1+arr));

    

    return 0;
}