//
// Created by Yumeng Zhang on 2/26/23.
// FINM 32600 Assignment 5
//

#include "MCPricer.h"

double MCPricer::BoxMuller() {

//    srand(static_cast<unsigned int>(time(0)));

    double x = 0;
    double y = 0;

    while (x == 0 or y == 0){
        x = static_cast<double>(rand()) / RAND_MAX;
        y = static_cast<double>(rand()) /  RAND_MAX;
    }

    double z = sqrt(-2.0*log(x)) * cos(2 * std::numbers::pi * y);

    return z;
}

double MCPricer::Price(const Option& option, double S0, double sigma, double rate, unsigned long paths){

    double T = option.GetTimeToExpiration();

    double price = 0.0;

    srand(325);

    for (unsigned int i = 0; i<paths; ++i){

        double z_i = BoxMuller();
        double ST_i = S0 * exp((rate - sigma * sigma/2.0) * T + sigma*z_i * sqrt(T));
        double payoff = option.GetExpirationPayoff(ST_i);

        price = price + payoff;
    }

    price = exp(-rate*T) * price / paths;

    return price;
}