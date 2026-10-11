#include <iostream>

using namespace std;

int Print(int arr[], int n){

    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    cout<<"]";

}

void countSort(int *arr,int n){

    int freq[10000]={0};
    int minVal=INT_MAX,  maxVal=INT_MIN; 

    for(int i=0;i<n;i++){
        minVal= min(minVal , arr[i]);
        maxVal = max(maxVal, arr[i]);

    }

    //first step

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    //2nd step
    for(int i=minVal,j=0;i<=maxVal;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }

    }

    
    

    Print(arr,n);

 

}

int main(){
    int arr[]={7,4,7,6,2,1,5,3};
    int n = sizeof(arr)/sizeof(int);
   countSort(arr,n);

    return 0;
}