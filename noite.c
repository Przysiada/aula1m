#include <stdio.h>
#include <stdlib.h>
#define OP_SAIR 'X' 

typedef struct elemento
{
  char nome[100];
  int vale;
  int planoSaude;
  float salario;
  float gratificacao;
  int dependentes;
} funcionario;


void main()
{
  char op = '0';
  printf("Bem vindo ao sistema\n");

  while(op != OP_SAIR)
  {

    scanf("%c", &op);
    switch (op)
    {
    case 'A':
        versalario();
        break;
    case 'B':

        break;
    case 'C':
        
        break;
    case 'D':
        
        break;
    case 'E':
        
        break;
    case 'F':
        
        break;
    case 'G':
        
        break;
    case 'H':
        
        break;
    case 'I':
        
        break;
    default:
      printf("ERRO : Voce escreveu errado usuario burro\n");
      break;
    }
  
}

void menu(){
  const 
  printf("A - Cadastrar funcionario\n");
  printf("B - Imprimir funcionarios\n");
  printf("C - Calcular VT\n");
  printf("D - Calcular plano de saúde\n");
  printf("E - Calcular o FGTS\n");
  printf("F - Calcular o INSS\n");
  printf("G - Calcular o salario familia\n");
  printf("H - Calcular o IR\n");
  printf("I - Calcular o Salario liquido");
  printf("%c - Sair", OP_SAIR);

}
