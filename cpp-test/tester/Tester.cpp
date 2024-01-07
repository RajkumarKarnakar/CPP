#include<iostream>
#include<vector>
#include"../core/Seller.h"
using namespace std;
int main() {
    int choice;
    do {
        showMenu(); // show the menu
        cin >> choice; // get the user's choice
        switch (choice) {
            case 1:
                addSeller(); // add a new seller
                cout<<"-------------------------------------";
                break;
            case 2:
                addProduct(); // add a new product for a seller
                cout<<"-------------------------------------";
                break;
            case 3:
                displayProductsBySeller(); // display all the products sold by a specific seller
                cout<<"-------------------------------------";
                break;
            case 4:
                displayAllSellers(); // display all the sellers
                cout<<"-------------------------------------";
                break;
            case 5:
                displayAllProducts(); // display all the products
                cout<<"-------------------------------------";
                break;
            case 6:
                cout << "Thank you for using the e-commerce application.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 6); // repeat until the user chooses to exit
    return 0;
}