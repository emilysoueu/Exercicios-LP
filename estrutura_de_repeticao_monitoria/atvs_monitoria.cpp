//1
/*
#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
  int i, mult, n;

  for (i=0; i < 15; i ++)
  {
    if  (i % 3 == 0){
    cout << i << endl;
      }
  }

}
*/

/*
https://drive.google.com/file/d/1eDYhTlqR5Bdzc0HWiReXHi_VlkDCNWeD/view
*/
//1
/*
#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
  int dez[10];
  int soma;
  int i = 0;
  int j = 0;

  // preenchendo vetor
  while (i < 10)
  {
    cout << "informe  valores" << endl;
    cin >> dez[j];
    i ++;
    j++;
  }

  cout << "\n\n\n";

  // imprimindo vetor
  for (i = 0; i < 10; i++)
  {
   cout << dez[i] << endl;
  }

    cout << "\n\n\n";

  // somando valores do vetor
  for (i = 0; i < 10; i++){
    soma = soma + dez[i];
    }

    cout << "A soma dos valores do vetor eh = " << soma;
}
*/

//2
/*
#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
  int i, num;

  cout << "Informe um valor :";
  cin >> num;

  for (i = 0; i <= num; i ++)
  {
    if (i % 2 != 0)
    {
      cout << i << endl;
    }
  }
}
*/

//3
/*
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int i = 0, j = 0, soma;

  while (i < 60)
  {
    if (i % 2 != 0)
    {
      cout << i << endl;
      soma = soma + i;
    }

    i ++;
  }
  cout << " a soma dos 30 primeiros impares eh = " << soma << endl;
}
*/
// 4

/*
#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
  int num, contador = 0, maior, i = 0, j = 0;

  cout << "Quantos numeros :";
  cin >> num;

 int  lista[num];

  for (i = 0; i < num; i++)
  {
    cout << "insira o valor :" << endl;
    cin >> lista [j];
    j++;
  }

   i = 0;
   maior = lista[0];
 while (i < num)
 {
    if (lista[i] > maior)
      {
       maior = lista [i];
       }
       i ++;
 }

  cout << "o maior numero eh = " << maior << endl;

  for(i = 0; i < num; i++)
 {
   if (lista[i] == maior)
   {
    contador ++;
   }
 }

  cout << "o numero de vezes que o maior numero apareceu eh : " << contador << endl;

}

*/

//5

/*

#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
  int i = 0, j = 0, cont = 0, dados = 0, par = 0;

 do  {
   cout << "\nInforme um valor: ";
   cin >> j;
   dados ++;

   if (j %2 == 0)
   {
     cout << "\n numero informado eh par" << endl;
     par ++;
   }
    else
    {
      cout << "\nO numero informado eh impar" << endl;
    }

  }
    while (j != 1000);

  cout << " dados = " << dados << endl;
  cout << " pares = " << par << endl;
}

*/

//6

/*

#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
  int a,b, contPar = 0, multImp = 1, i, j;

  cout << "Informe o inicio do intervalo ";
  cin >> a;

  cout << "Informe o fim do intervalo";
  cin >> b;

  for (i = a; i <=b; i++)
  {
    if (i %2 == 0)
    {
      contPar = contPar + i;
    }
    if (i %2 != 0)
    {
      multImp = multImp * i;
    }
  }

  cout << "soma dos pares = " << contPar << endl;
  cout << "multiplica��o dos impares = " << multImp << endl;
}
*/

//7
/*

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int n, i, j, k;

  cout << "Informe um valor: ";
  cin >> n;


 i = n+1;
 while (i%11 != 00  )
    { i++; }

 j = n+1;
 while (j%13 != 00  )
    { j++; }

  k = n+1;
 while (k%17 != 00  )
   { k++;}


 cout << "o proximo multiplo de 11 eh " << i << endl;

 cout << "o proximo multiplo de 13 eh " << j << endl;

 cout << "o proximo multiplo de 17 eh " << k << endl;
}
*/

//8
/*
8. Fa�a um programa que some os n�meros primos existentes entre a e b, onde a e b s�o
n�meros informados pelo usu�rio.


#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int div = 2, a, b, soma = 0, i;

  cout << "informe o inicio e o fim do intervalo:\n ";
  cin >> a >> b;


   //cin >> a;

   i = a;
   while ( (i % div != 0 ) && (div < i /2 ))
   {
     div ++;
   }



   if ( i % div == 0)
      soma = soma;


   cout << "\n\n\n\n\n" << soma << endl;

}

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^~
*/

//9
/*
9. Escreva um programa que leia um n�mero inteiro positivo n e em seguida imprima n
linhas do chamado Tri�ngulo de Floyd.
*/
// uma maneira
/*
#include <iostream>
#include <stdlib.h>
using namespace std;

void triangulo(int n)
{
  if (n < 1)
  return;

  int i = 0, qte = 1, num = 1;
    while (i < n)
    {
      int j;
      for (j = 0; j < qte; j++)
      {
        cout << num;
        num ++;
      }
      cout << "\n";
      qte ++;
      i++;
    }
  }

  int main (int argc, char *argv[])
  {
   int numero;
   cout << "Informe um numero ";
   cin >> numero;

   triangulo(numero);
   return 0;
  }
  */

  // outra maneira mais f�cil
  /*
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int i; // conta as linhas
  int j; // conta as colunas
  int c = 0; // incremanta os numeros do triangulo
  int num; // tamanho do triangulo

  cout << "informe um numero";
  cin >> num;

  for (i = 1; i <= num; i++)
  {
    for (j = 1; j <= i; j++)
    {
      c++;
      cout << c;
  }
     cout << "\n";
}

}
*/

//10
/*10. Escreva um programa que receba como entrada o valor do saque realizado pelo cliente
de um banco e retorne quantas notas de cada valor ser�o necess�rias para atender ao
saque com a menor quantidade de notas poss�vel. Ser�o utilizadas notas de 100, 50,
20, 10, 5, 2 e 1 real.*
