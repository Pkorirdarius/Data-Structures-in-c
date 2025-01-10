// Pointer Arithmetic
#include<stdio.h>
int main(){
    int arr[5]={2,3,4,5,6};
    int *ptr;
    ptr = arr;
    printf("Element using a pointer:\n");
    for(int i = 0 ; i < 5; i++){
        printf("%d\n",*ptr);
        ptr++;
    }
    ptr=arr+3;
    printf("The 4th element is = %d",*ptr);
    return 0;
}
