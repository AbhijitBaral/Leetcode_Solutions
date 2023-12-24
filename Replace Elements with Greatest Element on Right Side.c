//https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/description/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize) {
    int large=arr[arrSize-1];
    int *final=(int*)malloc(arrSize*sizeof(int));
    for(int i=arrSize-1;i>=0;i--){
        final[i]=large;
        if(arr[i]>large)
           large=arr[i];
    }
    *returnSize=arrSize;
    final[arrSize-1]=-1;
    return final;
}
