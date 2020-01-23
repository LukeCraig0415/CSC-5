/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Q4.cpp
 * Author: lukes
 *
 * Created on January 23, 2020, 2:23 PM
 */

#include <iostream>
using namespace std;


int main() {
    int a,b,x,y;
    cout<<"Enter the width of rectangle 1:\n";
    cin>>a;
    cout<<"Enter the height of rectangle 1:\n";
    cin>>b;
    cout<<"Enter the width of rectangle 2:\n";
    cin>>x;
    cout<<"Enter the height of rectangle 2:\n";
    cin>>y;
    
    if((a*b)>(x*y))
        cout<<"Rectangle 1 has the greater area";
    else if((a*b)<(x*y))
        cout<<"Rectangle 2 has the greater area";
    else
        cout<<"The rectangles have the same area";
    
}