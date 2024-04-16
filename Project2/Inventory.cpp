#include <iostream>
#include <vector>
#include <limits>
#include<iomanip>

using namespace std;

class Inventory // this class will display our entire inventory
{
private:
    
    struct Product { // make the attributes we want to include for our product
        string productName;
        int productID;
        double productPrice;
        int productQuantity;
    };

    vector<Product> productList; // create a vector called 'productList' using the variables (attributes) from our Product Struct. Declare vector in Inventory class b/c it's easier to use within the same class.

public:
    void addProduct(const string& name, int id, double price, int quantity) // function to add product: allows struct variables to equal the variables we were asked to enter from main(). 
    {
        Product newProduct; // we have to make a new object from Product struct. This means that each object will be able to use the variables from this struct. Each object of this will be put into our vector.
        newProduct.productName = name; // the productName of newProduct object (in this Inventory clasS) is going to equal the name passed through from the main(). 
        newProduct.productID = id;
        newProduct.productPrice = price;
        newProduct.productQuantity = quantity;
        productList.push_back(newProduct); // after we set struct variables equal to parameter, the data that is stored in newProduct will be put into our vector productList.
        cout << "Product added successfully." << endl;
    }
 
    void displayInventory() const // function to display entire inventory. no variables to be changed so it is constant.
    {
        cout << "\nInventory Details:\n";
        if (productList.empty()) { // if the vector has 0 objects, then it is empty.
            cout << setw(50) << "Inventory is empty." << endl;
        }
        else {
            cout << setw(15) << "Product Name" << setw(15) << "Product ID" << setw(15) << "Price" << setw(15) << "Quantity" << endl;
            for (const auto& product : productList) { // this is a for loop that will iterate each element in the vector productList. The 'auto' is made to detect the type below: 
                cout << setw(15) << product.productName << setw(15) << product.productID << setw(15) << "$" << product.productPrice << setw(15) << product.productQuantity << endl;
            }                    
        }
    }

    void displayProductDetails(int id) const // function to display a specific product: const, b/c no variable should be changed in this function
    {                                          // the only thing we need to pass through is the id, to specify which product ID we want to display.
        for (const auto& product : productList) { // make a product variable. auto is put here to automatically match to the type. this is a loop will basically iterate over each element of the vector productList.
            if (product.productID == id) { 
                cout << "\nProduct Details:\n";
                cout << "Product Name: " << product.productName << endl;
                cout << "Product ID: " << product.productID << endl;
                cout << "Product Price: $" << product.productPrice << endl;
                cout << "Product Quantity: " << product.productQuantity << endl;
                return;
            }
        }
        cout << "Product with ID " << id << " not found." << endl;
    }

    void deleteProduct(int id) 
    {
        for (auto it = productList.begin(); it != productList.end(); ++it) 
        {
            if (it->productID == id)
            {
                productList.erase(it);
                cout << "Product with ID " << id << " has been deleted." << endl;
                return;
            }
        }
        cout << "Product with ID " << id << " not found." << endl;
    }
};
