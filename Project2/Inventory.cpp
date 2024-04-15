#include <iostream>
#include <vector>
#include <limits>
#include<iomanip>

using namespace std;

class Inventory
{
private:
    struct Product {
        string productName;
        int productID;
        double productPrice;
        int productQuantity;
    };

    vector<Product> productList;

public:
    void addProduct(const string& name, int id, double price, int quantity)
    {
        Product newProduct;
        newProduct.productName = name;
        newProduct.productID = id;
        newProduct.productPrice = price;
        newProduct.productQuantity = quantity;
        productList.push_back(newProduct);
        cout << "Product added successfully." << endl;
    }

    void displayInventory() const
    {
        cout << "\nInventory Details:\n";
        if (productList.empty()) {
            cout << setw(50) << "Inventory is empty." << endl;
        }
        else {
            cout << setw(15) << "Product Name" << setw(15) << "Product ID" << setw(15) << "Price" << setw(15) << "Quantity" << endl;
            for (const auto& product : productList) {
                cout << setw(15) << product.productName << setw(15) << product.productID << setw(15) << "$" << product.productPrice << setw(15) << product.productQuantity << endl;
            }
        }
    }

    void displayProductDetails(int id) const
    {
        for (const auto& product : productList) {
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