//
// Created by Yumeng Zhang on 2/26/23.
// FINM 32600 Assignment 5
//

#include "Option.h"

Option::Option(double K, double T)
        : K_(K),
          T_(T){
}

double Option::Gamma(double S0, double r, double v) {
    double d1_value = d1(S0, r, v);
    return pdf(d1_value) / (S0 * v * sqrt(T_));
}

double Option::GetTimeToExpiration() const{
    return T_;
}

double Option::cdf(double x) const{
    return 0.5 * (1 + erf(x / sqrt(2)));
}

double Option::pdf(double x) const{
    return exp(-0.5 * pow(x, 2)) / sqrt(2 * std::numbers::pi);
}

double Option::d1(double S0, double r, double v) const{
    return log(S0 * exp(r*T_) / K_)/(v * sqrt(T_)) + 0.5 * v * sqrt(T_);
}

double Option::d2(double S0, double r, double v) const{
    return log(S0 * exp(r*T_) / K_)/(v * sqrt(T_))  - 0.5 * v * sqrt(T_);
}