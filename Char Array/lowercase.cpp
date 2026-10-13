#include <iostream>
#include <cstring> 

using namespace std;

void Uppercase(char word[], int n){

    for(int i=0;i<n;i++){
        char ch =word[i];
        if(ch>='a' && ch<='z'){
            continue;
        }else{
           word[i]= ch-'A'+'a';
        }
    }

    cout<<word;

}

int main(){

    char word[]="aPpLe";

    Uppercase(word, strlen(word));


    return 0;
}