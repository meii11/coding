int* runningSum(int* nums, int numsSize, int* returnSize){
    int *sums = (int*)malloc(sizeof(int)*numsSize);
    sums[0] = nums[0];
    for(int i = 1; i < numsSize; i++){
        sums[i] = sums[i-1] + nums[i];
    }
    * returnSize = numsSize;
    return sums;
}
