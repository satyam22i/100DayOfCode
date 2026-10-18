#include <iostream>

using namespace std;

int clearRange(int num , int i , int j){

    int a = (~0<<(j+1));
    int b = ((1<<i)-1);
    int bitmask = a|b;
    int res = num & bitmask;

    return res;

}

int main(){
    cout<< clearRange(31,1,3);
return 0;
}