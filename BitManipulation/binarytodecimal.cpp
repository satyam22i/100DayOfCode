#include <iostream>
#include <cstring>

using namespace std;

int binaryTodecimal(string num,int n){

    int power =1;
    int decimal  =0 ;

    for(int i =n-1;i>=0;i--){
        if(num[i]=='1'){
            decimal += power;
          
        }
          power = power*2;
    }

    return decimal;

}

int main(){

    string str = "1111";
    int n = str.length();
    
    cout<<binaryTodecimal(str,n);
    
    
    return 0;
}