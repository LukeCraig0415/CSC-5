/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Q3.cpp
 * Author: lukes
 *
 * Created on January 23, 2020, 2:21 PM
 */

#include <iostream>
using namespace std;


int main(int a) {
    cout<<"Enter a number between 1 and 10:\n";
    cin>>a;
    if(a<1||a>10){
        cout<<"Entered number is not valid, reenter number:\n";
        cin>>a;
    }
    switch(a){
        case 1:
            cout<<a<<" is I in Roman numerals";
            break;
        case 2:
            cout<<a<<" is II in Roman numerals";
            break;
        case 3:
            cout<<a<<" is III in Roman numerals";
            break;
        case 4:
            cout<<a<<" is IV in Roman numerals";
            break;
        case 5:
            cout<<a<<" is V in Roman numerals";
            break;
        case 6:
            cout<<a<<" is VI in Roman numerals";
            break;
        case 7:
            cout<<a<<" is VII in Roman numerals";
            break;
        case 8:
            cout<<a<<" is VIII in Roman numerals";
            break;
        case 9:
            cout<<a<<" is IX in Roman numerals";
            break;
        case 10:
            cout<<a<<" is X in Roman numerals";
            break;
    }
}

