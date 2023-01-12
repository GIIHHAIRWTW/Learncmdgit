#include<iostream>
#include <string>

using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;
    
    void print() {
        cout << "Name:" + Name << endl;
        cout << "Company:" + Company << endl;
        cout << "Age:" << Age << endl;
    }
    
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    Employee employee1 = Employee("Tom","alibaba",20);
    // employee1.name = "Tom";
    // employee1.company = "alibaba";
    // employee1.age = 20;
    employee1.print();
}