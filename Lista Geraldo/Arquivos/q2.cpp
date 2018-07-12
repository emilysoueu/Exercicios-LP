/**2 - Implemente uma fun��o c�pia de arquivos copyfile_inverse. Esta fun��o copia um arquivo A para um arquivo B de maneira inversa.
 Ou seja, a fun��o l� o arquivo do final para o in�cio.
*/

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main (){
    char omelete[20];
    int lines = 0;
    FILE  *master;

    ifstream original;
            master = original.open("A.txt", ios :: in);

    if (!original.is_open()){
        cout << "ERRO"<<endl;
        exit(1);
    }


    ofstream mundoInvertido;
             mundoInvertido.open("C.txt", ios :: app);


    fseek(master,sizeof(master),SEEK_END));
    while(!original.seekg(0, original.beg)){
            original.getline(omelete,20);
            mundoInvertido << omelete;

    }




       original.close();
       mundoInvertido.close();

       return 0;


}






