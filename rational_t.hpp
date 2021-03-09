// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 2
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#pragma once

#include <iostream>
#include <cassert>
#include <cmath>

// pauta de estilo [5]
# define EPSILON 1e-6

using namespace std;

class rational_t
{
  // pautas de estilos [44] y [73]: primero "public" y después "private"
public: //elementos publicos
  rational_t(const int = 0, const int = 1); //Constructor
  ~rational_t() {} //destructor
  
  // pauta de estilo [71]: indentación a 2 espacios
  
  // getters
  int get_num() const; //metodo para acceder al atributo
  int get_den() const; //metodo para acceder al atributo
  
  // setters
  void set_num(const int); //metodo para acceder a los atributos
  void set_den(const int); //metodo para acceder a los atributos

  double value(void) const;
  rational_t opposite(void) const;
  rational_t reciprocal(void) const;

  bool is_equal(const rational_t&, const double precision = EPSILON) const;
  bool is_greater(const rational_t&, const double precision = EPSILON) const;
  bool is_less(const rational_t&, const double precision = EPSILON) const;

  rational_t add(const rational_t&) const;
  rational_t substract(const rational_t&) const;
  rational_t multiply(const rational_t&) const;
  rational_t divide(const rational_t&) const;

  void write(ostream& os = cout) const; //metodo leer por pantalla
  void read(istream& is = cin); //metodo escribir por pantalla
  
private: //elementos privados
  // pauta de estilo [11]: nombre de los atributos seguido de "_"
  int num_, den_; //atributos privados
};


// sobrecarga de los operadores de E/S
ostream& operator<<(ostream& os, const rational_t&); //sobrecarga del operador <<
istream& operator>>(istream& is, rational_t&); //sobrecarga del operador >>

// FASE I: operadores
rational_t operator+(const rational_t&, const rational_t&); //sobrecarga del operador +
rational_t operator-(const rational_t&, const rational_t&); //sobrecarga del operador -
rational_t operator*(const rational_t&, const rational_t&); //sobrecarga del operador *
rational_t operator/(const rational_t&, const rational_t&); //sobrecarga del operador /
