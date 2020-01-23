/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Q1.cpp
 * Author: lukes
 *
 * Created on January 23, 2020, 2:20 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main() {
    int x,y;
    cout<<"Enter a number:\n";
    cin>>x;
    cout<<"Enter a number:\n";
    cin>>y;
    if(x>y)
        cout<<x<< " is larger";
    else if(y>x)
        cout<<y<< " is larger";
    else
        cout<<"The numbers are equal.";
}
