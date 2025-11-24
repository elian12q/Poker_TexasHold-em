#ifndef JUEGO_HPP
#define JUEGO_HPP

#include "VectorDinamico.hpp"
#include "Cola.hpp"
#include "Mazo.hpp"
#include "Mesa.hpp"
#include "Jugador.hpp"
#include "EvaluadorDeManos.hpp"

class Juego {
public:
    enum class Estado {
        PreFlop,
        Flop,
        Turn,
        River,
        Showdown,
        Finalizado
    };

    explicit Juego(int numJugadores, unsigned seed = 0);

    void iniciarRonda();  // limpia, crea mazo, baraja, reparte 2 a cada jugador
    void avanzarFlop();   // revela 3
    void avanzarTurn();   // revela 1
    void avanzarRiver();  // revela 1
    int showdown();      // evalúa y devuelve índice del ganador

    Estado estado() const;

    // Utilidades de salida por consola (debug/demo)
    void imprimirEstadoBasico() const;

private:
    VectorDinamico<Jugador> jugadores_;
    Cola<int> turnos_;   // índices de jugadores
    Mazo mazo_;
    Mesa mesa_;
    Estado estado_;
    unsigned seed_;
};

#endif // JUEGO_HPP
