#pragma once
#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H
#include<iostream>
using namespace std;
#include"PizzaStore.h"
#include"NYStyleCheesePizza.h"
class NYpizzaStore :public PizzaStore {
public:
	Pizza* createPizza(string type) override;
};
#endif // !NYPIZZASTORE_H
