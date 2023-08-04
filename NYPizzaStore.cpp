#include "NYPizzaStore.h"

Pizza* NYpizzaStore::createPizza(string type)
{
    Pizza* pizza;
    if (type == "cheese")
    {
        pizza = new NYStyleCheesePizza();
        return pizza;
    }
    else if (type == "veggie")
    {
        pizza = new NYStyleCheesePizza();
        return pizza;
    }
    else if (type == "clam")
    {
        pizza = new NYStyleCheesePizza();
        return pizza;
    }
    else if (type == "pepperoni")
    {
        pizza = new NYStyleCheesePizza();
        return pizza;
    }
    else {
        return nullptr;
    }
   
}
