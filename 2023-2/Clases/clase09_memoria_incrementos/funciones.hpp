/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   funciones.hpp
 * Author: ASUS
 *
 * Created on September 12, 2023, 12:19 AM
 */

#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;

#define INCREMENTO 5

void lectura_alumnos(const char*,int *&, char **&,char *&,int *&,int *&);
void prueba_lectura_alumnos(const char*, int *, char **,char *,int *,int *);
void lectura_cursos(const char*, int*,int*, char**&, double *& , int **&); 
void prueba_lectura_cursos(const char*, char **, double *, int**);

#endif /* FUNCIONES_HPP */

