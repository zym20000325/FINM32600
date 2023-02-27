//
// Created by Yumeng Zhang on 2/26/23.
// FINM 32600 Assignment 5
//

#ifndef ZHANG_YUMENG_ASSIGNMENT5_OPTION_H
#define ZHANG_YUMENG_ASSIGNMENT5_OPTION_H

#include <numbers>
#include <cmath>

#include <iostream>
using std::endl;
using std::cout;

class Option {

public:
    Option(double K, double T);

    virtual double Price(double S0, double r, double v) const = 0;

    virtual double Delta(double S0, double r, double v) = 0;
    double Gamma(double S0, double r, double v);

    double GetTimeToExpiration() const;

    virtual double GetExpirationPayoff(double ST) const = 0;

protected:

    double cdf(double x) const;
    double pdf(double x) const;

    double d1(double S0, double r,double v) const;
    double d2(double S0, double r,double v) const;

    double K_;
    double T_;
};


#endif //ZHANG_YUMENG_ASSIGNMENT5_OPTION_H
