#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

void outputline (int account, const string name, double balance);
enum RequestType{ Zero_Balance = 1, Credit_Balance, Debit_Balance, end};
int request();
bool ShouldDisplay (int, double);
int getRequest();

int main (){

        int account;
        char name[30];
        double balance;
        int Request;

        ofstream ATV_S("exe.dat", ios :: app); /// gravando dados no arquivo;

        if (!ATV_S){
            cout << "ERRO" << endl;
            exit(1);
        }

        cout << "Entre com a conta, nome e balanco " <<endl << "Enter end-of-file to end input. ? <ctrl-z> \n";



        while (cin >> account >> name >> balance){
            ATV_S << account << " " << name << " " << balance <<endl;
            cout << "?";
        }

        ATV_S.close();

        ///CONSTRUTOR -IFSTREAM- ABRE O ARQUIVO
        ifstream ATV_E("exe.dat", ios :: in);

        ///fecha o programa se ifstream n�o p�de abrir o arquivo
        if (!ATV_E){
            cout << "ERRO"<<endl;
            exit(1);
        }/// fim do if

        cout << left << setw(10) << "Account: " << setw(13) << "Name: " << "Balance: "<< endl << fixed << showpoint;

       while (ATV_E >> account >> name >> balance)
            outputline(account, name, balance);

        /// obt�m a solicita��o do usu�rio (por exemplo, saldo zero, credor ou devedor)
        Request = getRequest();


        /// processa solicita��o do usu�rio

        while (Request != end){
            switch(Request){
            case Zero_Balance:
                    cout <<"\nAccouts with zero balances: \n";
                break;
                case Credit_Balance:
                    cout << "\nAccouts with credit balances: \n";
                break;
                case Debit_Balance:
                    cout << "\nAccouts with debit balances: \n";
                break;
            }

            /// l� a conta, nome e saldo do arquivo
            ATV_E >> account >> name >> balance;

            /// exibe conte�do do arquivo (at� eof)
            while (!ATV_E.eof()){
                /// exibe o registro
                if (ShouldDisplay(Request,balance))
                    outputline(account, name, balance);
            } /// fim do while interno

            /// l� a conta, o nome e o saldo do arquivo
            ATV_E >> account >> name >> balance;

        ATV_E.clear(); ///redefine eof para pr�xima entrada
        ATV_E.seekg(0);///reposiciona no come�o de arquivo
        Request = getRequest();  ///obt�m solicita��o adicional do usu�rio

    } /// fim do while externo

    cout << "End of Run." << endl;
    return 0;/// destrutor ifstream fecha o arquivo

}/// fim de main


/// obt�m a solicita��o do usu�rio
int getRequest(){

    int Request;/// solicita��o do usu�rio


    /// exibe op��es de solicita��o
    cout << "\nEnter Request " << endl;
    cout << "1 - List accounts with Zero Balances: " << endl;
    cout << "2 - List accounts with credits Balances: " << endl;
    cout << "3 - List accounts with debits Balances: " << endl;
    cout << "4 - end of run" << fixed << showpoint;

    do{/// entrada da solicita��o do usu�rio
        cout << "\n?";
        cin >> Request;
    } while (Request < Zero_Balance && Request > end);


    return Request;
} /// fim da fun��o getRequest


/// determina se exibe um dado registro
bool ShouldDisplay(int type, double balance){

    /// determina se exibe saldos zero
     if (type == Zero_Balance && balance == 0)
        return true;
    /// determina se exibe saldos credoreS
     if (type == Credit_Balance && balance < 0)
        return true;
    /// determina se exibe saldos devedores
     if (type == Debit_Balance && balance > 0)
        return true;

    return false;
}/// fim da fun��o shouldDisplay



/// exibe um registro do arquivo
void outputline (int account, const string name, double balance){
    cout << left << setw(10) << account << setw(13) << name << setw(7) << setprecision(2) << right << balance <<endl;

}/// fim da fun��o outputLine
