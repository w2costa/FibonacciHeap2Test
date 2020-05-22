/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: wilson
 * 
 * Created on 8 de Maio de 2020, 09:53
 */

#include <cstdlib>
#include <iostream>
#include "FibonacciHeap.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    FibonacciHeap<int> fh;

    int values[15] = {
        23, 7, 21, 3, 17, 24, 18, 52, 38, 30, 26, 46, 39, 41, 35
    };

    fh.insert(23);
    fh.insert(7);
    fh.insert(21);
    fh.insert(3);
    fh.insert(17);
    fh.insert(24);
    fh.insert(18);
    fh.insert(52);
    fh.insert(38);
    fh.insert(30);
    fh.insert(26);
    fh.insert(46);
    node<int>* n = fh.insert(39);
    node<int>* m = fh.insert(41);
    fh.insert(35);




    //    for (int i = 0; i < 4; i++) {
    //        fh.insert(values[i]);
    //    }

    cout << "Heap Minimum: " << fh.getMinimum() << endl;
    cout << "The Heap is: " << endl;

    fh.display();
    cout << "Heap Minimum Extracted: " << fh.removeMinimum() << endl;
    fh.display();

    cout << "de: " << n->getValue() << " para: 5" << endl;
    fh.decreaseKey(n, 5);

    cout << "Heap Minimum: " << fh.getMinimum() << endl;
    fh.display();

    cout << "de: " << m->getValue() << " para: 2" << endl;
    fh.decreaseKey(m, 2);



    while (!fh.isEmpty()) {
        cout << "Heap Minimum Extracted: " << fh.removeMinimum() << endl;
        fh.display();
    }

    return 0;
}

