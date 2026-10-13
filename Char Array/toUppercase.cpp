#include <iostream>
#include <cstring> 

using namespace std;

void Uppercase(char word[], int n){

    for(int i=0;i<n;i++){
        char ch =word[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }else{
           word[i]= ch-'a'+'A';
        }
    }

    cout<<word;

}

int main(){

    char word[]="aPpLe";

    Uppercase(word, strlen(word));


    return 0;
}