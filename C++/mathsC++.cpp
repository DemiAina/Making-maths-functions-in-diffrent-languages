#include <iostream>
#include "Includes/mathsV.h"

using namespace std;

int main(void){


    int num1,num2;

    cout << "Please enter 2 numbers to add" << endl;

    cin >> num1; cin >> num2;

    int val = add(num1,num2);

    cout << num1 << " + " << num2 << " = " << val << endl;


}