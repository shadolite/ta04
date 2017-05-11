/***************************************************************
 * File: rational.cpp
 * Author: (your name here)
 * Purpose: Contains the method implementations for the Rational class.
 ***************************************************************/

#include "rational.h"
#include <iomanip>

void Rational :: prompt(){

   cout << "for the top number: ";
   cin >> top;

   cout << "for the bottom number: ";
   cin >> bottom;

}

void Rational :: display(){
   cout << top << "/" << bottom;
   return;
}

void Rational :: displayDecimal(){
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(3);

   cout << top / bottom << endl;

   return;
}
