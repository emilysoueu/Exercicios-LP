/*4 - Dado 3 matrizes, A, B, e C, de tamanhos informados pelo usu�rio, e de valores tamb�m informados pelo usu�rio,
escreva um programa, com o uso de fun��es, que multiplique as matrizes. Ao final, apresente o resultado na tela.*/

// A*B A*C B*C B*A  C*A C*B
 // MELHOR CASO : o n�mero de colunas da primeira matriz seja igual ao n�mero de linhas da segunda matriz.
 // CASO M�DIO  : ???
 //PIOR CASO    : o n�mero de colunas da primeira matriz  N�O seja igual ao n�mero de linhas da segunda matriz.

 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 1 - A dist�ncia entre dois pontos (x1,y1) e (x2, y2) pode ser calculada pela dist�ncia
 euclidiana d = raiz( quadrado(x1-x2) + quadrado (y1-y2) ). Escreva um programa que leia um conjunto de pontos
 (n�mero de pontos informado pelo usu�rio e menor ou igual a 10) e determine dois pontos, p1 e p2, entre tais pontos
 informados pelo usu�rio, que englobem atrav�s de uma circunfer�ncia tra�ada por eles e com di�metro igual � dist�ncia entre
 o par de pontos, o maior n�mero de pontos informados anteriormente. Importante: voc� s� precisa imprimir como resultado a maior quantidade
 de pontos englobados por uma circunfer�ncia e n�o quais s�o esses pontos.*/









/*2 - Fa�a uma fun��o que encontre os divisores de um n�mero qualquer e em seguida encontre o maior divisor primo do n�mero.
 O programa deve exibir a resposta para os n�meros de 100 � 1000000
 .*/ // RESOLVIDO

 /*
 #include <iostream>
 #include <cstdlib>
 using namespace std;

 int maiorDivisorPrimo(int n);

 int main (){
     int X;
     int maiorPrimo;

     cout << "Insira um valor entre 100 e 1000000: ";
     cin >> X;

     maiorPrimo = maiorDivisorPrimo(X);

     cout << "O maior divisor primo do numero informado eh = " <<maiorPrimo << endl;


 }

 int maiorDivisorPrimo(int num){
     int i, j;
     int maior = 0;
     int div;

     for (i=1; i<=num; i++,div =0){
        if (num%i == 0){
            cout << "Divisores : "<< i << endl;
        }
        for (j =1; j<num; j++){
            if (i%j==0){
            div++;
            if(div==2)
                maior = j;

            }

        }
    }
     return maior;
}

*/

/*3 - Um n�mero pal�ndromo � aquele que � igual quando lido em qualquer sentido. O maior pal�ndromo feito a partir
 do produto de dois n�meros de dois d�gitos � 9009 = 91 � 99. Escreva uma fun��o para encontrar o maior pal�ndromo feita a
    partir do produto de dois n�meros de 3 d�gitos.*/
    /*

    #include <iostream>
    #include <cstdlib>

    using namespace std;

    int palindromo();

    int main (){
        int maiorPalindromo;

        maiorPalindromo = palindromo();

        cout << "o maior palindromo eh: "<< maiorPalindromo << endl;

    }

    int palindromo(){
        int i, j=0; // controles do la�o
        int num; // guarda o produto dos n�meros de 3 d�gitos
        int  num2; // num2 = copia os valores do produto;
        int  invertido=0 , resto,  aux; // variaveis para inverter o numero
        int pali =0; // recebe o valor palindromo


        for (i=100; i<=999; i++){
            for (j=i; j<=999; j++){
                num = i*j;
                num2 = num;
                    while (num2>0){
                        resto = num2 % 10;
                        invertido = (invertido*10)+resto;
                        num2 = num2 / 10;
                        if ((invertido == num) && (invertido > pali))
                            pali = invertido;
                    }
                    invertido = 0;

                 }
             }

        return pali;
 }

*/



/*4 - Dado 3 matrizes, A, B, e C, de tamanhos informados pelo usu�rio, e de valores tamb�m informados pelo usu�rio,
escreva um programa, com o uso de fun��es, que multiplique as matrizes. Ao final, apresente o resultado na tela.*/

#include <iostream>
#include <cstdlib>
using namespace std;

int  multiplicaMatriz(int **X, int **Y, int **Z);

int main (){
    int **A, **B, **C;
    int lA, cA, lB, cB;
    int i, j, k;



     cout << "Insira o as dimens�es da primeira matriz: (linhas e colunas)" << endl;
     cin >> lA >> cA;
     cout << "Insira o as dimens�es da segunda matriz: (linhas e colunas)" << endl;
     cin >> lB >> cB;


      cout <<  multiplicaMatriz(A, B, C) << endl;

}

int  multiplicaMatriz(int **X, int **Y, int **Z){
    int m, n, p, q;
    int X [m][n];
    int Y [p][q];
    int Z [m][q];
    int i, j, k;

      if (n != q) return 1;

     X = new int *[m];
     for (i=0; i<m; i++)
        X[i] = new int [n];

     Y = new int * [p];
    for (i=0; i<p; i++)
        Y[i] = new int [q];

    Z = new int * [n];
    for (i=0; i<n; i++)
        Z[i] = new int [p];


        cout << "\nA:\n";
        for (i=0; i<m; i++){
            for (j=0; j<n; j++) {
                cout << "Insira valores: ";
                cin >> A[i][j];
                cout << A[i][j] << " ";
            }
            cout << "\n";
        }


            cout << "\nB:\n";
            for (i=0; i<p; i++){
                for (j=0; j<q; j++) {
                    cout << "Insira valores: ";
                    cin >> B[i][j];
                    cout << B[i][j] << " ";
                }
                cout << "\n";
            }

            for (i=0; i<m; i++) {
                for (j=0; j<q; j++) {
                    Z[i][j] = 0;
                    for (k=0; k<p; k++)               // matriz Z
                        Z[i][j] += X[i][k] * Y[k][j];

                    cout << Z[i][j] << " ";
                }
                cout << "\n";
                   }

}







/*5 - Implemente uma fun��o de ca�a-palavras. Essa fun��o deve receber uma matriz de letras e um vetor de strings.
A fun��o deve procurar cada palavra do vetor na matriz nas dire��es horizontais, verticais e diagonais.
 (Sempre em ordem. N�o implemente ordem inversa) e ao encontrar cada string, informar qual a posi��o que foi encontrado
 assim como a dire��o (horizontal, vertical ou diagonal).*/





