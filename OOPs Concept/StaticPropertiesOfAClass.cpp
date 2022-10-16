#include<bits/stdc++.h>
using namespace std;
#include "StaticPropertiesOfAClass.h"

int main(){ 
    Student s1;
    /* cout<<s1.rollNumber<< " "<<s1.age<<endl;
    cout<<s1.totalStudents<<endl; // it is logically incorrect and ignore this method;
    s1.totalStudents = 20; */

    Student  s2;
    Student s3, s4, s5;
    //cout<< Student :: totalStudents<<endl; couldn't able to access beacuse totalStdent is private
    /*cout<<s2.totalStudents<<endl;
    cout<< Student :: totalStudents<<endl;*/

    cout<<Student :: getTotalStudents() << endl;

    return 0;
}
