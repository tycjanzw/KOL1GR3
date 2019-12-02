#include "liczba.h"
#include <iostream>

using namespace std;

Liczba::Liczba(double arg = 0.0) {


 cout << "Liczba c-tor " << endl;

}
Liczba::Liczba(const Liczba& arg) 
{
this->x=arg.x;
cout << "Liczba copy-ctor " << endl;


}
Liczba::Liczba(Liczba&& arg){

}

Liczba& Liczba::operator=(const Liczba& arg){
this->arg.x;
}


Liczba::~Liczba() {
delete &x;

}
  
Liczba::Liczba_to_string(){

}


// tu prosze zdefiniowac wszystkie skladowe zadeklarowane w klasie Liczba