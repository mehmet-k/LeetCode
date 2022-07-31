

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    int * returnArr = malloc(numsSize*2*sizeof(int));
    int i;
    for(i=0;i<numsSize;i++) {
        returnArr[i] = nums[i];
        returnArr[i+numsSize] = nums[i];
    }
    *returnSize = numsSize*2;
    return returnArr;
}
