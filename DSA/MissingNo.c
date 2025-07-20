#include <stdio.h>
#include "myutils.h"

int main() {
    int nums[] = {1, 2, 3, 5};  // Example: Missing number is 4
    int xor1 = 0, xor2 = 0;
    int size = len(nums);

    for (int i = 0; i < size; i++) {
        xor1 ^= nums[i];
        xor2 ^= (i + 1);
    }
    xor2 ^= (size + 1);

    int result = xor1 ^ xor2;
    printf("Missing number is: %d\n", result);
    return 0;
}
