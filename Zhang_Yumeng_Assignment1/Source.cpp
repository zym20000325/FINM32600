#include <iostream>
#include "CurrencyConverter.h"

// Yumeng Zhang
// FINM 32600 Assignment 1

int main() {

    int localCurrency;
    int foreignCurrency;
    double localValue;
    double foreignValue;

    do{

        enterLocalCurrency:
            std::cout <<"Enter local currency, enter -1 to exit (USD = 0; EUR = 1; GBP = 2; CAD = 3; "
                        "AUD = 4; RMB = 5; KRW = 6; Exit = -1): ";
            std::cin >> localCurrency;

        if (localCurrency==-1){
            break;
        }
        else if (localCurrency>6 or localCurrency<0){
            std::cout << "Incorrect choice of local currency, please enter again." << std::endl;
            goto enterLocalCurrency;
        }

        enterForeignCurrency:
            std::cout <<"Enter foreign currency, enter -1 to exit (USD = 0; EUR = 1; GBP = 2; CAD = 3; "
                        "AUD = 4; RMB = 5; KRW = 6; Exit = -1): ";
            std::cin >> foreignCurrency;

        if (foreignCurrency==-1){
            break;
        }
        else if (foreignCurrency>6 or foreignCurrency<0){
            std::cout << "Incorrect choice of foreign currency, please enter."<< std::endl;
            goto enterForeignCurrency;
        }

        enterLocalAmount:
            std::cout << "Enter amount in local currency: ";
            std::cin >> localValue;

        if (localValue<0){
            std::cout << "Amount cannot be negative, please enter again."<< std::endl;
            goto enterLocalAmount;
        }

        foreignValue = CurrencyConverter(localValue,localCurrency,foreignCurrency);
        std::cout << "Amount in foreign currency: " << foreignValue << std::endl << std::endl;

    } while(true);

    return 0;
}
