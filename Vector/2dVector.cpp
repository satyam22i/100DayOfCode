#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j];
        }
        cout<<endl;
    }

    cout<<endl;
//in 2d vector we can gives diff-2 size of rows;

 vector <vector<int>> vec1 = {{1,2,3},{4,5},{6}};
    for(int i=0;i<vec1.size();i++){
        for(int j=0;j<vec1[i].size();j++){
            cout<<vec1[i][j];
        }
        cout<<endl;
    }


    return 0;
  
}