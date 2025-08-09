// https://leetcode.com/problems/two-sum/?envType=problem-list-v2&envId=array

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int diff;
    for (int i=0;i<numsSize;i++){
        diff = target - nums[i];
        for (int j=0;j<numsSize;j++){
            if ((j!=i) & (nums[j]==diff)){
                int *answer;
                *returnSize = 2;
                answer = (int*) malloc(2*sizeof(int));
                answer[0] = i;
                answer[1] = j;
                return answer;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}