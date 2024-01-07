#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Product
{
private:
    int id;
    string product_name;
    double price;
public:
    Product(int i,string pn,double mrp)
    {
        id=i;
        product_name=pn;
        price=mrp;
    }

    int getId() 
    {
        return id;
    }

    string getProductName() 
    {
        return product_name;
    }

    double getPrice() 
    {
        return price;
    }
    void display()
    {
        cout<<"Id: "<<id<<"\n";
        cout<<"product name: "<< product_name<<"\n";
        cout<<"price: "<<price<<"\n";
    }
};






