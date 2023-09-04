#include <iostream>

enum OrderType
{
    market,
    limit
};

enum Side
{
    buy,
    sell
};

class Order
{
private:
    double price; // TODO: How to make it optional?
    double quantity;
    OrderType orderType;
    Side side;
};

class OrderBook
{
};