#include <iostream>
#include "orderbook/orderbook.h"

string OrderBook::getOrderDetails()
{
    return "Hello world";
}

void OrderBook::placeOrder()
{
    std::cout << "Place order";
};

void OrderBook::cancelOrder(int orderId)
{
    std::cout << "Cancel order";
};

double OrderBook::getVolumeAtPrice(double price, Side side)
{
    return 0.1;
};