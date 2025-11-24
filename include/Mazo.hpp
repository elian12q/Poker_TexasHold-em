#ifndef MAZO_HPP
#define MAZO_HPP

#include "VectorDinamico.hpp"
#include "Carta.hpp"

class Mazo {
public:
    explicit Mazo(unsigned seed = 0);

    void  inicializar52();  // repone las 52 cartas en orden
    void  barajar();        // Fisher-Yates sobre VectorDinamico<Carta>
    Carta robar();          // saca del tope
    int   restantes() const;

    void  setSeed(unsigned seed);

private:
    VectorDinamico<Carta> cartas_;
    unsigned seed_;
};

#endif // MAZO_HPP
