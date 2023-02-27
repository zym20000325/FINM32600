//
// Created by Yumeng Zhang on 2/19/23.
// FINM 32600 Assignment 4
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "EuropeanCall.h"
#include "EuropeanPut.h"

int main(){

    cout << "Call: S0 = 100, K = 100, T = 1, σ = 0.3, r = 0.05" << endl;

    double S0_1 = 100;
    double K_1 = 100;
    double T_1 = 1;
    double v_1 = 0.3;
    double r_1 = 0.05;

    EuropeanCall c1(K_1 ,T_1);

    cout << "Price: " << c1.Price(S0_1, r_1, v_1)
         << ", Delta: " << c1.Delta(S0_1, r_1, v_1)
         << ", Gamma: " << c1.Gamma(S0_1, r_1, v_1) << endl << endl;

    cout << "Put: S0 = 120, K = 120, T = 2, σ = 0.4, r = 0.1" << endl;

    double S0_2 = 120;
    double K_2 = 120;
    double T_2 = 2;
    double v_2 = 0.4;
    double r_2 = 0.1;

    EuropeanPut p1(K_2 ,T_2);

    cout << "Price: " << p1.Price(S0_2, r_2, v_2)
         << ", Delta: " << p1.Delta(S0_2, r_2, v_2)
         << ", Gamma: " << p1.Gamma(S0_2, r_2, v_2) << endl;

    return 0;
}
