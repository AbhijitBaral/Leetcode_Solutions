//https://leetcode.com/problems/sort-array-by-parity/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int *final=(int*)malloc(numsSize*sizeof(int));
    int i=0,j=0,k=0;
    while(i<=numsSize-1){
        if(nums[i]%2==0){
            final[j]=nums[i];
            j++;
        }
        else{
            final[numsSize-1-k]=nums[i];
            k++;
        }
        i++;
    }
    
    return(final);
}
