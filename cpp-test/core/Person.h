#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Person
{
    private:
    std::string name;
    public:
    Person(std::string name)
    {
    this->name=name;
    }
    public:
    std::string getName()
    {
    return this->name;
    }
};