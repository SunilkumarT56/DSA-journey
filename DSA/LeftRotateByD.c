#include <stdio.h>

void Reverse(int nums[] , int left , int right){

    while(left <= right){
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        left++;
        right--;                                                    // Right rotation also there 
    }
}

int main(){
    int nums[] = {1,2,3,4,5,6,7,8,9};
    int k = 3;
    int n = sizeof(nums)/sizeof(nums[0]);
    Reverse(nums,0,k-1);
    Reverse(nums , k , n-1);
    Reverse(nums, 0 , n-1);

    for(int i = 0 ; i<n ; i++){
        printf("%d\t",nums[i]);
    }
    return 0;


}