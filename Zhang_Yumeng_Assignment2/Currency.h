//
// Created by Yumeng Zhang on 1/27/23.
// FINM 32600 Assignment 2
//

#ifndef ZHANG_YUMENG_ASSIGNMENT2_CURRENCY_H
#define ZHANG_YUMENG_ASSIGNMENT2_CURRENCY_H

#include <iostream>
using std::string;

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

private:
    string symbol_;
    double exchangeRate_;

};

#endif //ZHANG_YUMENG_ASSIGNMENT2_CURRENCY_H
