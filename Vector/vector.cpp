#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec1;
    vec1={1,2,3,4};

    cout<<vec1.size()<<endl;


    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }

    cout<<endl;

    vector<int> vec2(5,-1);

    for(int i =0; i <vec2.size();i++){
        cout<<vec2[i];
    }

    return 0;
  
}