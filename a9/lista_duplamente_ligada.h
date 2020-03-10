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
   return cabeca==NULL;
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
   novo->prox=cabeca;
   novo->elem=e;
   novo->prev=NULL;
   if (cabeca!=NULL)
      cabeca->prev=novo;
   cabeca=novo;
   if (cabeca->prox==NULL)
      fim=cabeca;
}

template <typename E>
void ListaDuplamenteLigada<E>::insereFinal(const E& e){
   DNo<E>* novo=new DNo<E>();
   novo->prox=NULL;
   novo->elem=e;
   novo->prev=fim;
   if (fim!=NULL)
      fim->prox=novo;
   fim=novo;
   if (fim->prev==NULL)
      cabeca=fim;
}

template <typename E>
void ListaDuplamenteLigada<E>::removeInicio(){
    if (cabeca!=NULL){
      DNo<E>* aux=cabeca;
      if (aux->prox==NULL)
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
if (fim!=NULL){
      DNo<E>* aux=fim;
      if (aux->prev==NULL)
         cabeca=fim=NULL;
      else{
         fim=fim->prev;
         fim->prox=NULL;
      }
      delete aux;
    }
}

template <typename E>
void ListaDuplamenteLigada<E>::inserePrio(const E& e, int p){
  insereInicio(e);
  for(DNo<E> *i=cabeca;i->prox != NULL && i->prox->prio > p; i=1->prox)
    E aux=i->prox->elem;
    i->prox->elem=i->elem;
    i->elem=aux;
    int auxp=i->prox->prio;
    i->prox->prio=p;
    i->prio=auxp;
}
