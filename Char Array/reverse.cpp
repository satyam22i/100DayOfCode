#include <iostream>
#include <cstring> 

using namespace std;

void reverse(char word[], int n){
    int start =0;
    int en = n-1;

    while(start<en){
        swap(word[start],word[en]);
        start++;
        en--;
    }

    cout<<word;
}



int main(){

    char word[]="APPLE";

   reverse(word, strlen(word));


    return 0;
}