#include <iostream>
#include <cstring> 

using namespace std;

bool reverse(char word[], int n){
    int start =0;
    int en = n-1;

    while(start<en){
      if(word[start]!=word[en]){
        return false;
      }
      start++;
      en--;
    }

    return true;
 

    
}



int main(){

    char word[]="Satyam";

  cout<< reverse(word, strlen(word));


    return 0;
}