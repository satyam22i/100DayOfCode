#include <iostream>

using namespace std;

int targetKey(int *arr, int n,int key){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
       
    }


    return -1;

}

int main(){

    int arr[]={2,4,3,1,6};
    int n = sizeof(arr)/sizeof(int);

  cout<<targetKey(arr,n,3);
    return 0;
}