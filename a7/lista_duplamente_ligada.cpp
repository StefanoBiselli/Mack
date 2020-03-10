
#include <iostream>
#include "lista_duplamente_ligada.h"

template <typename E>
ListaDuplamenteLigada<E>::ListaDuplamenteLigada(){
  cabeca=fim=NULL;
}

template <typename E>
ListaDuplamenteLigada<E>::~ListaDuplamenteLigada(){

}

template <typename E>
bool ListaDuplamenteLigada<E>::vazia() const{
    return (cabeca==NULL);
}

template <typename E>
const E& ListaDuplamenteLigada<E>::inicio() const{
   return cabeca->elem;
}

template <typename E>
const E& ListaDuplamenteLigada<E>::final() const{
    return fim->elem;
}

template <typename E>
void ListaDuplamenteLigada<E>::insereInicio(const E& e){
   DNo<E>* novo=new DNo<E>();
   novo->elem=e;
   novo->prox=cabeca;
   novo->prev=NULL;
   if (cabeca==NULL)
     cabeca=fim=novo;
   else{
      cabeca->prev=novo;
      cabeca=novo;
   }
}

template <typename E>
void ListaDuplamenteLigada<E>::insereFinal(const E& e){
   DNo<E>* novo=new DNo<E>();
   novo->elem=e;
   novo->prox=NULL;
   novo->prev=NULL;
   if (cabeca==NULL)
     cabeca=fim=novo;
   else{
      fim->prox=novo;
      novo->prev=fim;
      fim=novo;
   }
}

template <typename E>
void ListaDuplamenteLigada<E>::removeInicio(){
    if (cabeca!=NULL){
      DNo<E>* aux=cabeca;
      if (cabeca->prox==NULL)
         cabeca=fim=NULL;
      else{
        cabeca=cabeca->prox;
        cabeca->prev=NULL;
      }
      delete aux;
    }
}

template <typename E>
void ListaDuplamenteLigada<E>::removeFinal(){
   if (cabeca!=NULL){
      DNo<E>* aux=fim;
      if (fim->prev==NULL)
         cabeca=fim=NULL;
      else{
        fim=fim->prev;
        fim->prox=NULL;
      }
      delete aux;
    }
}
