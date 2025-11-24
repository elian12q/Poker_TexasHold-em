#ifndef CARTA_HPP
#define CARTA_HPP

class Carta {
public:
    enum class Palo {
        Corazones,
        Diamantes,
        Treboles,
        Picas
    };

    enum class Rango {
        Dos = 2, Tres, Cuatro, Cinco, Seis, Siete,
        Ocho, Nueve, Diez, J = 11, Q = 12, K = 13, A = 14
    };

    Carta(Rango r, Palo p);

    Palo  palo()   const;
    Rango rango()  const;
    int   valor()  const;   // 2..14

    const char* toCString(char* buffer, int bufSize) const;

private:
    Palo  palo_;
    Rango rango_;
};

#endif // CARTA_HPP
