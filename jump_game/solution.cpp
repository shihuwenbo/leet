#include <stdlib.h>
#include <stdio.h>

bool canJump(int* nums, int numsSize) {
    
    int idx = 0;
    while(true) {
        if(idx >= numsSize-1) {
            return true;
        }
        int new_idx = idx;
        int num_jump = nums[idx+1];
        for(int i=1; i<=nums[idx] && idx+i<numsSize; i++) {
            if(idx+i == numsSize-1) {
                return true;
            }
            if(nums[idx+i] >= num_jump) {
                new_idx = idx+i;
            }
        }
        idx = new_idx;
        if(idx < numsSize-1 && nums[idx] == 0) {
            return false;
        }
    }

    return false;
}

int main() {
    int nums[] = {2,3,1,1,4};
    printf("%d\n", canJump(nums, 5));

}
