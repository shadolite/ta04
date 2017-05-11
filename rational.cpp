/***************************************************************
 * File: rational.cpp
 * Author: (your name here)
 * Purpose: Contains the method implementations for the Rational class.
 ***************************************************************/

#include "rational.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Rational :: prompt(){

   cout << "Top: ";
   cin >> top;

   cout << "Bottom: ";
   cin >> bottom;

}

void Rational :: display(){
   cout << top << "/" << bottom << endl;
   return;
}

void Rational :: displayDecimal(){
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   float value = (float)top / bottom;

   cout << value << endl;

   return;
}
