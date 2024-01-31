//https://leetcode.com/problems/find-pivot-index/description/

int pivotIndex(int* nums, int numsSize) {
    int x=0,ind=0,suml=0,sumr=0;
    if(numsSize==1)
        return(0);
    for(ind=0;ind<=numsSize-1;ind++){
        while(x<ind){
            suml+=nums[x];
            x++;
        }
        x++;
        while(x<=numsSize-1){
            sumr+=nums[x];
            x++;
        }
        x=0;
        if(suml==sumr)
            return(ind);
        suml=0;
        sumr=0;
    }
    return(-1);
}
