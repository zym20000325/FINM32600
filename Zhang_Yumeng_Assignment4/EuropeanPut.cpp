//
// Created by Yumeng Zhang on 2/19/23.
// FINM 32600 Assignment 4
//

#include "EuropeanPut.h"

EuropeanPut::EuropeanPut(double K, double T) : Option(K, T) {
}

double EuropeanPut::Delta(double S0, double r, double v) {

    double d1_value = d1(S0, r, v);
    return cdf(d1_value) - 1;
}

double EuropeanPut::Price(double S0, double r, double v) {

    double d1_value = d1(S0, r, v);
    double d2_value = d2(S0, r, v);

    return K_ * exp(- r * T_) * cdf(-d2_value) - S0 * cdf(-d1_value);
}
