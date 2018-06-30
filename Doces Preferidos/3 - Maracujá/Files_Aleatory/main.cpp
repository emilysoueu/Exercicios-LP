<<<<<<< HEAD
=======

>>>>>>> master
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "ClientData.h"

using namespace std;

<<<<<<< HEAD
void outputLine(ostream &output, const ClientData &record); //prot�tipo

=======
void outputLine(ostream &output, const ClientData &record); //protótipo
>>>>>>> master

int main(){
	int AccountNumber;
	char LastName[15];
	char FirstName[10];
	double Balance;


    ofstream outCredit("Credit.dat", ios :: binary);

    if (!outCredit){
    	cout << "Erro" << endl;
    	exit (1);
    }

    ClientData blankClient; // construtor zera ou apaga cada menbro de dados
    // gera a saida de 100 registros em branco no arquivo
    	for (int i=0; i<100; i++)
    		outCredit.write (reinterpret_cast <const char*> (&blankClient), sizeof(ClientData));

    fstream outCredit_S("Credit.dat", ios :: in | ios :: out | ios :: binary);

    // sai do progrmama se o fstream n�o puder abrir o arquivo
    	if (!outCredit_S){
    		cout << "Erro" << endl;
    	}

    cout << "Enter Account Number (1-100, 0 to end input)\n";

    // requer que o usu�rio especifique o numero da conta

    ClientData client;
    cin >> AccountNumber;

	// O usu�rio isere as informa��es que ser�o copiadas para o arquivo

	while (AccountNumber > 0 && AccountNumber <= 100){
		// o usu�rio insere Nome, sobrenome e o Saldo
		cout << "Enter LastName, FirstName, Balance: \n";
		cin >> setw(15) >> LastName;
		cin >> setw(10) >> FirstName;
		cin >> Balance;

		// configura os valores de  Account Number, Last Name e First Name

		client.setAccountNumber(AccountNumber);
		client.setLastName(LastName);
		client.setFirstName(FirstName);
		client.setBalance(Balance);

		//Busca posi��o no arquivo de registro especificado pelo usu�rio

		outCredit_S.seekp(client.getAccountNumber()-1*sizeof(ClientData));

		//Grava informa��es especificadas pelo usu�rio

		outCredit_S.write(reinterpret_cast <const char *> (&client), sizeof(ClientData));

		//Permite o usu�rio inserir outra conta

		cout << "Enter Account Number\n";
		cin >> AccountNumber;
	}

	ifstream  inCredit("credit.dat", ios :: in);

	//fecha o programa se ifstream n�o puder abrir o arquivo
	if (!inCredit){
		cout << "Erro " << endl;
		exit (1);
	}

	cout << left << setw(10) << " Account " << setw(16) << " Last Name " << setw(11) << " First Name "
	<< setw(10) << right << " Balance " << endl;

	//l� o primeiro acesso do registro do arquivo

	inCredit.read(reinterpret_cast <char *> (&client), sizeof(ClientData));

	//l� Todos os registros do arquivo

	while (inCredit && !inCredit.eof()){
		//exie o registro
		if (client.getAccountNumber() != 0)
			outputLine(cout, client);

		// l� o pr�ximo registro do arquivo
		inCredit.read (reinterpret_cast <char *> (&client), sizeof(ClientData));
	} // fim do while

	return 0;

ifstream  inCredit("credit.dat", ios :: in);

	//fecha o programa se ifstream não puder abrir o arquivo
	if (!inCredit){
		cout << "Erro " << endl;
		exit (1);
	}

	cout << left << setw(10) << " Account " << setw(16) << " Last Name " << setw(11) << " First Name "
	<< setw(10) << right << " Balance " << endl;

	//lê o primeiro acesso do registro do arquivo

	inCredit.read(reinterpret_cast <char *> (&client), sizeof(ClientData));

	//lê Todos os registros do arquivo

	while (inCredit && !inCredit.eof()){
		//exie o registro
		if (client.getAccountNumber() != 0)
			outputLine(cout, client);

		// lê o próximo registro do arquivo
		inCredit.read (reinterpret_cast <char *> (&client), sizeof(ClientData));
	} // fim do while

	return 0;

}

//exibe um único registro do arquivo
void outputLine(ostream &output,  const ClientData &record){
		output << left << setw(10) << record.getAccountNumber() <<setw(16) <<
		record.getLastName() << setw(11) << record.getFirstName() << setw(10) <<
		setprecision(2) << right << fixed << showpoint << record.getBalance () << endl;
}

//exibe um �nico registro do arquivo
void outputLine(ostream &output,  const ClientData &record){
		output << left << setw(10) << record.getAccountNumber() <<setw(16) <<
		record.getLastName() << setw(11) << record.getFirstName() << setw(10) <<
		setprecision(2) << right << fixed << showpoint << record.getBalance () << endl;
}












