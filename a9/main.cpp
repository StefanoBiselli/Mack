#include <iostream>
#include "fila.cpp"

int main() {
  Fila<int> f;
  for(int i=1;i<=6;i++)
    f.enfilera(i);
  for(int i=1;i<=6;i++){
    std::cout<<f.inicio()<<" ";
    f.desenfilera();
  }
}
