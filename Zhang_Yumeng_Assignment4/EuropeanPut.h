//
// Created by Yumeng Zhang on 2/19/23.
// FINM 32600 Assignment 4
//

#ifndef ZHANG_YUMENG_ASSIGNMENT4_EUROPEANPUT_H
#define ZHANG_YUMENG_ASSIGNMENT4_EUROPEANPUT_H

#include "Option.h"

class EuropeanPut: public Option{

public:
    EuropeanPut(double K, double T);

    double Delta(double S0, double r, double v) override;

    double Price(double S0, double r, double v) override;
};

#endif //ZHANG_YUMENG_ASSIGNMENT4_EUROPEANPUT_H
