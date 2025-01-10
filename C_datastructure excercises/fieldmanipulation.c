// Field manipulation.
#include <stdio.h>
#define N 10
// Task 1
int main(){
    int arr[N];
    int sum = 0;
    int i = 1;
    printf("The Array:\n");
    for( i ; i <= 10; i++){
        arr[i]=i; 
        printf("%d,",arr[i]);
        sum += arr[i];
    }
    printf("\nThe sum is=%d",sum);
    
    printf("\nReversed array:\n");
    for(i=N; i >=0;i--){
        printf("%d,",i,arr[i] );
    }
    return 0;
}