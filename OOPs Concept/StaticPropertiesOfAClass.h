// static function only can access static properties;
// static don't have 'this' keyword

class Student{
    static int totalStudents;
    public:
    int rollNumber;
    int age;
    //static int totalStudents; // static keyword should be define outside the class also;
    Student(){
        totalStudents++;
    }

    int getRollNumber(){
        return rollNumber;
    }
    static int getTotalStudents(){
        return totalStudents;
    }

}; 

int Student :: totalStudents = 0; // initalize static data members