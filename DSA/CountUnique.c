#include <stdio.h>

int main(){
    int nums[] = {1,2,2,2,3,3,3,3};
    int i = 0 ;
    int size  = len(nums);
    for(int j = 1 ; j < size ; j++){
        if(nums[j]!=nums[i]){
            nums[i+1] = nums[j];
            i++;
        }
    }
    printf("No of unique elements is %d\n",i+1);
    for(int k  = 0 ; k < i+1 ; k++){
        printf("%d\t",nums[k]);
    }
    return 0;
}