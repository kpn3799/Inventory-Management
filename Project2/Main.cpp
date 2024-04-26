#include <iostream>
#include <iomanip>
#include "ProjectHeader.h"
#include "Inventory.cpp"
#include <vector>
using namespace std;

int main()
{
    Inventory inventory; // Create an object inventory from our class called 'Inventory'
    int choice;
        cout << "Welcome to Inventory Manager! Please choose an option:";
        std::cout << "\n" << std::setfill('~') << std::setw(100); // Make it look nice w/ iomanip
        cout << "\n1. Register a product ID\n";
        cout << "2. Add product\n";
        cout << "3. Display inventory\n";
        cout << "4. Display details of a specific product\n";
        cout << "5. Delete a product\n";
        cout << "6. Exit";
        std::cout << "\n" << std::setfill('~') << std::setw(100);
    do { // this 'do' loop will
        cout << "\nEnter your choice from the top menu:\n";
        cin >> choice; 

        switch (choice) {
        case 1: { // if user picks choice 1, then ask user to enter id (to register the ID first w/o details to indicate that the product is existing)
            int id;
            cout << "\nEnter Product ID Number:\n";
            cin >> id;
            break;
        }
        case 2: { // if user picks choice 2, then ask user to enter product id, quantity, price
            string name;
            int id, quantity;
            double price;
            cout << "\nEnter Product Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "\nEnter Product ID Number: ";
            cin >> id;
            cout << "\nEnter Product Price: ";
            cin >> price;
            cout << "\nEnter Product Quantity: ";
            cin >> quantity;
            inventory.addProduct(name, id, price, quantity); // now that we've input product details, call the addProduct function to our inventory
            break;
        }
        case 3: // if user picks choice 3, call the displayInventory function. this is a void, so values will be returned to the main()
            inventory.displayInventory();
            break;
        case 4: { // if the user picks choice 4, it will display the individual product details.
            int id;
            cout << "\nEnter the product ID to display details: ";
            cin >> id;
            inventory.displayProductDetails(id); // call to the function displayProductDetails that will pass id through the user input id. 
            break;
        }
        case 5: { // calls the deleteProduct function that passes the id as a parameter.
            int id;
            cout << "\nEnter the product ID to delete: ";
            cin >> id;
            inventory.deleteProduct(id);
            break;
        }
        case 6: // 6 will exit the menu program
            cout << "\nThank you!";
            break;
        default: // if 'choice' does not match the above switch case, then this error message will display.
            cout << "\nError.. enter a number between 1 and 6. ";
            break;
        }

    } while (choice != 6); // this 'do while' loop will keep asking user to input choice UNTIL the user inputs '6', then the loop will end and forego the program.

    return 0;
}
