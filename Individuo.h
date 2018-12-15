/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Individuo.h
 * Author: debian
 *
 * Created on 12 de diciembre de 2018, 04:24 PM
 */

#ifndef INDIVIDUO_H
#define INDIVIDUO_H

class Individuo {
public:
    Individuo();
    Individuo(const Individuo& orig);
    virtual ~Individuo();
    char* evaluar();
private:
};

#endif /* INDIVIDUO_H */

