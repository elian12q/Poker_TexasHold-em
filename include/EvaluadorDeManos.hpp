#ifndef EVALUADORDEMANOS_HPP
#define EVALUADORDEMANOS_HPP

#include "VectorDinamico.hpp"
#include "Carta.hpp"

struct ResultadoMano {
    enum class Combinacion {
        CartaAlta,
        Par,
        DoblePar,
        Trio,
        Escalera,
        Color,
        Full,
        Poker,
        EscaleraColor
    };

    Combinacion tipo;
    int rankingPrimario;
    int kickers[5];         // desempates en orden
};

class EvaluadorDeManos {
public:
    // Evalúa la mejor 5-de-7 usando mano privada + comunitarias
    static ResultadoMano evaluar(const VectorDinamico<Carta>& manoPrivada,
                                 const VectorDinamico<Carta>& comunitarias);

    // Retorna -1 si a<b, 0 si a==b, 1 si a>b
    static int comparar(const ResultadoMano& a, const ResultadoMano& b);

private:
    // Helpers...

};

#endif // EVALUADORDEMANOS_HPP
