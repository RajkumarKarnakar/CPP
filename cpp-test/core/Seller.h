#include<iostream>
#include<string>
#include<vector>
#include"Person.h"
#include "Product.h"

using namespace std;
class Seller : public Person
{
private:
    std::string seller_name;
    int id;
    vector <Product> products;
    public:
    Seller(string seller_name,int id):Person(seller_name)
    {
        this->seller_name=seller_name;
        this->id=id;
    }
    string getSellerName()
    {
        return seller_name;
    }
    int getId()
    {
        return id;
    }
    void addProduct(Product p)
    {
        products.push_back(p);
    }
    void displayProducts()
    {
        cout<<"product sold by "<<seller_name<<":\n";
        for(int i=0;i<products.size();i++)
        {
            products[i].display();
        }
    }
      vector<Product> getProducts() 
    {
        return products;
    }
};
// A vector to store all the sellers
vector<Seller> sellers;

// A function to add a new seller
void addSeller() 
{
    string seller_name;
    int id;
    cout << "Enter seller name: ";
    cin >> seller_name;
    cout << "Enter id: ";
    cin >> id;
    Seller s(seller_name, id); // create a seller object
    sellers.push_back(s); // add the seller to the vector
    cout << "Seller added successfully.\n";
}

// A function to add a new product for a seller
void addProduct() {
    int seller_id, product_id;
    string product_name;
    double price;
    cout << "Enter seller id: ";
    cin >> seller_id;
    bool found = false; // flag to check if the seller exists
    for (int i = 0; i < sellers.size(); i++) 
    {
        if (sellers[i].getId() == seller_id) 
        { 
            // if the seller id matches
            found = true; // set the flag to true
            cout << "Enter product id: ";
            cin >> product_id;
            cout << "Enter product name: ";
            cin >> product_name;
            cout << "Enter price: ";
            cin >> price;
            Product p(product_id, product_name, price); // create a product object
            sellers[i].addProduct(p); // add the product to the seller's vector
            cout << "Product added successfully.\n";
            break;
        }
    }
    if (!found) 
    { // if the seller id does not match
        cout << "Invalid seller id.\n";
    }
}

// A function to display all the products sold by a specific seller
void displayProductsBySeller() 
{
    int seller_id;
    cout << "Enter seller id: ";
    cin >> seller_id;
    bool found = false; // flag to check if the seller exists
    for (int i = 0; i < sellers.size(); i++) 
    {
        if (sellers[i].getId() == seller_id) 
        {
            // if the seller id matches
            found = true; // set the flag to true
            sellers[i].displayProducts(); // display the products of the seller
            break;
        }
    }
    if (!found) { // if the seller id does not match
        cout << "Invalid seller id.\n";
    }
}

// A function to display all the sellers
void displayAllSellers() 
{
    cout << "All sellers:\n";
    for (int i = 0; i < sellers.size(); i++) 
    {
        cout << "Seller name: " << sellers[i].getSellerName() << "\n";
        cout << "Id: " << sellers[i].getId() << "\n";
        cout << "Person name: " << sellers[i].getName() << "\n";
    }
}

// A function to display all the products
void displayAllProducts() 
{
    cout << "All products:\n";
    for (int i = 0; i < sellers.size(); i++) 
    {
        vector<Product> products = sellers[i].getProducts(); // get the products of the seller
        for (int j = 0; j < products.size(); j++) 
        {
            products[j].display(); // display the product details
        }
    }
}

// A function to show the menu
void showMenu() {
    cout << "Welcome to the e-commerce application.\n";
    cout << "Please choose an option from the menu:\n";
    cout << "1. Add a new seller\n";
    cout << "2. Add a new product for a seller\n";
    cout << "3. Display all the products sold by a specific seller\n";
    cout << "4. Display all the sellers\n";
    cout << "5. Display all the products\n";
    cout << "6. Exit the application\n";
}