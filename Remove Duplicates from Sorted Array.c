int removeDuplicates(int* nums, int numsSize) {
    int j=0,i=0;
    for(i=0;i<=numsSize-2;i++)
        if(nums[i+1]!=nums[i])
            nums[++j]=nums[i+1];
    return(++j);
}
