#include <stdio.h>
#include "myutils.h"

int main(){
    int nums[] = {1,2,3,4,5,6};
    int target = 7;
    for(int i = 0 ; i < len(nums) ; i++){
        if(target == nums[i]){
            printf("Element is found at index %d", i);
            return 0;
        }
        
    }
    printf("Not found");

}