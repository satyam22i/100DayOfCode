#include <iostream>

using namespace std;

int transpose(int mat[][3],int n, int m){

    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
        cout<<mat[i][j]<<" ";
        }
        cout<<endl;

    }

    return 0;
    
}

int main(){
    int mat[2][3]={{1,2,3},{4,5,6}};

    transpose(mat,2,3);

}