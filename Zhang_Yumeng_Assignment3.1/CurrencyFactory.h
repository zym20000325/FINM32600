//
// Created by Yumeng Zhang on 2/13/23.
// FINM 32600 Assignment 3
// Among changes #2-#11, #2 #3 #4 #5 #6 #7 #10 #11 are introduced in Assignment 3.
// Here you could find change #2 #3 #4 #6.
//

#ifndef ZHANG_YUMENG_ASSIGNMENT3_CURRENCYFACTORY_H
#define ZHANG_YUMENG_ASSIGNMENT3_CURRENCYFACTORY_H

#include "Currency.h"

using std::ifstream;
using std::ofstream;
using std::cerr;
using std::cout;
using std::endl;

#include <map>
using std::map;

#include<string>
using std::getline;

#include<fstream>
#include<sstream>
using std::istringstream;

#include <memory>
using std::shared_ptr;
using std::make_shared;

//Change #2: relocate Currency object creation to a class (CurrencyFactory)

class CurrencyFactory {

public:
    CurrencyFactory();
//    Currency* GetCurrency(string currencySymbol);
    shared_ptr<Currency> GetCurrency(string currencySymbol);
    ~CurrencyFactory();

// Change #3: Store Currency objects in a container and reuse them
// Change #4: Use free store objects
// Change #6: Use a Map

private:
//    map<string, Currency*> currencyMap_;
    map<string, shared_ptr<Currency>> currencies_;

};

#endif //ZHANG_YUMENG_ASSIGNMENT3_CURRENCYFACTORY_H
