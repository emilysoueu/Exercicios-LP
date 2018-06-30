/**                                                     Vetor Hash


Crie um vetor de tamanho M (informado pelo usu�rio)
onde as opera��es de consultas e inser��o de elementos � especial.

Cada consulta e inser��o segue a utiliza��o do c�lculo da posi��o.
O c�lculo � chamado de hash e � da seguinte maneira:

hash = valor a ser inserido % M
 Ex.:
M = 5.
Inserir o valor 15
15 % 5 = 0, ent�o colocar o valor na posi��o 0
*se atende para
que a posi��o 0 possa estar ocupado, assim se
procura a primeira posi��o a direita livre. Por exemplo, 1.
Se 1 estiver
ocupada, procura 2, .. e assim vai.
**se a �ltima posi��o estiver ocupada, volte para a primeira e
continue procurando.

Use a mesma l�gica do hash (c�lculo de posi��o) para encontrar
um elemento.

Resposta:
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int m, opcao;

    cout << "informe o tamanho do Vetor: " ;
    cin >> m;

    int *vet = new int[m];
    int *controle = new int[m];

    for(int i=0; i<m; i++){
        vet[i] = 0;
    }

    for(int i=0; i<m; i++){
        controle[i] = 0;
    }

    do{
        int valorInserido, resto;
        cout << "Menu de Opcoes" << endl;
        cout << "Informe a Opcao Pretendida" << endl;
        cout << "Opcao 1 para Inserir um Elemento" << endl;
        cout << "Opcao 2 para Pesquisar  um Elemento no Vetor" << endl;
        cout << "Opcao 3 para Imprimir o Vetor de Elementos" << endl;
        cout << "Opcao 0 para Encerrar o Programa" << endl;

        cin >> opcao;
        if(opcao == 1){

        cout << "Informe o Elemento a ser inserido no Vetor: ";
        cin >> valorInserido;

        resto = valorInserido%m; // recebe o resto da divisao

    if(controle[resto] == 0){
        vet[resto] = valorInserido;
        controle[resto] = 1;
        cout << endl << "Elemento Inserido com sucesso " << endl;
    }
    else{
        int aux = 0;
        bool aux2 = true;
        int i=resto;
        while(controle[i]!=0){
            if(aux == m){
                cout << endl << "N�o ha posicoes Disponiveis" << endl;
                aux2 = false;
                break;
            }
            i++;
            aux++;

            if(i==m){
                i=0;
            }
        }
            if(aux2 == true){
                controle[i] = 1;
                vet[i] = valorInserido;
                 cout << endl << "Elemento Inserido com sucesso " << endl;
            }
    }
        }

    if(opcao == 2){
        int elm;
        cout << endl << "Digite o Elemento a qual quer buscar" << endl;
        cin >> elm;

        if(vet[resto] == elm ){
            cout << "Elemento " << elm << " encontrado com sucesso na posicao " << resto << endl;
        }

        else{
            int aux = 0;
            bool aux2 = true;
            int i=resto;
            while(vet[i]!=elm){
                if(aux == m){
                    cout << endl << "Elemento nao esta no vetor" << endl;
                    aux2 = false;
                    break;
                }
                i++;
                aux++;

                if(i==m){
                    i=0;
                }
            }
                if(aux2 == true){
                    cout << "Elemento " << elm << " encontrado com sucesso na posicao " << i << endl;
                }
        }

    }

        if(opcao == 3){
            cout << endl << "Vetor de Elementos" << endl;
            for(int i=0; i<m; i++){
                cout<< vet[i] <<"\t";
            }
        }

        if(opcao == 0){
            cout << "Encerrando o Programa";
        }
    }
    while(opcao!=0);

    delete []vet;
    delete []controle;
}
