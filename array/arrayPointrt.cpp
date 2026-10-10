#include <iostream>

using namespace std;

void PrintArray(int nums[], int n){

    for (int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }



}

int main(){

    int arr[]={1,3,2,4,5,6,7,8};

    int n = sizeof(arr)/sizeof(int);
    cout<<sizeof(arr);
    cout<<endl;

    PrintArray(arr,n);

    return 0;
}