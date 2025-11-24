#ifndef JUGADOR_HPP
#define JUGADOR_HPP

#include "VectorDinamico.hpp"
#include "Carta.hpp"

class Jugador {
public:
    explicit Jugador(int id, int fichasIniciales = 0);

    void limpiarMano();
    void tomarCarta(const Carta& c);

    const VectorDinamico<Carta>& mano() const;
    int id() const;

    bool activo() const;
    void setActivo(bool v);

    int fichas() const;     // opcional
    void setFichas(int f);  // opcional

private:
    int id_;
    VectorDinamico<Carta> manoPrivada_; // 2 cartas
    bool activo_;
    int fichas_;                        // opcional
};

#endif // JUGADOR_HPP
