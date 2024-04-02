#include <iostream>
#include<iomanip>
#include "ProjectHeader.h"
#include "Inventory.cpp"
#include <vector>
using namespace std;

int main()
{

	//dynamically allocate an array: https://www.youtube.com/watch?v=igSuiwB7pBU&ab_channel=CodeBeauty

	// the following variables are product details
	int id=0;
	int quantity = 0;
	std::string name="";
	double price=0;
	const int size = 50;
	Inventory productList[size];

	std::cout << "Would you like to register a product ID?";
		char registerProduct;
		cin >> registerProduct;

		if (registerProduct == 'Y' || 'y')
		{

			for (int i = 0; i < size; i++)
			{
				productList[i].setProductDetails(id, name, price, quantity);
				productList[i].getProductDetails();
				cout << "enter another product?";
				cin >> registerProduct;
				if (registerProduct != 'Y' || 'y')
				{
					cout << "okay!";
					break;
					
				}
			}

		}


	/* if user chooses to enter a new product ID, we will store it in 
		our 'product' object */ 


	std::cout << "Would you like to display entire inventory?";
	char displayInventory;
	cin >> displayInventory;
	if (displayInventory == 'Y' || 'y') {
		cout << "\nProduct Details:\n";
		for (int i = 0; i < size; i++) 
		{
			productList[i].displayProductDetails();
		}
	}

	std::cout << "Would you like to delete a specific product?";
	std::cout << "Enter the product ID of the product you'd like to delete: ";
	int n = sizeof(productList) / sizeof(productList[0]);
	int x;
	cin >> x;

	// Delete x from arr[]
	n = deleteElement(productList, n, x);

	cout << "Modified array is \n";
		for (int i = 0; i < size; i++)
		{
			productList[i].displayProductDetails();
		}

	return 0;
}
