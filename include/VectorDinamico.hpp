#ifndef VECTORDINAMICO_HPP
#define VECTORDINAMICO_HPP

template<typename T>
class VectorDinamico {
public:
    VectorDinamico();
    VectorDinamico(const VectorDinamico& other);
    VectorDinamico& operator=(const VectorDinamico& other);
    ~VectorDinamico();

    int size() const;
    bool empty() const;

    T& operator[](int i);
    const T& operator[](int i) const;

    void push_back(const T& v);
    void pop_back();
    void clear();
    void reserve(int newCap); // opcional

private:
    T* data_;
    int size_;
    int capacity_;
};

#include "VectorDinamico.tpp"

#endif // VECTORDINAMICO_HPP
