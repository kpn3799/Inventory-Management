
#ifndef PROJECT_HEADER_H
#define PROJECT_HEADER_H

//this is where we will define our functions and variables
class Inventory
{
public:
	int productID;
	string productName;
	double productPrice;
	int Quantity;

public: // functions we want to make public for our inventory to access
	void setProductDetails(int, string, double, int);
	void displayProductDetails()
	{
			cout << "Product ID: " << productID << endl;
			cout << "Product Name: " << productName << endl;
			cout << "Product Price: $" << productPrice << endl;
			cout << "Product Quantity: " << productQuantity << endl;
	}

};

#endif //must end with this