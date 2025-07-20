#include <stdio.h>
#include "myutils.h"

int main(){
    int nums[] = {1,2,0,0,3,4,6,0,7,0,0,8};
    int size = len(nums);
    int j = -1;
    for(int i = 0 ; i < size ; i++){
        if(nums[i]==0){
            j = i;
            break;
        }
    }
    for(int i = j+1 ; i < size ; i++){
        if(nums[i]!=0){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }

    }
    for(int i = 0 ; i < size ; i++){
        printf("%d\t",nums[i]);
    }
    return  0;
}