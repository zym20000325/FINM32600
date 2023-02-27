//
// Created by Yumeng Zhang on 2/3/23.
//

#ifndef ZHANG_YUMENG_ASSIGNMENT2_CURRENCYFACTORY_H
#define ZHANG_YUMENG_ASSIGNMENT2_CURRENCYFACTORY_H

#include "Currency.h"

class CurrencyFactory{

public:
    CurrencyFactory();
    Currency* GetCurrency(int currencyType);
    ~CurrencyFactory();

private:
    Currency* currencies_[7];
};

#endif //ZHANG_YUMENG_ASSIGNMENT2_CURRENCYFACTORY_H
