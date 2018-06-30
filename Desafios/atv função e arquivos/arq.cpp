/**
2) Escreva um programa para gerar sequ�ncias de X dezenas aleat�rias, que variam entre 1 e 60.
 As sequ�ncias possuem dezenas que podem se repetir no m�ximo T vezes em todo o resultado.
 A quantidade N de sequ�ncias, assim como X (representa a quantidade de dezenas na sequencia) e
 T (representa a quantidade m�xima de repeti��es de dezenas entre todas as sequ�ncias), devem ser informados pela entrada padr�o.
  Cada sequ�ncia deve ser numerada por um inteiro i, que varia entre 1, ... N.
  No final, as sequencias devem ser gravadas em um arquivo.
*/

///Todos os n�meros de 10 a 99 s�o dezenas. (1 - 60)
/// essas dezenas podem se repeir no maximo t vezes

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main (){
   int  qtdDezenasAleatorias; ///X
   int  qtdSequencias; ///N,
   int  qtdRepeticoes; ///T
   int  contRepete = 0, aux;
   int **A;
   int i,j,k;



   cout << "Informe a quantidade de dezenas: ";
   cin >> qtdDezenasAleatorias;
   cout << "\nInforme a quantidade de repeticoes de dezenas nas sequencias: ";
   cin >> qtdRepeticoes;
   cout << "\nInforme a quantidade de sequencias: ";
   cin >> qtdSequencias;

    A = new int *[qtdSequencias];
        for (i=0; i<qtdSequencias; i++)
            A[i] = new int [qtdDezenasAleatorias];

   srand(time(NULL));

   for (i=0; i<=qtdSequencias; i++){
        for (j=0; j<qtdDezenasAleatorias; j++){
                A[i][j] = rand()%60;
                ///[la�o que percorre todo o vetor comparando quantas vezes ele apareceu, caso ultrapasse substitua por outro valor


             cout << A[i][j] << " ";
            }
            cout << "\n";
        }
        /// TENTATIVA DE CONTROLAR AS REPETI��ES.
        /**
        for (k=i; k<qtdSequencias; k++){
             for (aux=i; aux<=k; aux++){
                  if (k==aux)
                  contRepete++;

                  if (contRepete > qtdRepeticoes)
                     i = rand()%10;
                }
        }
        */





        for(i=0; i<qtdSequencias; i++)
            delete[]A[i];
        delete []A;


}
