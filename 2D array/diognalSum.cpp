#include <iostream>

using namespace std;


//O(n^2) time complexity
int diognalSum(int arr[][4],int n){

    int sum =0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                sum += arr[i][j];
            }else if(j==n-i-1){
                sum += arr[i][j];
            }
        }
    }

    

    cout << "sum is: "<<sum<<endl;
    return sum;

}


//O(n) 

int dioSum(int arr[][4], int n){
    int sum=0;
    for(int i =0 ; i<n ; i++){
        sum += arr[i][i];
        if(i!= n-i-1){
            sum += arr[i][n-i-1];
        }
    }
      cout << "sum is: "<<sum<<endl;
    return sum;
}


int main(){

    int arr[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}

    };

    dioSum(arr,4);
    

    return 0;

}