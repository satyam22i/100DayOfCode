#include <iostream>
#include <cstring>


using namespace std;

bool Print(string s1, string s2, int n)

{if (s1 == s2) {
        return true;
    }

    // s1 ke har possible swap
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            swap(s1[i], s1[j]);

            if (s1 == s2) {
                return true;
            }

            swap(s1[i], s1[j]); 
        }
    }

    // s2 ke har possible swap
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            swap(s2[i], s2[j]);

            if (s1 == s2) {
                return true;
            }

            swap(s2[i], s2[j]); 
        }
    }

    return false;
   

}



int main(){

    string s1 = "bank";
    string s2= "kanb";

    cout<<Print(s1,s2, s2.length());
  
 
    return 0;
}