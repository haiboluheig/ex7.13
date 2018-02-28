/**
 * \file      Lu_Gottburg_Labo11.cpp
 * \brief     Utilisation de tableaux pour gestion de données
 * \details   Un programme qui génère le bulletin de notes de chaque étudiant à l’aide des fichiers 
 *            Trois fichier dont huit colonnes dedans.Correspondant ces colonnes, huit veteurs principales sont définis  dont
 *            3 Pour lire et stocker "listeEtudiants.txt" : vector <int> studentID, vector < string> firstName, vector < string> familyName;
 *            2 Pour lire et stocker "listeMatieres.txt" : vector <int> courseID, vector < string> course;
 *            3 Pour lire et stocker "notes.txt" : vector <int> student_ID, vector <int> course_ID, vector < double> marks;
 * \author    Michael Gottburg
 * \author    Haibo Lu
 * \version   1.0
 * \date      25 janvier 2018
 * \copyright GNU Public License and HEIG-VD
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>    
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

#include "maHeader.h"
using namespace std;

int main(int argc, char** argv) {
    {
        Objet obj1, obj2, obj3;
        cout << obj1.no() << obj2.no() << obj3.no() << endl;
        cout << obj1.compteur() << obj2.compteur() << obj3.prochainNo() << endl;
    }
    {
        Objet obj4;
        cout << obj4.no() << obj4.compteur() << obj4.prochainNo()<<endl;
    }

    return (EXIT_SUCCESS);
}
