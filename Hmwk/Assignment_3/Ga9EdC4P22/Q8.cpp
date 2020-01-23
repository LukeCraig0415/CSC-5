/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Q8.cpp
 * Author: lukes
 *
 * Created on January 23, 2020, 2:26 PM
 */

#include <iostream>
using namespace std;


int main(int temp) {
    cout<<"Enter a temperature:\n"; cin>>temp;
    
    for(int i = 0; i< 2;i++){
        switch(i){
            case 0:
                if(temp<=-173)
                    cout<<"Ethyl alcohol will freeze\n";
                if(temp<=-38)
                    cout<<"Mercury will freeze\n";
                if(temp<=-362)
                    cout<<"Oxygen will freeze\n";
                if(temp<=32)
                    cout<<"Water will freeze\n";
                break;
            case 1:
                if(temp>=172)
                    cout<<"Ethyl alcohol will boil\n";
                if(temp>=676)
                    cout<<"Mercury will boil\n";
                if(temp>=-306)
                    cout<<"Oxygen will boil\n";
                if(temp>=212)
                    cout<<"Water will boil\n";
                break;
        }
    }
}
