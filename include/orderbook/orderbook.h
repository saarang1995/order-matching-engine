#pragma once
#include <string>
#include <ctime>
using namespace std;

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
    int orderId;
    double price; // TODO: How to make it optional?
    double quantity;
    OrderType orderType;
    Side side;
    std::time_t timestamp;
};

class OrderBook
{
private:
    string getOrderDetails();

public:
    void placeOrder();
    void cancelOrder(int orderId);
    double getVolumeAtPrice(double price, Side side);
};
