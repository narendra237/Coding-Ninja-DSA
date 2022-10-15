#include<string.h>
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