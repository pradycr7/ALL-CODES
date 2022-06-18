#include <bits/stdc++.h>
using namespace std;

// ABSTRACT CLASS
class AbsEmployee
{
   virtual void AskForPromotion()=0; //Virtual keyword says that if the function used is in derived class or not.
//If there then execute that one in the derived class otherwise execute the previous one in the base class.
};

class Employee : AbsEmployee
{ // Interface
public:
    string Name;
    string Company;
    int Age;

    void Intro()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age) // Constructor must be same name as the base class. It does not have any return type.
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion()
    {
        if (Age > 30)
            cout << Name << " You are Promoted " << endl;
        else
            cout << Name << " Not Promoted " << endl;
    }
};



int main()
{

    Employee employee1 = Employee("Pradyumna", "Prady Corp.", 21);
    Employee employee2 = Employee("Priya", "Priya Corp.", 35);
    employee1.Intro();
    employee1.AskForPromotion();
    employee2.Intro();
    employee2.AskForPromotion();
}