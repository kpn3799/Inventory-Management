#include <iostream>
#include <iomanip>
#include "ProjectHeader.h"
#include "Inventory.cpp"
#include <vector>
using namespace std;

int main()
{
    Inventory inventory;
    int choice;
        cout << "Welcome to Inventory Manager! Please choose an option:";
        std::cout << "\n" << std::setfill('~') << std::setw(100);
        cout << "\n1. Register a product ID\n";
        cout << "2. Add product\n";
        cout << "3. Display inventory\n";
        cout << "4. Display details of a specific product\n";
        cout << "5. Delete a product\n";
        cout << "6. Exit";
        std::cout << "\n" << std::setfill('~') << std::setw(100);
    do {
        cout << "\nEnter your choice from the top menu:\n";
        cin >> choice;

        switch (choice) {
        case 1: {
            int id;
            cout << "\nEnter Product ID Number:\n";
            cin >> id;
            // You can register product ID here if needed
            break;
        }
        case 2: {
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
            inventory.addProduct(name, id, price, quantity);
            break;
        }
        case 3:
            inventory.displayInventory();
            break;
        case 4: {
            int id;
            cout << "\nEnter the product ID to display details: ";
            cin >> id;
            inventory.displayProductDetails(id);
            break;
        }
        case 5: {
            int id;
            cout << "\nEnter the product ID to delete: ";
            cin >> id;
            inventory.deleteProduct(id);
            break;
        }
        case 6:
            cout << "\nThank you!";
            break;
        default:
            cout << "\nError.. enter a number between 1 and 6. ";
            break;
        }

    } while (choice != 6);

    return 0;
}