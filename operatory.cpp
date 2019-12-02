#include "operatory.h"
#include "liczba.h"
using namespace std;

std::ostream& operator<<(std::ostream& str, const Liczba& a) {
    return str << a.x;
}

std::istream& operator>>(std::istream& str, Liczba& a){
 
    return str >> a.x;
}

Liczba operator+(const Liczba& a, const Liczba& b) {
 return str;
}

Liczba& operator+=(Liczba& a, const Liczba& b) {
    return a = a + b;
}