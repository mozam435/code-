
#ifndef __RECIEPT__
#define __RECIEPT__

#include <string>
#include "orderitem.h"

class Reciept
{
    int recieptId;
    int recieptdate;
    double recieptNet;
    double recieptGross;
    double recieptTax;
    double recieptService;
    double recieptTaxValue;

    //recieptitems:OrderItem;
    //logic. use friend funtion to do this.

};

#endif // __RECIEPT__
