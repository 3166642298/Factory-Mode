#pragma once
#ifndef PIZZA_H
#define PIZZA_H
#include<iostream>
#include<vector>
using namespace std;
class Pizza {
public:
	string name;//����
	string dough;//����
	string sauce;//��֭
	vector<string> toppings;//����

	void prepare();
	void bake();
	virtual void cut();
	void box();
	string getName();
};
#endif // !PIZZA_H
