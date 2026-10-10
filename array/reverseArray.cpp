#include <iostream>

using namespace std;

void printRevrse(int *arr,int n){

    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }

}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};

    int n = sizeof(arr)/sizeof(int);
     int start =0;
     int end=n-1;
    
     while(start<end){
     
        //swap
     int temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
     

     start++;
     end--;

     }
printRevrse(arr,n);
     

    return 0;

}