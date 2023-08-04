#pragma once
#ifndef CHICAGOSTYLECHEESEPIZZA_H
#define CHICAGOSTYLECHEESEPIZZA_H
#include<iostream>
using namespace std;
#include"Pizza.h"
class ChicagoStyleCheesePizza :public Pizza {
public:
	ChicagoStyleCheesePizza();
	void cut();
};
#endif 
