#ifndef LICZBA_H
#define LICZBA_H
#include <string>

class Liczba {
    private:
        double x { 0 };
        friend std::ostream& operator<<( std::ostream& str, const Liczba& arg );
        friend std::istream& operator>>( std::ostream& str, Liczba& arg );
    public:
        // ponizsze deklaracje prosze zdefiniowac w pliku liczba.cpp
        Liczba(double arg = 0.0);
        Liczba(const Liczba& arg);
        Liczba(Liczba&& arg);
        Liczba& operator=(const Liczba& arg);
        Liczba& operator=(Liczba&& arg);
        ~Liczba();

        const char* Liczba_to_string() const;



        // prosze pamietac o deklaracji przyjazni wzgl. operatorow
};

#endif