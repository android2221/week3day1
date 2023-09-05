#include <string>
#include <iostream>
#include "Student.h"

Student::Student(
        int inStudentId, 
        int inPhoneNum, 
        char inGender, 
        std::string inFName, 
        std::string inLName, 
        std::string inAddress){

        studentId = inStudentId;
        phoneNum = inPhoneNum;
        gender = inGender;
        fName = inFName;
        lName = inLName;
        address = inAddress;
    }

void Student::setPhoneNum(int number){
    phoneNum = number;
}

void Student::setFName(std::string inFName){
    fName = inFName;
}

void Student::setLName(std::string inLName){
    lName = inLName;
}

int Student::getStudentId(){
    return studentId;
}

int Student::getPhoneNumber(){
    return phoneNum;
}

std::string Student::getFullName(){
    return fName + " " + lName;
}

