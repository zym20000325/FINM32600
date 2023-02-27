//
// Created by Yumeng Zhang on 1/27/23.
// FINM 32600 Assignment 2
//

#ifndef ZHANG_YUMENG_ASSIGNMENT2_CURRENCY_H
#define ZHANG_YUMENG_ASSIGNMENT2_CURRENCY_H

#include <iostream>
using std::string;

enum CurrencyType {USD=0, EUR=1, GBP=2, CAD=3, AUD=4, RMB=5, KRW=6};

class Currency{

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

    Currency(const Currency&);   // copy constructor

//    Currency operator = (const Currency&);
    Currency& operator=(const Currency& other);

private:
    string symbol_;
    double exchangeRate_;

};

#endif //ZHANG_YUMENG_ASSIGNMENT2_CURRENCY_H
