class Student{

public:
    int age;
    const int rollNumber;
    int &x; // age reference variable


    Student(int r, int age): rollNumber(r) , age(age), x(this->age){ // don't require to write 'this' keyword it is uderstandable by the list.
        //rollNumber = r;
    }
};