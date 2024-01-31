//https://leetcode.com/problems/largest-number-at-least-twice-of-others/description/

int dominantIndex(int* nums, int numsSize) {
    int larg=nums[0],inlarg=0;
    for(int i=0;i<=numsSize-1;i++){
        if(nums[i]>larg){
            larg=nums[i];
            inlarg=i;
        }
    }
    for(int i=0;i<=numsSize-1;i++){
        if(larg<2*nums[i] && i!=inlarg)
            return(-1);
    }
    return(inlarg);
}
