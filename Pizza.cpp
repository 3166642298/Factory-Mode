#include "Pizza.h"

void Pizza::prepare()
{
	cout << "Preparing  " << this->name << endl;
	cout << "Tossing dough....." << endl;
	cout << "Adding sauce...." << endl;
	cout << "Adding toppings:  " << endl;
	for (string topping : toppings)
	{
		cout << "  " << topping;
	}
}

void Pizza::bake()
{
	cout << "Bake for 25 minutes at 350" << endl;
}

void Pizza::cut()
{
	cout << "Cutting the pizza into diagonal slices" << endl;
}

void Pizza::box()
{
	cout << "Place pizza in official PizzaStore box" << endl;
}

string Pizza::getName()
{
	return this->name;
}
