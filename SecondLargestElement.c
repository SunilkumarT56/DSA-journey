#include <stdio.h>
#include <limits.h>

int main(){
    int nums[] = {1,2,3,4,5,6};
    int slargest = -1;
    int largest = nums[0];
    int smallest = nums[0];
    int ssmallest = INT_MAX;
    int size = sizeof(nums)/sizeof(nums[0]);
    for(int i  = 1 ; i < size ; i++){
        if(largest < nums[i]){
            slargest = largest;
            largest = nums[i];
        }
        else if(largest > nums[i] && slargest < nums[i]){
            slargest = nums[i];
        }
        if(smallest > nums[i]){
            ssmallest = smallest;
            smallest  = nums[i];
        }
        else if(smallest!= nums[i] && ssmallest > nums[i]){
            ssmallest  = nums[i];
        }
    }
    printf("%d is the second largest ", slargest);
    printf("\n%d is the second smallest ", ssmallest);
    return 0 ;
}