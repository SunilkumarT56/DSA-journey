#include <stdio.h>

int main(){
    int nums[] = {1,2,4,5,7,3,9};
    int max = nums[0];
    int min = nums[0];
    int size  = sizeof(nums)/sizeof(nums[0]);
    for(int i  = 1 ; i < size ; i++){
        if(max < nums[i]){
            max = nums[i];
        }
        if(min > nums[i]){
            min = nums[i];
        }
    }
    printf("%d is the largest number", max);
    printf("\n%d is the smallest number ",min);
    return 0;

}