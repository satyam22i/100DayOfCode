#include <iostream>

using namespace std;

int linearSearch(int *arr, int n, int key){

    for(int i=0;i<n;i++){
    if(arr[i]==key){
       return i;
    }
 
}
   return -1;
}

int main(){

    int arr[]={1,2,5,4,8,7,9,6};
    int n = sizeof(arr)/sizeof(int);

    cout<<linearSearch(arr,n,7);

    return 0;
}