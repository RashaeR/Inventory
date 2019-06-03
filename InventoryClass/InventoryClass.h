#pragma once
class InventoryClass
{
public:
	InventoryClass();
	~InventoryClass();
	InventoryClass(int, double, int);
	void setItemNumber(int);
	void setQuantity(int);
	void setCost(double);
	void setTotalCost();
	int getItemNumber();
	int getQuantity();
	double getCost();
	double getTotalCost();


private:
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;

};



