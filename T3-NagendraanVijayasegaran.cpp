#include <iostream>

using namespace std;

struct CarType{
	string carModel;
	float carPrice;
	CarType * next;
};
CarType * newNode(string carModel,float carPrice)
{
	CarType * temp = new CarType(); 
	temp->carModel = carModel;
	temp->carPrice = carPrice;
	temp->next = NULL;
	return temp;
}

CarType * addCar(CarType * current, string carModel, float carPrice)
{
	CarType * newRecord = new CarType();
	
	if(current == NULL)
	{
		current = newNode(carModel ,carPrice);
		current -> next = current;
	}
	else
	{
	
		newRecord -> carModel = carModel ;
		newRecord -> carPrice = carPrice; 
		newRecord -> next = current -> next;
		current -> next = newRecord;
	}
		return current;
}

CarType * deleteCar(CarType * current, string carModel, float carPrice)
{
	CarType * newRecord = new CarType();
	
	if(current == NULL)
	{
			
	}
	else if(current -> next == current)
	{
		delete current;
		current = NULL;
	}
	else
	{
		current -> next = current -> next -> next;
		newRecord = current -> next;
		delete newRecord;
	}
	return current;
}

CarType * nextCar(CarType * current, string carModel, float carPrice)
{
	if(current == NULL)
	{
		
	}
	else
	{
		current = current -> next ;
	}
	return current;
}


int main ()
{
	int number;
	string carModel;
	float carPrice;
	struct CarType * current = NULL;
	
	do
	{
		cout<<"\nPlease choose what you want to do:"<<endl;
		cout<<"1. Add a car."<<endl;
		cout<<"2. Delete the next car."<<endl;
		cout<<"3. Go to the next car."<<endl;
		cout<<"0. Exit this program."<<endl;
		cout<<"Enter your choice:"<<endl;
		cin>> number;
		
		if(number == 1)
		{
			cout<<"Please enter the name and price of the new car:";
			cin>>carModel>>carPrice;
			current = addCar(current,carModel,carPrice);
		}
		else if(number == 2)
		{
			current = deleteCar(current,carModel,carPrice);
		}
		else if(number == 3)
		{
			current = nextCar(current,carModel,carPrice);
		}
		else 
		{
		
		}
		if(current!=NULL)
		{
			cout<<"Current name and price : " << current -> carModel<<"\tRM"<<current->carPrice;
		}
		
	}while(number!=0);
	
	return 0;
}
