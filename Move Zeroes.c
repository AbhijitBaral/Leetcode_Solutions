void moveZeroes(int* nums, int numsSize) {
    int j;
    for(int i=0;i<=numsSize-1;i++)
        if(nums[i]==0){
            j=i;
            while(nums[j]==0 && j!=numsSize-1)
                j++;
            nums[i]=nums[j];
            nums[j]=0;
        }
}

