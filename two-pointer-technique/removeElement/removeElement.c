int removeElement(int* nums, int numsSize, int val) {

    if(numsSize == 0){
        return 0;
    }

    int start = 0;
    int end = numsSize-1;

    while(start < end + 1){

        if(nums[end] == val){
            end--;
        }else if(nums[start] == val){
            nums[start] = nums[end];
            end--;
            start++;
        }else{
            start++;
        }
    }

    return end+1;
}