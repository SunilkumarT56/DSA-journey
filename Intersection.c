#include <stdio.h>
#include "myutils.h"


int main(){
    int A[] = {1,2,3,4};
    int B[] = {2,3,4,5};
    int n1 = len(A);
    int n2 = len(B);
    int InterArr[100];
    int size = 0;
    int i = 0 , j = 0 ;

    while(i < n1 && j < n2){
        if(A[i] < B[j]){
            i++;
        }
        else if(A[i] > B[j]){
            j++;

        }
        else{
            InterArr[size++] = A[i];
            i++; j++;
        }
    }
    for(int i = 0 ; i < size  ; i++){
        printf("%d\t", InterArr[i]);
    }
    return 0;

}