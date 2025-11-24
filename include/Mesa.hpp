#ifndef MESA_HPP
#define MESA_HPP

#include "VectorDinamico.hpp"
#include "Carta.hpp"

class Mesa {
public:
    Mesa();

    void limpiar();
    void ponerComunitaria(const Carta& c);

    const VectorDinamico<Carta>& comunitarias() const;

    int  pozo() const;              // opcional
    void agregarAlPozo(int monto);  // opcional

private:
    VectorDinamico<Carta> comunitarias_; // 0..5
    int pozo_;                          // opcional
};

#endif // MESA_HPP
