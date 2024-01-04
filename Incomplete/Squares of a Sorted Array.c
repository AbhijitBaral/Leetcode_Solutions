//https://leetcode.com/problems/squares-of-a-sorted-array/description/
//Problem: Expected Time complexity-O(n); My time complexity-O(n^2)

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *final;
    int i,j;
    /*Sorting the array*/
    for(i=0;i<=numsSize-1;i++)
        for(j=1;j<numsSize;j++)
            if(abs(nums[j-1])>abs(nums[j]))
            {
                nums[j-1]=nums[j-1]+nums[j];
                nums[j]=nums[j-1]-nums[j];
                nums[j-1]=nums[j-1]-nums[j];
            }
    final=(int *)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    i=0;
    while(i<=numsSize-1){
        *(final+i)=pow(*(nums+i),2);
        i++;
    }  
    return(final);
}
