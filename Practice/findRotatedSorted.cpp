#include <iostream>

using namespace std;

int findRotatedArray(int *nums, int n, int target){
    int low =0;
    int high =n-1;
    

    while(low<=high){
        int mid = (low+high)/2;

        if(nums[mid]==target){
            return mid;
        }else if(nums[low]<=nums[mid]){

            if(target>=nums[low] && target<nums[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }else{
            if(target>nums[mid] && target <=nums[high]){
                low= mid+1;
            }else{
                high = mid-1;
            }
        }

    }

    return -1;
}

int main(){

    int arr[]= {4,5,6,7,8,1,2,3};
    int n = sizeof(arr)/sizeof(int);
   cout<< findRotatedArray(arr,n,100);


    return 0;
}