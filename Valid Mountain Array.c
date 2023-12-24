//https://leetcode.com/problems/valid-mountain-array/
bool validMountainArray(int* arr, int arrSize){
    int i=1;
    if(arrSize<3)
        return(0);
    while(i<=arrSize-2){
        if((arr[i-1]>=arr[i]&&arr[i]<=arr[i+1])||arr[0]>=arr[1]||arr[arrSize-1]>=arr[arrSize-2])
            return(0);    
        i++;
        }
        return(1);
}
