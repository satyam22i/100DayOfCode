#include <iostream>
#include <string>
using namespace std;

//creating classes

//in classes name of Class First letter always be capital;
class Student{
 private:
    string Name;
    float cgpa;
public:
    void percentange(){
        cout<<(cgpa*10)<<endl;
    }

    //setters

    void setName(string namVal){
       Name =  namVal;
    }

    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }

    //getters

    string getName(){
        return Name;
    }

    float getCgpa(){
        return cgpa;
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