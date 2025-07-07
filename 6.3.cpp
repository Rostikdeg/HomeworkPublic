#include <iostream>

using namespace std;

class Employee{
    unsigned int itsAge;
    unsigned int itsYearsOfService ;;
    unsigned int itsSalary; 
public:
    void setAge(unsigned int Age);
    unsigned int getAge() const;

    void setYearsOfService(unsigned int YearsOfService );
    unsigned int getYearsOfService () const;

    void setSalary(unsigned int Salary);
    unsigned int getSalary() const;
};


void Employee::setAge(unsigned int Age){
    itsAge = Age;
}

unsigned int Employee::getAge() const{
    return itsAge;
}


void Employee::setYearsOfService(unsigned int YearsOfService){
    itsYearsOfService = YearsOfService;
}

unsigned int Employee::getYearsOfService() const{
    return itsYearsOfService;
}


void Employee::setSalary(unsigned int Salary){
    itsSalary = Salary;
}

unsigned int Employee::getSalary() const{
    return itsSalary;
}



int main (){
    return 0;
}