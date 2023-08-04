#include "ChicagoPizzaStore.h"

Pizza* ChicagoPizzaStore::createPizza(string type)
{
    Pizza* pizza;
    if (type == "cheese")
    {
        pizza = new ChicagoStyleCheesePizza();
        return pizza;
    }
    else if (type == "veggie")
    {
        pizza = new ChicagoStyleCheesePizza();
        return pizza;
    }
    else if (type == "clam")
    {
        pizza = new ChicagoStyleCheesePizza();
        return pizza;
    }
    else if (type == "pepperoni")
    {
        pizza = new ChicagoStyleCheesePizza();
        return pizza;
    }
    else {
        return nullptr;
    }
}
