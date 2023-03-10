//
// Created by Yumeng Zhang on 2/13/23.
// FINM 32600 Assignment 3
// Among changes #2-#11, #2 #3 #4 #5 #6 #7 #10 #11 are introduced in Assignment 3.
//

#include <iostream>
#include "CurrencyConverter.h"

using std::cout;
using std::endl;

double CurrencyConverter(double& localValue, string& localCurrency, string& foreignCurrency){

    try {
        CurrencyFactory factory;
//        Currency* localC = factory.GetCurrency(localCurrency);
//        Currency* ForeignC = factory.GetCurrency(foreignCurrency);

        shared_ptr<Currency> localC = factory.GetCurrency(localCurrency);
        shared_ptr<Currency> ForeignC = factory.GetCurrency(foreignCurrency);

        double usdValue = localC->ConvertToUSD(localValue);
        double foreignValue = ForeignC->ConvertFromUSD(usdValue);

        cout << *localC;
        cout << *ForeignC;

//        cout << localC->GetSymbol() << endl;
//        cout << localC->GetExchangeRate() << endl;
//
//        cout << ForeignC->GetSymbol() << endl;
//        cout << ForeignC->GetExchangeRate() << endl;
//
//        cout << usdValue << endl;
//        cout << foreignValue << endl;

        return foreignValue;
    }
    catch (const std::runtime_error& e) {
        cout << e.what() << endl;
        return -1.0;
    }
}
