//
// Created by Yumeng Zhang on 1/27/23.
// FINM 32600 Assignment 2
//

#include <iostream>
#include "CurrencyConverter.h"
#include "Currency.h"

Currency usd("USD", 1.00);
Currency eur("EUR", 0.88);
Currency gbp("GBP", 0.73);
Currency cad("CAD", 1.25);
Currency aud("AUD", 1.39);
Currency rmb("RMB", 6.78);
Currency krw("KRW", 1233.07);

double CurrencyConverter(double& localValue, int& localCurrency, int& foreignCurrency){

    double usd_value = 0.0;
    switch(localCurrency)
    {
        case USD:
            usd_value = usd.ConvertToUSD(localValue);
            break;
        case EUR:
            usd_value = eur.ConvertToUSD(localValue);
            break;
        case GBP:
            usd_value = gbp.ConvertToUSD(localValue);
            break;
        case CAD:
            usd_value = cad.ConvertToUSD(localValue);
            break;
        case AUD:
            usd_value = aud.ConvertToUSD(localValue);
            break;
        case RMB:
            usd_value = rmb.ConvertToUSD(localValue);
            break;
        case KRW:
            usd_value = krw.ConvertToUSD(localValue);
            break;
        default:
            std::cout << "Incorrect input!" << std::endl;
            break;
    }

    double foreignValue = 0.0;
    switch(foreignCurrency)
    {
        case USD:
            foreignValue = usd.ConvertFromUSD(usd_value);
            break;
        case EUR:
            foreignValue = eur.ConvertFromUSD(usd_value);
            break;
        case GBP:
            foreignValue = gbp.ConvertFromUSD(usd_value);
            break;
        case CAD:
            foreignValue = cad.ConvertFromUSD(usd_value);
            break;
        case AUD:
            foreignValue = aud.ConvertFromUSD(usd_value);
            break;
        case RMB:
            foreignValue = rmb.ConvertFromUSD(usd_value);
            break;
        case KRW:
            foreignValue = krw.ConvertFromUSD(usd_value);
            break;
        default:
            std::cout << "Incorrect input!" << std::endl;
            break;
    }

    return foreignValue;

}