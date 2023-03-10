//
// Created by Yumeng Zhang on 2/13/23.
// FINM 32600 Assignment 3
// Among changes #2-#11, #2 #3 #4 #5 #6 #7 #10 #11 are introduced in Assignment 3.
// Here you could find change #5 #7 #10.
//

#include "CurrencyFactory.h"
#include "Currency.h"


CurrencyFactory::CurrencyFactory() {

//    cout << "Constructor executed" << endl;

    string filename = "CurrencyRates.txt";      // Change #10: Using Streams
    ifstream infile(filename);
    if (!infile) {
        cerr << "Unable to open file " << filename << endl;
        return;
    }

    string s;
    while(getline(infile, s)){

        istringstream iss(s);
        string read_symbol;
        double read_rate;
        iss >> read_symbol >> read_rate;
//        currencyMap_[read_symbol] = new Currency( read_symbol, read_rate);
        currencies_[read_symbol] = make_shared<Currency>( read_symbol, read_rate);
    }

    infile.close();
}

//Currency* CurrencyFactory::GetCurrency(string currencySymbol){
//
//    auto iter = currencyMap_.find(currencySymbol);
//
//    if (iter == currencyMap_.end()){
//        throw std::runtime_error("Currency not found");   // Change #7: Using Exceptions
//    }
//    return iter->second;
//}

shared_ptr<Currency> CurrencyFactory::GetCurrency(string currencySymbol){

    auto iter = currencies_.find(currencySymbol);

    if (iter == currencies_.end()){
        throw std::runtime_error("Currency not found");   // Change #7: Using Exceptions
    }
    return iter->second;
}

// Change #5: Use the destructor to delete the free store objects
CurrencyFactory:: ~CurrencyFactory() {

//    cout << "Destructor executed" << endl;
//
//    for (auto iter= currencyMap_.begin(); iter != currencyMap_.end(); ++iter) {
//        delete iter->second;
//    }
}