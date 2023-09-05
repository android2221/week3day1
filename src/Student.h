#include <iostream>
#include <string>

class Student{
    public:
        //Constructor
        explicit Student(int studentId, 
            int phoneNum, 
            char gender, 
            std::string fName, 
            std::string lName, 
            std::string address);
        
        // Getters
        int getStudentId();
        int getPhoneNumber();
        std::string getFullName();

        // Setters
        void setPhoneNum(int phoneNum);
        void setFName(std::string fName);
        void setLName(std::string lName);

    private:
        int studentId = 0;
        int phoneNum = 0;
        char gender;
        std::string fName;
        std::string lName;
        std::string address;

};
