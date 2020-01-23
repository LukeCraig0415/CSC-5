/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Q6.cpp
 * Author: lukes
 *
 * Created on January 23, 2020, 2:25 PM
 */

#include <iostream>
using namespace std;


int main(int books) {
    cout<<"Enter how many books you purchased this month:\n";cin>>books;
    if(books==0)
        cout<<"You earned 0 points.";
    else if(books==1)
        cout<<"You earned 5 points.";
    else if(books==2)
        cout<<"You earned 15 points.";
    else if(books==3)
        cout<<"You earned 30 points.";
    else if(books>=4)
        cout<<"You earned 60 points.";
    else
        cout<<"you didn't enter a number dummy";
}