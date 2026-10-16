#include <iostream>
using namespace std;

int binarySearch(int *arr, int n,int target){

    int low =0 ;
    int high = n-1;
    int mid;

    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    return 0;

}

int main(){
    int arr[] = {1,3,5,7,9,12,16,34,42,76};
    int n = sizeof(arr)/sizeof(int);
   cout<< binarySearch(arr,n,7);
}