#pragma once
#ifndef PIZZA_H
#define PIZZA_H
#include<iostream>
#include<vector>
using namespace std;
class Pizza {
public:
	string name;//名称
	string dough;//面团
	string sauce;//酱汁
	vector<string> toppings;//配料

	void prepare();
	void bake();
	virtual void cut();
	void box();
	string getName();
};
#endif // !PIZZA_H
