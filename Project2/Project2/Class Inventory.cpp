#include "ProjectHeader.h"
#include <iomanip>
#include <string>
using namespace std;

//class file that sets, defines and/or calculate our structures
struct Product
{
	int productID = 0;
	string productName = "";
	double productPrice = 0.0;
	int productQuantity = 0;
};
void setProductDetails(int id, string name, double price, int quantity)
{
	int productID = id;
	string productName = name;
	double productPrice = price;
	int productQuantity = quantity;
}
void displayProductDetails()
{
	std::cout << "Product ID: " << productID << endl;
	cout << "Product Name: " << productName << endl;
	cout << "Product Price: $" << productPrice << endl;
	cout << "Product Quantity: " << productQuantity << endl;

}