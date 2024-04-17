#include <iostream>
#include <string.h>

class Employee
{
private:
    int id;
    int salary;

public:
    std::string name;
    void setid(int id)
    {
        this->id = id;
        std::cout << "\nI'D " << this->id << std::endl;
    }
    int getid()
    {
        return id;
    }

    void setname(std::string name)
    {
        this->name = name;
        std::cout << this->name;
    }

    void setsalary(int salary)
    {
        this->salary = salary;

        std::cout << "Salary " << this->salary << std::endl;
        ;
    }
    int getsalary()
    {
        return salary;
    }
    void insertion();
};

int main()
{

    Employee first;
    first.setid(02);
    first.setsalary(50000);
    first.setname("shezad");
    
    Employee second;
    second.setid(41);
    second.setsalary(100000);
    second.setname("Vishal");
}