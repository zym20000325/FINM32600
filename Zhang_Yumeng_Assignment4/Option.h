//
// Created by Yumeng Zhang on 2/19/23.
// FINM 32600 Assignment 4
//

#ifndef ZHANG_YUMENG_ASSIGNMENT4_OPTION_H
#define ZHANG_YUMENG_ASSIGNMENT4_OPTION_H

#include <numbers>
#include <cmath>

#include <iostream>
using std::endl;
using std::cout;

class Option {

public:
    Option(double K, double T);

    virtual double Price(double S0, double r, double v) = 0;

    virtual double Delta(double S0, double r, double v) = 0;
    double Gamma(double S0, double r, double v);

protected:

    double cdf(double x);
    double pdf(double x);

    double d1(double S0, double r,double v);
    double d2(double S0, double r,double v);

    double K_;
    double T_;
};


#endif //ZHANG_YUMENG_ASSIGNMENT4_OPTION_H
