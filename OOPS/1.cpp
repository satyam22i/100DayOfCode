#include <iostream>
using namespace std;

//creating classes

//in classes name of Class First letter always be capital;
class Student{
 public:
    string Name;
    float cgpa;

    void percentange(){
        cout<<(cgpa*10)<<endl;
    }



};

int main(){

    Student s1;
 s1.Name= "Satyam";
 s1.cgpa=8.54;
 cout<<s1.Name<<endl;;
 s1.percentange();



    return 0;
}