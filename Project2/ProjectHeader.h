
#ifndef PROJECT_HEADER_H
#define PROJECT_HEADER_H
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
#pragma once

// these are functions that we will use in our inventory and main classes

	void setProductDetails(int id, string name, double price, int quantity);
	void getProductDetails();
	void displayProductDetails();
	int getProductID();
	void deleteProduct(int id);


#endif //must end with this