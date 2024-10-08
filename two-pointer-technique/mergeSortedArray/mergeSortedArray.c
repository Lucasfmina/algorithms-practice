

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

    int index1 = m-1;
    int index2 = n-1;

    while(index2 >= 0 && index1 >=0){

        if(nums1[index1] > nums2[index2]){
            nums1[index1 + index2 + 1] = nums1[index1];
            index1--;
        }else if(nums1[index1] < nums2[index2]){
            nums1[index1 + index2 + 1] = nums2[index2];
            index2--;
        }else{
            nums1[index1 + index2 + 1] = nums1[index1];
            nums1[index1 + index2] = nums2[index2];
            index1--;
            index2--;
        }
    }
    
    if(index2 >= 0){
        for(int i = 0; i <= index2; i++){
            nums1[i] = nums2[i];
        }
    }
}
