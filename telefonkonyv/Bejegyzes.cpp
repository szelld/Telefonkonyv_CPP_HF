//
// Created by david on 2023. 05. 04..
//

#include "cstring"
#include "Bejegyzes.h"

int Bejegyzes::osszehasonlit(const String& rhs) {
    return strcmp(nev.c_str(), rhs.c_str());
}
int Bejegyzes::osszehasonlit(const Bejegyzes* rhs) {
    return strcmp(nev.c_str(), rhs->nev.c_str());
}

