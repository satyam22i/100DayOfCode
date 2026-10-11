#include <iostream>

using namespace std;

int Print(int arr[], int n){

    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    cout<<"]";

}

void selectionSort(int *arr,int n){

    for(int i=0;i<n-1;i++){
        int minIdx=i;
        // finding min
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }

    Print(arr,n);

 

}

int main(){
    int arr[]={7,4,6,2,1,5,3};
    int n = sizeof(arr)/sizeof(int);
   selectionSort(arr,n);

    return 0;
}