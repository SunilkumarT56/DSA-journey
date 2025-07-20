#include <stdio.h>

int main() {
    int nums[] = {-7, 1, 5, 2, -4, 3, 0};
    int size = sizeof(nums) / sizeof(nums[0]);

    int prefix_sum[size + 1];
    prefix_sum[0] = 0;

    for (int i = 1; i <= size; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + nums[i - 1];
    }

    for (int i = 0; i <= size; i++) {
        printf("%d\t", prefix_sum[i]);
    }

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (prefix_sum[i] == (prefix_sum[size] - prefix_sum[i + 1])) {
            count++;
        }
    }

    printf("\nEquilibrium points count: %d\n", count);
    return 0;
}
