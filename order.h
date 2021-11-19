
#ifndef __ORDER__
#define __ORDER__

#include <string>
#include "orderitem.h"
#include "receipt.h"
#include "table.h"
#include "waiter.h"
#include "payment.h"



class Order
{
    int orderId;
    //orderDate
    int orderwaiterId;
    double orderNet;
    double orderGrass;
    double orderServiceRate;
    double orderServicecharge;
    double orderDiscountRate;
    double orderDiscount;
    double total;
    bool orderPaid;
    //orderPaymentType: Payment()
};

#endif // __ORDER__
