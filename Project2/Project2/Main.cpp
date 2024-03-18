#include <iostream>
#include<iomanip>
#include "ProjectHeader.h"
#include "Class Inventory.cpp"
using namespace std;

int main()
{
	Inventory product; //create an instance of the class inventory

	// the following variables are product details
	int id; 
	string name;
	double price;
	int quantity;

	cout << "Enter Product ID: ";
	cin >> id;
	cin.ignore();
	cout << "Enter Product Name: ";
	getline(cin, name);
	cout << "Enter Product Price: ";
	cin >> price;
	cout << "Enter Product Quantity: ";
	cin >> quantity;

	/* if user chooses to enter a new product ID, we will store it in 
		*/ 
	product.setProductDetails(id, name, price, quantity);
	cout << "\nProduct Details:\n";
	product.displayProductDetails();

	return 0;
}
