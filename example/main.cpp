#include <iostream>
#include "orderbook/orderbook.h"

using namespace std;

int main()
{
    cout << "Initiating orderbook";
    auto orderbook = OrderBook();
    orderbook.placeOrder();

    return 0;
};