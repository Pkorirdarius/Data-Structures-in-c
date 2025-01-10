#include <stdio.h>

// 3D array
int main(){
    // intialization of 3d array
    int a[2][3][3];
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                a[i][j][k]=i+j+k;
                printf("%3d",a[i][j][k]);
            }
        }
    }
}