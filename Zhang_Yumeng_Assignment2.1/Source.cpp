//
// Created by Yumeng Zhang on 1/27/23.
// FINM 32600 Assignment 2
//

#include <iostream>
#include "CurrencyConverter.h"
#include "Currency.h"

int main() {

    int localCurrency;
    int foreignCurrency;
    double localValue;
    double foreignValue;

//    Currency usd1("USD", 1.00);
//    Currency usd2(usd1);
//    Currency usd3;
//    usd3.operator=(usd1);
//    usd1.operator=(usd1);
//
//    std::cout << usd1.GetSymbol() << std::endl;
//    std::cout << usd2.GetSymbol() << std::endl;
//    std::cout << usd3.GetSymbol() << std::endl;
//    std::cout << usd3.GetExchangeRate() << std::endl;

    do{

        enterLocalCurrency:
        std::cout << "Enter local currency, enter -1 to exit (USD = 0; EUR = 1; GBP = 2; CAD = 3; "
                    "AUD = 4; RMB = 5; KRW = 6; Exit = -1): ";
        std::cin >> localCurrency;

        if (localCurrency == -1){
            break;
        }
        else if (localCurrency > 6 or localCurrency < 0){
            std::cout << "Incorrect choice of local currency, please enter again." << std::endl;
            goto enterLocalCurrency;
        }

        enterForeignCurrency:
        std::cout << "Enter foreign currency, enter -1 to exit (USD = 0; EUR = 1; GBP = 2; CAD = 3; "
                    "AUD = 4; RMB = 5; KRW = 6; Exit = -1): ";
        std::cin >> foreignCurrency;

        if (foreignCurrency == -1){
            break;
        }
        else if (foreignCurrency > 6 or foreignCurrency < 0){
            std::cout << "Incorrect choice of foreign currency, please enter."<< std::endl;
            goto enterForeignCurrency;
        }

        enterLocalAmount:
        std::cout << "Enter amount in local currency: ";
        std::cin >> localValue;

        if (localValue < 0){
            std::cout << "Amount cannot be negative, please enter again."<< std::endl;
            goto enterLocalAmount;
        }

        foreignValue = CurrencyConverter(localValue,localCurrency,foreignCurrency);
        std::cout << "Amount in foreign currency: " << foreignValue << std::endl << std::endl;

    } while(true);

    return 0;
}