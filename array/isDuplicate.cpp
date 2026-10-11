#include <iostream>

using namespace std;

bool isDuplicate(int *arr, int n){

    int isdup=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                isdup=true;
                break;
            }
        }
    }

    return isdup;

}

int main(){
int arr[]={1,2,3,4,3};

int n = sizeof(arr)/sizeof(int);

cout<<isDuplicate(arr,n);

    return 0;
}