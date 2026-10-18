#include <iostream>
#include <string>

using namespace std;

string decimalTobinary(int n){

    string binary;

    while(n>0){
        if(n%2==0){
            binary.append("0");

        }else{
            binary.append("1");
        }

        n = n/2;
    }
    return binary;

}

int main(){
int n = 15;
 cout<< decimalTobinary(n);

    
    
    return 0;
}