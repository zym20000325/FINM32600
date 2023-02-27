//
// Created by Yumeng Zhang on 2/3/23.
//

#include "CurrencyFactory.h"
#include "Currency.h"

CurrencyFactory::CurrencyFactory() {

    std::cout << "Constructor executed" << std::endl;

    currencies_[USD] = new Currency("USD", 1.00);
    currencies_[EUR] = new Currency( "EUR", 0.88);
    currencies_[GBP] = new Currency("GBP", 0.73);
    currencies_[CAD] = new Currency("CAD", 1.25);
    currencies_[AUD] = new Currency("AUD", 1.39);
    currencies_[RMB] = new Currency("RMB", 6.78);
    currencies_[KRW] = new Currency("KRW", 1233.07);

}

Currency* CurrencyFactory::GetCurrency(int currencyType){
    return currencies_[currencyType];
}

CurrencyFactory:: ~CurrencyFactory() {

    std::cout << "Destructor executed" << std::endl;

    for (int i=0; i<5; ++i) {
        delete currencies_[i];
    }
}

