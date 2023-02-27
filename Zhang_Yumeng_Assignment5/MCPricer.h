//
// Created by Yumeng Zhang on 2/26/23.
// FINM 32600 Assignment 5
//

#ifndef ZHANG_YUMENG_ASSIGNMENT5_MCPRICER_H
#define ZHANG_YUMENG_ASSIGNMENT5_MCPRICER_H

#include "Option.h"

class MCPricer {

public:

    double BoxMuller();

    double Price(const Option& option, double S0, double sigma, double rate, unsigned long paths);

};


#endif //ZHANG_YUMENG_ASSIGNMENT5_MCPRICER_H
