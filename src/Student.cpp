#include "Student.h"
#include <string>
#include <iostream>

int studentId = 0;
int phoneNum = 0;
char gender;
std::string fName;
std::string lName;
std::string address;

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

int getStudentId(){
    return studentId;
}

int getPhoneNumber(){
    return phoneNum;
}

std::string getFullName(){
    return fName + " " + lName;
}

