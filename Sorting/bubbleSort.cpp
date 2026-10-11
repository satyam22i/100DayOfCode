#include <iostream>

using namespace std;

int Print(int arr[], int n){

    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    cout<<"]";

}

void bubbleSort(int *arr,int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                
            }

        }
    }

    Print(arr,n);

}

int main(){
    int arr[]={7,4,6,2,1,5,3};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);

    return 0;
}