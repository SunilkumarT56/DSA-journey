#include <stdio.h>
#include "myutils.h"

int main(){
    int nums[] = {1,1,0,0,0,1,1,1,0,1,1,1,1};
    int cnt = 0 , maxx = 0;
    for(int i = 0 ; i< len(nums);i++){
        if(nums[i]==1){
            cnt++;
            maxx = max(maxx , cnt);
        }
        else{
            cnt = 0;
        }
    }
    printf("Maximum consecutive ones is %d",maxx);
    return 0 ;
}
