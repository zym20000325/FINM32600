//
// Created by Yumeng Zhang on 2/26/23.
// FINM 32600 Assignment 5
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "MCPricer.h"
#include "EuropeanCall.h"
#include "EuropeanPut.h"

int main() {

    double S0 = 100.0;
    double K = 100.0;
    double T = 2.0;
    double v = 0.3;
    double r = 0.01;

    MCPricer mc;
    EuropeanCall call(K, T);
    EuropeanPut put(K, T);

    unsigned long M1 = 10000;
    cout << "S0 = 100.0, σ = 0.3, r = 0.01, T = 2.0, K = 100.0, Paths = 10000" << endl;

    double callPrice1 = mc.Price(call, S0, v, r, M1);
    cout << "Call Price: " << callPrice1 << endl;

    double putPrice1 = mc.Price(put, S0, v, r, M1);
    cout << "Put Price: " << putPrice1 << endl << endl;

    unsigned long M2 = 100000;
    cout << "S0 = 100.0, σ = 0.3, r = 0.01, T = 2.0, K = 100.0, Paths = 100000" << endl;

    double callPrice2 = mc.Price(call, S0, v, r, M2);
    cout << "Call Price: " << callPrice2 << endl;

    double putPrice2 = mc.Price(put, S0, v, r, M2);
    cout << "Put Price: " << putPrice2 << endl << endl;

    unsigned long M3 = 1000000;
    cout << "S0 = 100.0, σ = 0.3, r = 0.01, T = 2.0, K = 100.0, Paths = 1000000" << endl;

    double callPrice3 = mc.Price(call, S0, v, r, M3);
    cout << "Call Price: " << callPrice3 << endl;

    double putPrice3 = mc.Price(put, S0, v, r, M3);
    cout << "Put Price: " << putPrice3 << endl;

    return 0;
}