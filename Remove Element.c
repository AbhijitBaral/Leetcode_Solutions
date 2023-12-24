//https://leetcode.com/problems/remove-element/
int removeElement(int* nums, int numsSize, int val) {

    int j=0;
    for(int i=0;i<=numsSize-1;i++){
        if(nums[i]!=val){
            nums[j++]=nums[i];
        }
        else
            nums[i]=nums[j];
    }
    return(j);
}
