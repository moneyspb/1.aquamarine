//
//  main.cpp
//  17
//
//  Created by Игорь Соколов on 16.12.2019.
//  Copyright © 2019 Игорь Соколов. All rights reserved.
//

#include <iostream>
using namespace std;

double BMI(double weight, double height);
void printBMI(double BMI);

int main() {
    double bmi, W, H;                                //рост в метрах масса в кг
    
    cout << "Введите вес и рост: ";
    cin >> W >> H;
    
    bmi = BMI(W,H);
    printBMI(bmi);
    
    return 0;
}

double BMI(double weight, double height){
    double bmi;
    
    height=height/100;
    bmi=weight/(height*height);
    
    return bmi;
}

void printBMI(double BMI){
    if(BMI < 18.5){
        cout << "Underweight" << endl;
    }
    if(BMI >= 18.5 && BMI<25.0){
        cout << "Normal weight " << endl;
    }
    if(BMI >= 25.0 && BMI<30.0){
        cout << "Overweight " << endl;
    }
    if(BMI >= 30){
        cout << "Obesity " << endl;}
}
