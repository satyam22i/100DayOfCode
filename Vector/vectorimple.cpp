#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> vec ={1,2,3,4};

    cout<< "size of vector "<<vec.size()<<endl;
    cout<<"capacity of vector is "<<vec.capacity()<<endl;
    vec.push_back(5);
        cout<< "size of vector "<<vec.size()<<endl;
    cout<<"capacity of vector is "<<vec.capacity()<<endl;


    return 0;
  
}