//
// Created by vruzhentsov on 8/17/2021.
//

#include <iostream>
#include <string>

using namespace std;

int main (int argc, const char * argv[]) {
    int a = 5;

    int &ptr_a = a;
    cout << "*ptr_a \t" << &ptr_a << endl;
    cout << "*ptr_a \t" << ptr_a << endl;

    ptr_a++;

    cout << "*ptr_a \t" << &ptr_a << endl;
    cout << "*ptr_a \t" << ptr_a << endl;

    ptr_a--;

    cout << "*ptr_a \t" << &ptr_a << endl;
    cout << "*ptr_a \t" << ptr_a << endl;

    return 0;
}