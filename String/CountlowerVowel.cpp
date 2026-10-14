#include <iostream>
#include <cstring>


using namespace std;

int Print(string str, int n){
    int count =0;

    for(int i =0 ;i<n;i++){
        if(str[i]>='a' && str[i]<='z'){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ){
                count++;
            }
        }
    }

    return count;

   

}



int main(){

    string str = "apple";
    cout<<Print(str, str.length());
 
    return 0;
}