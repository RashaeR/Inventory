#include "InventoryClass.h"



InventoryClass::InventoryClass()
{
	itemNumber = 0;
	cost = 0;
	quantity = 0;
	totalCost = 0;
}

InventoryClass::InventoryClass(int itemNum, double itemCost, int quan)
{
	itemNumber = itemNum;
	cost = itemCost;
	quantity = quan;
	setTotalCost();
}

InventoryClass::~InventoryClass()
{
}

void InventoryClass::setItemNumber(int item)
{
	itemNumber = item;
}

void InventoryClass::setQuantity(int quan)
{
	quantity = quan;
}

void InventoryClass::setCost(double itemCost)
{
	cost = itemCost;
}

void InventoryClass::setTotalCost()
{
	totalCost = (quantity * cost);
}

int InventoryClass::getItemNumber()
{
	return itemNumber;
}

int InventoryClass::getQuantity()
{
	return quantity;
}

double InventoryClass::getCost()
{
	return cost;
}

double InventoryClass::getTotalCost()
{
	return totalCost = (quantity * cost);
}
