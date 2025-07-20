#include <stdio.h>

int main(){
    int nums[] = {1,3,5,7};
    int size = len(nums);

    for(int i = 1 ; i < size ; i++){
        if(nums[i] <= nums[i-1]){
            printf("\nNot sorted");
            return 0;
        }
    }

    printf("sorted");
    return  0 ;

}