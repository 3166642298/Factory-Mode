#include<iostream>
using namespace std;
#include"Pizza.h"
#include"PizzaStore.h"
#include"NYPizzaStore.h"
#include"ChicagoPizzaStore.h"
int main()
{
	PizzaStore* nyStore = new NYpizzaStore();
	PizzaStore* chicagoPizza = new ChicagoPizzaStore();

	Pizza* pizza1 = nyStore->orderPizza("cheese");
	Pizza* pizza2 = chicagoPizza->orderPizza("cheese");

	return 0;
}