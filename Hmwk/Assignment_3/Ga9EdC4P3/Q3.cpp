/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Q3.cpp
 * Author: lukes
 *
 * Created on January 23, 2020, 2:22 PM
 */

#include <iostream>
using namespace std;


int main(int day, int month, int year) {
    cout<<"Enter a month:\n";
    cin>>month;
    cout<<"Enter a day:\n";
    cin>>day;
    cout<<"Enter a year:\n";
    cin>>year;
    if((month*day)==year)
        cout<<"The date is magic";
    else
        cout<<"The date is not magic";
    
}