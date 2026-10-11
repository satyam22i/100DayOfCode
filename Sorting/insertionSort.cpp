#include <iostream>

using namespace std;

int Print(int arr[], int n){

    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    cout<<"]";

}

void insertionSort(int *arr,int n){

    for(int i=1;i<n;i++){
        int curr =arr[i];
        int prev= i-1;

    while(prev>=0 && arr[prev]>curr){
        swap(arr[prev],arr[prev+1]);
        prev--;
    }

    arr[prev+1]=curr;
    }

    
    

    Print(arr,n);

 

}

int main(){
    int arr[]={7,4,6,2,1,5,3};
    int n = sizeof(arr)/sizeof(int);
   insertionSort(arr,n);

    return 0;
}