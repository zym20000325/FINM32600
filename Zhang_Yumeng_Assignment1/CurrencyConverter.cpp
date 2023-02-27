//
// Created by Yumeng Zhang on 1/21/23.
//
#include <iostream>

const double usd_usd = 1.00;
const double usd_eur = 0.88;
const double usd_gbp = 0.73;
const double usd_cad = 1.25;
const double usd_aud = 1.39;
const double usd_rmb = 6.78;
const double usd_krw = 1233.07;

double CurrencyConverter(double& value, int& localCurrency, int& foreignCurrency){

    enum CurrencyType {USD=0, EUR=1, GBP=2, CAD=3, AUD=4, RMB=5, KRW=6};

    double rate_local_to_usd;
    switch(localCurrency)
    {
        case USD:
            rate_local_to_usd = usd_usd;
            break;
        case EUR:
            rate_local_to_usd = usd_eur;
            break;
        case GBP:
            rate_local_to_usd = usd_gbp;
            break;
        case CAD:
            rate_local_to_usd = usd_cad;
            break;
        case AUD:
            rate_local_to_usd = usd_aud;
            break;
        case RMB:
            rate_local_to_usd = usd_rmb;
            break;
        case KRW:
            rate_local_to_usd = usd_krw;
            break;
        default:
            rate_local_to_usd = 0.0;
            std::cout << "Incorrect input!" << std::endl;
            break;
    }

    double rate_usd_to_foreign;
    switch(foreignCurrency)
    {
        case USD:
            rate_usd_to_foreign = usd_usd;
            break;
        case EUR:
            rate_usd_to_foreign = usd_eur;
            break;
        case GBP:
            rate_usd_to_foreign = usd_gbp;
            break;
        case CAD:
            rate_usd_to_foreign = usd_cad;
            break;
        case AUD:
            rate_usd_to_foreign = usd_aud;
            break;
        case RMB:
            rate_usd_to_foreign = usd_rmb;
            break;
        case KRW:
            rate_usd_to_foreign = usd_krw;
            break;
        default:
            rate_usd_to_foreign = 0.0;
            std::cout << "Incorrect input!" << std::endl;
            break;
    }

    double foreign_value = value * rate_usd_to_foreign / rate_local_to_usd;
    return foreign_value;
}