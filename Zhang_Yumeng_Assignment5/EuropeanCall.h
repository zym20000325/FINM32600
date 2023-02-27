//
// Created by Yumeng Zhang on 2/26/23.
// FINM 32600 Assignment 5
//

#ifndef ZHANG_YUMENG_ASSIGNMENT5_EUROPEANCALL_H
#define ZHANG_YUMENG_ASSIGNMENT5_EUROPEANCALL_H

#include "Option.h"

class EuropeanCall: public Option{

public:
    EuropeanCall(double K, double T);

    double Delta(double S0, double r, double v) override;

    double Price(double S0, double r, double v) const override;

    double GetExpirationPayoff(double ST) const override;
};


#endif //ZHANG_YUMENG_ASSIGNMENT5_EUROPEANCALL_H
