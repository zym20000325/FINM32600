//
// Created by Yumeng Zhang on 2/13/23.
// FINM 32600 Assignment 3
// Among changes #2-#11, #2 #3 #4 #5 #6 #7 #10 #11 are introduced in Assignment 3.
//

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "CurrencyConverter.h"

int main() {

    string localCurrency;
    string foreignCurrency;
    double localValue;
    double foreignValue;

//    Currency c("EUR", 1.2);
//    cout << c;

    do{

        cout << "Enter local currency, enter -1 to exit ('USD'; 'EUR'; 'GBP'; 'CAD'; 'AUD'; -1): ";
        cin >> localCurrency;

        if (localCurrency == "-1"){
            break;
        }

        cout << "Enter foreign currency, enter -1 to exit ('USD'; 'EUR'; 'GBP'; 'CAD'; 'AUD'; -1): ";
        cin >> foreignCurrency;

        if (foreignCurrency == "-1"){
            break;
        }

        cout << "Enter amount in local currency: ";
        cin >> localValue;

        foreignValue = CurrencyConverter(localValue,localCurrency,foreignCurrency);
        cout << "Amount in foreign currency: " << foreignValue << endl << endl;

    } while(true);

    return 0;
}
