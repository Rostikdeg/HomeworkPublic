#include <iostream>
using namespace std;

class Cat {
public:
    Cat(int age) : itsAge(age) {}   
    ~Cat() {}                       
    
    int GetAge() const { return itsAge; }  
private:
    int itsAge;  
};


Cat& MakeCat(int age);

int main() {
    int age = 7;

 
    Cat Boots = MakeCat(age);  //Створюється копія але посилання  на динамічну пам’ять

    cout << "Boots is: " << Boots.GetAge() << " years old" << endl;

    //Ми не викликали delete об’єкт Cat створений через new залишився в пам’яті

    return 0;
}


Cat& MakeCat(int age) {
    Cat *pCat = new Cat(age); 
    return *pCat;              //Повертаємо посилання але не кажемо хто має delete