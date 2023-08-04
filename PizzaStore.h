#pragma once
#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include<iostream>
#include"Pizza.h"
using namespace std;
class PizzaStore {
public:
	Pizza* orderPizza(string type) {
		Pizza* pizza = NULL;
		pizza=createPizza(type);
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
		return pizza;
	}
	virtual Pizza* createPizza(string type);
};
#endif
