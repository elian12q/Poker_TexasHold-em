#ifndef COLA_HPP
#define COLA_HPP

template<typename T>
class Cola {
public:
    Cola();
    Cola(const Cola& other);
    Cola& operator=(const Cola& other);
    ~Cola();

    void enqueue(const T& v);
    T dequeue();                // por valor
    const T& front() const;
    bool empty() const;
    int size()  const;

private:
    T*  buf_;
    int cap_;
    int head_;
    int tail_;
    int count_;
};

#include "Cola.tpp"  

#endif // COLA_HPP
