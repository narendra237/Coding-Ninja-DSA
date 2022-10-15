#include<bits/stdc++.h>
using namespace std;

class Student{
    int age;
    char* name;

    public:

    Student(int age , char * name){
        this->age = age;
        // this->name = name;  known as shallow Copy
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);

        // above two line shows us about deep copy , it copies entire name array with a new address and the orignal
        // array remain untouched and can accessible through every object;
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }
};

int main(){
    char name[] = "abcd";
    Student s1(20, name );
    s1.display();

    name[3] = 'e';
    Student s2(24, name);
    s2.display();

    s1.display();// in this piece of code, the address of code is same for every displayy output
    // let se the address of name is {500}. So the every time we change the character in name, it
    // changes for every upcoming data and reflects in previous data also  like for above line .

    return 0;

}