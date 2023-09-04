### Types of orders

1. Market Order:  
   Matches best available price

2. Limit Order:  
   Buy Limit Order: An Order at a price n or lower  
   Sell Limit Order: An order at a price n or higher

### Order

orderType: Enum (Market | Limit)
price: double
quantity: double

### Order book

Maintains:

- A list of bids
- A list of asks
- A list of transactions
- last traded price
- market spread value
- ability to notify when the order is matched

### Functionality

Orderbook should be able to accept new Orders
Orderbook should be able to update existing Orders
Orderbook should be able to delete existing Orders
! Will we require a unique identifier (ID) for finding orders?
Received order should be added to the orderbook maintained in the memory
