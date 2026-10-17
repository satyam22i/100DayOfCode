#include <iostream>

using namespace std;

int countstbit(int num){
    int count =0 ;

    while (num>0)
    {
        if(num & 1){
            count++;

        }

       num = num >> 1;
        
    }

    cout<<count;
    

}

int main(){

    countstbit(10);



   

    return 0;

}