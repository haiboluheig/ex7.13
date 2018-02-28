/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newfile.h
 * Author: lvhb_
 *
 * Created on February 28, 2018, 3:51 PM
 */

#ifndef MAHEADER_H
#define MAHEADER_H
#include <iostream>
#include <cstdlib>
using namespace std;
using uint = unsigned int;

class Objet {
    friend ostream& operator<<(ostream& os, const Objet& obj);
public:
    Objet();
    ~Objet();
    uint no() const;
    static uint prochainNo();
    static uint compteur();
private:
    uint _no;
    static uint _prochainNo;
    static uint _compteur;
};
#endif /* MAHEADER_H */

