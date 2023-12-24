//https://leetcode.com/problems/max-consecutive-ones/
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max=0,n=0;
    for(int i=0;i<=numsSize-1;i++)
    {
        if(nums[i]==1)
            n++;
        if(nums[i]!=1 || i==(numsSize-1)){
            max=(n>max)?n:max;
            n=0;
        }
    }
   return(max); 
    
}
