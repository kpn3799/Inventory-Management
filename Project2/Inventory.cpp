#include "ProjectHeader.h"
#include <iomanip>
#include <string>
using namespace std;

// Our Inventory class, where the bulk of our functions and scripting will be in. This includes setters and getters.

//class inventory that sets, defines and/or calculate our structures
class Inventory 
{
private:
		string productName = "";
		int productID=0;
		double productPrice=0;
		int productQuantity=0;
public:
	// below will add a e

	void getProductDetails()
	{

		cout << "Enter Product Name: ";
		cin.ignore();
		std::getline(std::cin, productName);
		cout << "Enter Product ID Number: ";
		cin >> productID;
		cout << "Enter Product Price: ";
		cin >> productPrice;
		cout << "Enter Product Quantity: ";
		cin >> productQuantity;
	}

	void setProductDetails(int id, string name, double price, int quantity)
	{
		string productName = name;
		int productID = id;
		double productPrice = price;
		int productQuantity = quantity;

	}
	void displayProductDetails() const
	{
		cout << "Product Name: " << productName << endl;
		cout << "Product ID: " << productID << endl;
		cout << "Product Price: $" << productPrice << endl;
		cout << "Product Quantity: " << productQuantity << endl;

	}
	int deleteElement(int arr[], int n, int x)
	{
		// Search x in array
		int i;
		for (i = 0; i < n; i++)
			if (arr[i] = x)
				break;

		// If x found in array
		if (i < n)
		{
			// reduce size of array and move all
			// elements on space ahead
			n = n - 1;
			for (int j = i; j < n; j++)
				arr[j] = arr[j + 1];
		}

		return n;
	}
};