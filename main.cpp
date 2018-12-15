/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: debian
 *
 * Created on 12 de diciembre de 2018, 03:04 PM
 */

#include <cstdlib>
#include <iostream>

#include "Individuo.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout << "Hola Mundo" << endl;
    
    Individuo individuo = new Individuo();
    cout << individuo.evaluar();
    
    return 0;
}

