//https://leetcode.com/problems/contains-duplicate-ii/description/
//Problem: Expected time complexity-O(n); My time complexity- O(n^2)

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    for(int i=0;i<=numsSize-1;i++){
        for(int j=0;j<=numsSize-1;j++){
            if(i!=j && abs(i-j)<=k && nums[i]==nums[j])
            return(true);
        }
    }
    return(false);
}
