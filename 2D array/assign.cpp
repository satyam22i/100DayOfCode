#include <iostream>
using namespace std;

int printCount(int arr[][3], int n, int m){

    int count=0;


    for(int i = 0; i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==7){
                count++;
            }
        }

    }

    return count;
    

}

int printSum(int nums[][3],int m){
    int sum=0;
    for(int j=0;j<m;j++){
        sum += nums[1][j];
    }
    return sum;
}

int main(){

    //int arr[ 2][ 3] = { {4,7,8}, {8,8,7} };
    int nums[ 3][3 ] = { {1,4,9}, {11,4,3}, {2,2,3} };

cout<<printSum(nums,3);
    return 0;
}