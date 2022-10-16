#include<bits/stdc++.h>
using namespace std;
#include "ConstantFunctionClass.h"

int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);

    Fraction const f3; // for constant fuction we can call only constant functions;

    // What are Constant Functions?
    // which doesn't change any property of current object;

    cout<< f3.getNum() <<" "<< f3.getDen()<<endl;

   // f3.setNum(10); // not applicable because f3 is a constant object in which changes are not allowed
    return 0;
}
