#include <iostream>
#include <string>

class RetailItem
{
private:
	std::string description;
	int unitsOnHand;
	double price;

public:
	RetailItem() 
	{
		description = " ";
		unitsOnHand = 0;
		price = 0;
	}
	RetailItem(std::string desc, int qty, double cost) 
	{
		description = desc;
		unitsOnHand = qty;
		price = cost;
	}
	std::string getDescription() { return description; }
	int getUnits() { return unitsOnHand; }
	double getPrice() { return price;	}
	void SetDescription(std::string desc) { description = desc; }
	void SetUnits(int qty) { unitsOnHand = qty; }
	void SetPrice(double cost) { price = cost; }
};

int main()
{
	RetailItem Items[4];

	Items[1].SetDescription("Jacket        ");
	Items[1].SetUnits(12);
	Items[1].SetPrice(59.95);
	Items[2].SetDescription("Designer Jeans");
	Items[2].SetUnits(40);
	Items[2].SetPrice(34.95);
	Items[3].SetDescription("Shirt         ");
	Items[3].SetUnits(20);
	Items[3].SetPrice(24.95);


	RetailItem Item1("Jacket", 12, 59.95);
	RetailItem Item2("Designer Jeans", 40, 34.95);
	RetailItem Item3("Shirt", 20, 24.95);
	
	std::cout << "\t\tDescription" << "\t\tUnit On Hand" << "\t\tPrice" << std::endl;

	for (int i = 1; i <= 3; i++)
		std::cout << "Item #"<< i << "\t\t" << Items[i].getDescription() << "\t\t" <<
		Items[i].getUnits() << "\t\t\t" << Items[i].getPrice() << std::endl;

	return 0;
}
