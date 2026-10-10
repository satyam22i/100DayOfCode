#include <iostream>

using namespace std;

int PrintSubarray(int *arr,  int n){

    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            //cout<<"("<<start<<","<<end<<")";

            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<",";
        }
       cout<<endl;

    }




}

int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);

    cout<<PrintSubarray(arr,n);


    return 0;
}