#include <iostream>
#include "lista_duplamente_ligada.cpp"

int main() {
  ListaDuplamenteLigada<int> lista;
  lista.insereInicio(2);
  lista.removeInicio();
  std::cout << lista.vazia();
}
