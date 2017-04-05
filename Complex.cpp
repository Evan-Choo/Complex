//
//  Complex.cpp
//  Complex
//
//  Created by Evan Choo on 17/4/5.
//  Copyright © 2017年 Evan Choo. All rights reserved.
//

#include <iostream>
#include "Complex.hpp"
using namespace std;

class Complex{
    double real;
    double image;
    
public:
    void setValue(double r,double i);
    void addValue(double r,double i); // a=a+b
    void multiply(double r,double i); // a=a*b
    void displayMessage();
};


int main(){
    //给complex1和complex2赋值
    double r1,i1,r2,i2;
    
    Complex complex1;
    Complex complex2;
    cout << "Input real part of complex1: " << endl;
    cin >> r1; //获取real part 1
    cout << "Input image part of complex1: " << endl;
    cin >> i1; //获取image part 1
    complex1.setValue(r1, i1);
    
    cout << "Input real part of complex2: " << endl;
    cin >> r2; //获取real part 2
    cout << "Input image part of complex2: " << endl;
    cin >> i2; //获取image part 2
    complex2.setValue(r2, i2);
    
    Complex sum;
    sum.addValue(r1, i1);
    sum.addValue(r2, i2);
    
    Complex multiply;
    multiply.setValue(r1, i1);
    multiply.multiply(r2, i2);
    
    cout << "The complex1 is :" << endl;
    complex1.displayMessage();
    cout << "The complex2 is :" << endl;
    complex2.displayMessage();
    cout << "The sum is :" << endl;
    sum.displayMessage();
    cout << "The multiply is :" << endl;
    multiply.displayMessage();
    
    return 0;
    
}


void Complex::setValue(double r, double i){
    real = r;
    image = i;
}

void Complex::addValue(double r, double i){
    real = real + r;
    image = image + i;
}

void Complex::multiply(double r, double i){
    real = real*r - image*i;
    image = real*i + image*r;
}

void Complex::displayMessage(){
    cout << real << "+" << image << "i" <<endl;
}





