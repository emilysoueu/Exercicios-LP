int main(void) {
  void copiaConteudo(FILE *arquivo, FILE *arquivo1);
  FILE *arquivo = fopen("tmp/exercicio.txt","r");
if (arquivo == NULL)
{
    printf ("N�o foi poss�vel abrir o arquivo");
    return 1;
}

FILE *arquivo1 = fopen("home/novo.txt","w");

copiaConteudo(arquivo,arquivo1);

fclose(arquivo);
fclose(arquivo1);
return 0;
}

void copiaConteudo(FILE *arquivo, FILE *arquivo1)
{

  char ler[100];
  char lu[20];
  while(fgets(ler,100,arquivo) != NULL)
{
        if (strcmp(ler,"Teste") < 0)
        {
            fputs(ler, arquivo1);
        }
}
