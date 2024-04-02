
#ifndef PROJECT_HEADER_H
#define PROJECT_HEADER_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#pragma once

// these are functions that we will use in our inventory and main classes

	void setProductDetails(int id, string name, double price, int quantity);
	void getProductDetails();
	void displayProductDetails();
	int deleteElement(int arr[], int n, int x);


#endif //must end with this