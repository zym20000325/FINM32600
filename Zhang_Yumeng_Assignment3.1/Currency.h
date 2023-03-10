//
// Created by Yumeng Zhang on 2/13/23.
// FINM 32600 Assignment 3
// Among changes #2-#11, #2 #3 #4 #5 #6 #7 #10 #11 are introduced in Assignment 3.
// Here you could find change #11.
//

#ifndef ZHANG_YUMENG_ASSIGNMENT3_CURRENCY_H
#define ZHANG_YUMENG_ASSIGNMENT3_CURRENCY_H

#include <iostream>
using std::string;
using std::endl;

//enum CurrencyType {USD=0, EUR=1, GBP=2, CAD=3, AUD=4, RMB=5, KRW=6};

class Currency {

public:
    Currency();
    Currency(string symbol, double rate);
    ~Currency();

    string GetSymbol();

    [[nodiscard]]
    double GetExchangeRate() const;

    void SetExchangeRate(double rate);

    double ConvertFromUSD(double value);

    double ConvertToUSD(double value);

//    Currency(const Currency& other);
    Currency(const Currency& other) = default;   // Change #11: Using Default Implementations

//    Currency& operator=(const Currency& other);
    Currency& operator=(const Currency& other) = default;

    friend std::ostream& operator<<(std::ostream& os, const Currency& c);  // Change #12: Operator Overloading

private:
    string symbol_;
    double exchangeRate_;

};


#endif //ZHANG_YUMENG_ASSIGNMENT3_CURRENCY_H
