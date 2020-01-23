/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Q7.cpp
 * Author: lukes
 *
 * Created on January 23, 2020, 2:25 PM
 */
#include <iostream>
#include <iomanip>
using namespace std;


int main(int m, double d) {
    cout<<"Choose which medium the sound wave will travel in.\n1.Air\n2.Water\n3.Steel\n";cin>>m;
    cout<<"Enter the distance the wave will travel:\n";cin>>d;
    switch(m){
        case 1:
            std::cout<<std::setprecision(4)<<fixed<<"The wave will take "<<(d/1100)<<" seconds";
            break;
        case 2:
            std::cout<<std::setprecision(4)<<fixed<<"The wave will take "<<(d/4900)<<" seconds";
            break;
        case 3:
            std::cout<<std::setprecision(4)<<fixed<<"The wave will take "<<(d/16400)<<" seconds";
            break;
        default:
            cout<<"You did not enter valid numbers.";
        
    }
}

