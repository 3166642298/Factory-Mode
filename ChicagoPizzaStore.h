#pragma once
#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H
#include"PizzaStore.h"
#include"ChicagoStyleCheesePizza.h"
class ChicagoPizzaStore :public PizzaStore {
public:
	Pizza* createPizza(string type) override;
};
#endif // !CHICAGOPIZZASTORE_H
