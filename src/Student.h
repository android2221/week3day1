#include <iostream>
#include <string>

class Student{
    // Constructor
    public:
        explicit Student(int sId, 
            int phoneNum, 
            char gender, 
            std::string fName, 
            std::string lName, 
            std::string address);

    private:
        int sId = 0;
        int phoneNum = 0;
        char gender;
        std::string fName;
        std::string lName;
        std::string address;

};
