#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include <iostream>

class Employee {
    private:
        std::string ID;
        std::string name;
        std::string surname;
        std::string departmentID;
        std::string position;
    public:
        Employee(std::string ID, std::string name, std::string surname, std::string departmentID, std::string position);
        Employee();
        std::string get_ID();
        std::string get_name();
        std::string get_surname();
        std::string get_departmentID();
        std::string get_position();
        void printEmployees();
};

#endif
