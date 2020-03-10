#include "fila.h"

template <typename E>
Fila<E>::Fila(){
   p = new ListaDuplamenteLigada<E>();
}

template <typename E>
Fila<E>::~Fila(){ 
   delete p;
}

template <typename E>
bool Fila<E>:: vazia(){
   return p->vazia();
}

template <typename E>
void Fila<E>::enfilera(const E& e){
   p->insereFinal(e);
}

template <typename E>
const E& Fila<E>::inicio() const{
   return p->inicio();
}

template <typename E>
void Fila<E>::desenfilera(){
   p->removeInicio();
}

