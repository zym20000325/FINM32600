//
// Created by Yumeng Zhang on 1/27/23.
// FINM 32600 Assignment 2
//

#ifndef ZHANG_YUMENG_ASSIGNMENT2_CURRENCYCONVERTER_H
#define ZHANG_YUMENG_ASSIGNMENT2_CURRENCYCONVERTER_H

enum CurrencyType {USD=0, EUR=1, GBP=2, CAD=3, AUD=4, RMB=5, KRW=6};

double CurrencyConverter(double& value, int& localCurrency, int& foreignCurrency);

#endif //ZHANG_YUMENG_ASSIGNMENT2_CURRENCYCONVERTER_H
