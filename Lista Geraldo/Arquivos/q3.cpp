/**
3 - Escreva uma fun��o que receba como par�metro o nome de um arquivo e retorne uma lista (ou vetor) que contenha a indexa��o
de todas as palavras do arquivo. Entende-se por indexa��o como a localiza��o da primeira letra de cada palavra no arquivo.
Como o arquivo pode possuir palavras repetidas, portanto uma mesma palavra na lista (ou vetor) pode conter diferentes localiza��es
 no arquivo que devem ser guardadas na forma de um mesmo registro.
*/

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main (){
    int i = 0,n;
    int lines = 0;
    char word[30];
    char *palavras;

    ifstream myFile;
             myFile.open("A.txt", ios :: in);

    if (!myFile.is_open()){
        cout << "Erro";
        exit (1);
    }

    while(!myFile.eof()){
        myFile.getline(word,30); /// pegando linha por linha
        lines++;
        cout << i+1 << " - " << word << endl; /// imprimindo o conte�do da linha
        i++;






    }



    cout << "Linhas: " << lines -1 <<endl;





}
