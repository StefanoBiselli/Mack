#ifndef FILA_H
#define FILA_H

#include "lista_duplamente_ligada.cpp"

template <typename E>
class Fila{

  private:
    ListaDuplamenteLigada<E> * p;

  public:
    Fila();
    ~Fila();
    bool vazia();
    void enfilera(const E& e);
    const E& inicio() const;
    void desenfilera();
};


#endif
