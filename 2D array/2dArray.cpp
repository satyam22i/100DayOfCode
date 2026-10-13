#include <iostream>
using namespace std;

int main(){

    int n =3,m=4;
    int studetns[n][m];

    //input
    cout<<"Enter students data: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>studetns[i][j];
        }
    }

    //output
    cout<<"Your 2D array is: ";
    cout<<endl;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<studetns[i][j]<<" ";
        }
        cout<<endl;

    }

    return 0;
}