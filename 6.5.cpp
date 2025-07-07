#include <iostream>

using namespace std;

unsigned int myFunc(unsigned int );

class Employee{
    unsigned int itsAge;
    unsigned int itsYearsOfService ;;
    unsigned int itsSalary; 
public:
    void setAge(unsigned int Age);
    unsigned int getAge() const;

    void setYearsOfService(unsigned int YearsOfService );
    unsigned int getYearsOfService () const;

    Employee(unsigned int Salary);
    unsigned int getSalary() const;
};

Employee::Employee(unsigned int Salary){
    int i;
    i = Salary % 10;
    if(i < 5){
        Salary = Salary - i;
        itsSalary = Salary;
    }else{
        Salary = Salary - i +10;
        itsSalary = Salary;
    }
}

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

unsigned int Employee::getSalary() const{
    return itsSalary;
}



int main (){
    Employee Oleg(447);

    Oleg.setAge(40);
    Oleg.setYearsOfService(18);

    cout << "Oleg is " << Oleg.getAge() << " yeArs old. " << "It is already working " << Oleg.getYearsOfService() << " yers. " << "He has a salary of " << Oleg.getSalary() << " dollars.\n";

    return 0;
}