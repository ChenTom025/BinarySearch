int BinarySearch_Insert(int* nums, int numsSize, int target) {
    
    int left = 0;
    int right = numsSize - 1;
   
    if(nums[left] > target){
        return left;
    }
    else if(nums[right] < target){
        return right+1;
    }
    
    
    while(left <= right){
        
        int mid = left + ( right - left ) / 2; // 可避免溢位   
        // int mid = (left + right) / 2;  //無條件捨去小數點:取中間偏左的位置
        
        if(nums[mid] > target){
            right = mid - 1;
        }
        else if (nums[mid] < target){
            left = mid + 1;
        }
        else{
            return mid;
        }
        
    }
    
    return left;   // target不在value內，因為無條件捨去，所以在左邊吧?
    
}
