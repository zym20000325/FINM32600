//
// Created by Yumeng Zhang on 1/27/23.
// FINM 32600 Assignment 2
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

Currency::Currency(const Currency& other)
    : symbol_(other.symbol_),
    exchangeRate_(other.exchangeRate_) {
}

Currency& Currency::operator=(const Currency& other){

    if (this != &other){
        symbol_           =  other.symbol_;
        exchangeRate_  =  other.exchangeRate_;
    }
    return *this;
}



