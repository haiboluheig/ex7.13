/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "maHeader.h"
#include <iostream>
#include <cstdlib>


ostream& operator<<(ostream& os,const Objet& obj){
    return os<<"Objet no "<<obj._no;
}
Objet::Objet(){
    cout<<"Appel du constructeur\n";
    _no = _prochainNo++;
    _compteur++;
}
Objet::~Objet(){
    cout <<"Appel du destructeur\n";
    _compteur--;
}

uint Objet::no() const{
    return _no;
}

uint Objet::compteur(){
   return _compteur;
}

uint Objet::prochainNo(){
    return _prochainNo;
}

uint Objet::_compteur=0;
uint Objet::_prochainNo=1;