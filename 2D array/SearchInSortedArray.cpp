#include <iostream>

using namespace std;


int bruteForce(int arr[][4], int n, int key){

    for(int i = 0 ; i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==key){
                cout<<i<<","<<j;
                return 0;
            }
        }
    }
    return -1;
    
}


//O(n+m)
bool Staircase(int arr[][4], int n, int m, int key){

    int i=0;
    int j= m-1;

    while(i<n && j>=0){

        if(arr[i][j]==key){
            cout<< "key found at "<<i<<","<<j<<endl;
            return true;
        }else if(arr[i][j]>key){
            //left
            j--;
        }else{
            //down
            i++;
        }

    }
cout<<"key not found\n";
return false;
   
    
}




int main(){

    int arr[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}

    };

cout<<Staircase(arr,4,4,11);
    

    return 0;

}