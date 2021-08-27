#include <iostream>

using namespace std;

struct CarType{
	string carModel;
	float carPrice;
	CarType * next;
};
CarType * newNode(string carModel)
{
	CarType *temp ; 
	temp->carModel = carModel;
	temp->carPrice = carPrice;
	temp->right = NULL;
	
	return temp;
}

