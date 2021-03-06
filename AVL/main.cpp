#include <iostream>

class No
{
private:
  No *esq, *dir;
  int chave;

public:
  No(int chave)
  {
      this->chave = chave;
      esq = NULL;
      dir = NULL;
  }
    int getChave()
  {
    return chave;
  }

  No* getEsq()
  {
      return esq;
  }
  No* getDir()
  {
      return dir;
  }
  void setEsq(No* no)
  {
      esq = no;
  }

  void setDir(No* no)
  {
      dir = no;
  }

};

class Arvore
{
  private:
    No* raiz;

  public:
    Arvore()
    {
        raiz = NULL;
    }
    
    void inserir(int chave)
    {
      if(raiz ==NULL)
        raiz = new No(chave);
      else
        inserirAux(raiz, chave);
      }

      void inserirAux(No* no, int chave)
      {
        if(chave < no->getChave())
          {
            if(no->getEsq() == NULL)
            {
              No* novo_no = new No(chave);
              no->setEsq(novo_no);
            }
            else 
              {
                inserirAux(no->getEsq(), chave);
              }
        else if (chave > getChave())
        {      
          if(no->getDir() == NULL)
            {
              No* novo_no = new no(chave);
              no-> setDir(novo_no);

            }
        else{
              inserirAux(no->getDir(), chave);

            }
          }
    }
};
