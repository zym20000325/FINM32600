//
// Created by Yumeng Zhang on 2/13/23.
// FINM 32600 Assignment 3
// Among changes #2-#11, #2 #3 #4 #5 #6 #7 #10 #11 are introduced in Assignment 3.
//

#include "Currency.h"

Currency::Currency()
        : symbol_(""),
          exchangeRate_(0.0){
}

Currency::Currency(string symbol, double rate)
        : symbol_(symbol),
          exchangeRate_(rate){
}

Currency::~Currency() {
}

string Currency::GetSymbol() {
    return symbol_;
}

double Currency::GetExchangeRate() const {
    return exchangeRate_;
}

void Currency::SetExchangeRate(double rate) {
    exchangeRate_ = rate;
}

double Currency::ConvertFromUSD(double value) {
    return value * exchangeRate_;
}

double Currency::ConvertToUSD(double value) {
    return value / exchangeRate_;
}

std::ostream& operator<<(std::ostream& os, const Currency& c){

    os << c.symbol_ << ":" << c.exchangeRate_ << endl;
    return os;
}



//Currency::Currency(const Currency& other)
//        : symbol_(other.symbol_),
//          exchangeRate_(other.exchangeRate_) {
//}

//Currency& Currency::operator=(const Currency& other){
//
//    if (this != &other){
//        symbol_           =  other.symbol_;
//        exchangeRate_  =  other.exchangeRate_;
//    }
//    return *this;
//}
