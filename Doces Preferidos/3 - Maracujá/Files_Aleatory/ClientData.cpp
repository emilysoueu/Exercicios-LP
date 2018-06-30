#include <cstring>
#include "ClientData.h"

using namespace std;

//construtor ClientData padr�o

ClientData :: ClientData(int AccountNumberValue, string LastNameValue, string FirstNameValue, double BalanceValue){
	setAccountNumber(AccountNumberValue);
	setLastName(LastNameValue);
	setFirstName(FirstNameValue);
	setBalance(BalanceValue);

}// fim do construtor

// obtem o valor do numero da conta
int ClientData :: getAccountNumber () const{
	return AccountNumber;
}

//configurar o valor do numero da conta
void ClientData :: setAccountNumber(int AccountNumberValue){
	AccountNumber = AccountNumberValue;
}
/*==================================================*/
// Aqui, a fun��o tava retornando Inteiro, mas a declra��o l� no ClientData.h T�
// Dizendo que ele retorna String.

// Vers�o antiga
// int ClientData :: getLastName () const{
// 	return LastName;
// }

// obtem o valor do LastName
string ClientData :: getLastName () const{
	return LastName;
}
/*==================================================*/


//configurar o valor do LastName
void ClientData :: setLastName(string LastNameString){
	//copia no m�ximo 15 caracteres da string para LastName
	const char* LastNameValue = LastNameString.data();
	int length = LastNameString.size();

<<<<<<< HEAD
  // 1x MDS N�O USA OPERADOR TERN�RIO EM NOME DE G-ZUIS Hueahueuhuea
	//length = (length < 15 ? length :: 14); //O erro � que era s� ":" e n�o "::"

  //If � coisa de gente, vlw flw.
=======
 

  
>>>>>>> master
  if (length < 15){
    length = length;
  }else{
    length = 14;
  }

	strncpy(LastName, LastNameValue, length);
	LastName[length] = '\0';// acrescenta caractere nulo ao sobrenome
}

<<<<<<< HEAD
/*==================================================*/
// Aqui tu botou o "s" sem querer depois do "t" e inv�s de antes. (FirstName)
//E tamb�m a fun��o tava retornando Inteiro, mas a declra��o l� no ClientData.h T�
// Dizendo que ele retorna String.


// Vers�o antiga
// int ClientData :: getFirtsName () const{
// 	return FirstName;
// }
=======
/
>>>>>>> master

// obtem o valor do FirstName
string ClientData :: getFirstName () const{
	return FirstName;
}
/*==================================================*/


//configurar o valor do FirstName
void ClientData :: setFirstName(string FirstNameString){
	//copia no m�ximo 10 caracteres da string para LastName
	const char*FirstNameValue = FirstNameString.data();
	int length =FirstNameString.size();

<<<<<<< HEAD
  // 2x MDS N�O USA OPERADOR TERN�RIO EM NOME DE G-ZUIS Hueahueuhuea
  // Mesma mutreta do outro de cima. era ":" inv�s de "::"
  // mas como voc� � uma menina amorzinho, EU TENHO CERTEZA que n�o vai mais usar
  // operador tern�rio. u.u

  //length = (length < 10 ? length :: 9);//como tava
  //length = (length < 10 ? length : 9); // o jeito """"""""""certo""""""""""

  // Agora tirando a zoeira. O if � mais leg�vel. Antigamente todos os livros
  // usavam operador tern�rio, era uma mania mesmo. Mas j� caiu em desuso.
  // A� toda vez que tu ver operador tern�rio, tu s� troca por um if bonitinho.
=======
  
>>>>>>> master
  if (length < 10){
    length = length;
  }else{
    length = 9;
  }

	strncpy(FirstName, FirstNameValue, length);
	FirstName[length] = '\0';// acrescenta caractere nulo ao FirstName
}

//obtem o valor do saldo
double ClientData :: getBalance () const{
<<<<<<< HEAD
  // Aqui t� retornando Balance com "B" maiusculo
  // L� no ClientData.h t� escrito com "b" minusculo
  // Vers�o antiga:
	// return Balance;

=======
  
>>>>>>> master
	return balance;
}

//configura o valor do saldo

void ClientData :: setBalance(double BalanceValue){
<<<<<<< HEAD
  // Aqui t� "setando" Balance com "B" maiusculo
  // L� no ClientData.h t� escrito com "b" minusculo
  // Vers�o antiga:
	// Balance = BalanceValue;
=======
  /
>>>>>>> master
	balance = BalanceValue;
}


