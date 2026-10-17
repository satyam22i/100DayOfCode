#include <iostream>

using namespace std;

int upadateIthbit(int num , int i, int val){

    //to update ith bit clear ith bit first

    num = num & ~(1 << i); // clear ith bit

    num = num | (val << i);

    return num;

}

int main(){

    cout<<upadateIthbit(7,2,0);

    return 0;

}