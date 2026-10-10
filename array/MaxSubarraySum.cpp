#include <iostream>

using namespace std;

//bruteforce way

int MaxSubarray1(int *arr, int n){
     int maxSum=INT_MIN;

    for(int start=0;start<n;start++){
        int currSum=0;
       

        for(int end=start;end<n;end++){
  currSum+=arr[end];
  cout<<currSum;
  cout<<",";
  maxSum=max(maxSum,currSum);

        }
        cout<<endl;

    }

    cout<<"max sum of this array is: "<<maxSum;

}

int kadansAlgo(int *arr, int n){

    int currSum=0;
    int maxSum = INT_MIN;

    for(int i=0;i<n;i++){
        currSum += arr[i];
        maxSum= max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }

    }

    return maxSum;


}

int main(){

    int arr[]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    cout<< "the Max sum of subbaray is : ";

   cout<< kadansAlgo(arr,n);



    return 0;
}