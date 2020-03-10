#ifndef DNO_H
#define DNO_H

template <typename E>
class ListaDuplamenteLigada;

template <typename E>
class DNo{
    private:
       E elem; // informação do no
       DNo<E>* prox; // próximo elemento
       DNo<E>* prev; // elemento anterior
       friend class ListaDuplamenteLigada<E>;
};

#endif
