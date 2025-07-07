#include <iostream>

using namespace std;

class Employee{
    unsigned int itsAge;
    unsigned int itsYearsOfService ;;
    unsigned int itsSalary; 
public:
    Employee(unsigned int Age, unsigned int YearsOfService, unsigned int Salary);

    unsigned int getAge() const;
    unsigned int getYearsOfService () const;
    unsigned int getSalary() const;
};


Employee::Employee(unsigned int Age, unsigned int YearsOfService, unsigned int Salary){
    itsAge = Age;
    itsYearsOfService = YearsOfService;;
    itsSalary = Salary;
}

unsigned int Employee::getAge() const{
    return itsAge;
}

unsigned int Employee::getYearsOfService() const{
    return itsYearsOfService;
}

unsigned int Employee::getSalary() const{
    return itsSalary;
}

int main (){
    Employee Oleg(30, 10, 1000);

    cout << "Oleg is " << Oleg.getAge() << " yeArs old. " << "It is already working " << Oleg.getYearsOfService() << " yers. " << "He has a salary of " << Oleg.getSalary() << " dollars.\n";

    return 0;
}