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
        int studentId, 
        int phoneNum, 
        char gender, 
        std::string fName, 
        std::string lName, 
        std::string address){

        studentId = studentId;
        phoneNum = phoneNum;
        gender = gender;
        fName = fName;
        lName = lName;
        address = address;
    }

void Student::setPhoneNum(int number){
    phoneNum = number;
}

void Student::setFName(std::string fName){
    fName = fName;
}

void Student::setLName(std::string lName){
    lName = lName;
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

