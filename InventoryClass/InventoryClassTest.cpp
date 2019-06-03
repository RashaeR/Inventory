#include <iostream>
#include "InventoryClass.h"

using namespace std;

struct Inv
{
	InventoryClass inventory;

};


int main()
{	
	const int NUM = 50;
	int product;
	int num;
	int onHand;
	double unitCost;
	double total = 0;

	cout << "Enter the number of different products you want to inventory: ";
	cin >> product;

	Inv item[NUM];
	for (int count = 0; count < product; count++)
	{
		cout << "Product " << count+1 << endl;
		cout << "Enter the product's item number: ";
		cin >> num;
		item[count].inventory.setItemNumber(num);
		cout << endl;
		
		if (num < 0)
		{

			do
			{
				
				cout << "Invaild input, please enter a positive number." << endl;
				cout << "Enter the product's item number: ";
				cin >> num;
				item[count].inventory.setItemNumber(num);
				cout << endl;
			} while (num < 0);

		}


		cout << "Enter the amount of product on hand: ";
		cin >> onHand;
		item[count].inventory.setQuantity(onHand);
		cout << endl;

		if (onHand < 0)
		{
			do
			{
				cout << "Invaild input, please enter a positive number." << endl;
				cout << "Enter the amount of product on hand: ";
				cin >> onHand;
				item[count].inventory.setQuantity(onHand);
				cout << endl;
			} while (onHand < 0);
		}
		
		
		cout << "Enter the wholesale per-unit cost of the product: $";
		cin >> unitCost;
		item[count].inventory.setCost(unitCost);
		cout << endl;

		if (unitCost < 0)
		{
			do
			{
				cout << "Invaild input, please enter a positive number." << endl;
				cout << "Enter the wholesale per-unit cost of the product: ";
				cin >> unitCost;
				item[count].inventory.setCost(unitCost);
				cout << endl;
			} while (unitCost < 0);
		}
		cout << "The total inventory cost of the product is $" << item[count].inventory.getTotalCost() << endl;
		cout << endl;
		total += item[count].inventory.getTotalCost();
	}
	cout << "----------------------------------------------------------" << endl;
	cout << "The total cost of all products is $" << total << endl;
	
	system("pause");
	return 0;
}