#include <stdio.h>

int main(){
    int nums[] = {1,2,3,4,5};
    int size  = sizeof(nums)/sizeof(nums[0]);
    int temp = nums[0];
    for(int i =  1 ; i < size ; i++){
        nums[i-1] = nums[i];

    }
    nums[size-1] = temp;
    for(int i = 0 ; i < size ; i++){
        printf("%d\t",nums[i]);
    }
    return 0 ;


}