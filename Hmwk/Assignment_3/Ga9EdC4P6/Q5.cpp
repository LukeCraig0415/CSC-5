/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Q5.cpp
 * Author: lukes
 *
 * Created on January 23, 2020, 2:24 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main(double m) {
    cout<<"Enter the mass of an object:\n"; cin>>m;
    double newton = m *9.8;
    if(newton>1000)
        cout<<"The object is too heavy";
    else if(newton<10)
        cout<<"The object is too light";
    else
        std::cout<<std::setprecision(1)<<fixed<<"The object weighs "<<newton<<" newtons";
}