#include <iostream>
#include <string>

class Student{
    public:
        //Constructor
        explicit Student(int inStudentId, 
            int inPhoneNum, 
            char inGender, 
            std::string inFName, 
            std::string inLName, 
            std::string inAddress);
        
        // Getters
        int getStudentId();
        int getPhoneNumber();
        std::string getFullName();

        // Setters
        void setPhoneNum(int inPhoneNum);
        void setFName(std::string inFName);
        void setLName(std::string inLName);

    private:
        int studentId;
        int phoneNum;
        char gender;
        std::string fName;
        std::string lName;
        std::string address;
};
