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
        cadastrarFuncionario();
        break;
    case 'B':
        imprimirFuncionario();
        break;
    case 'C':
        calcular();
        break;
    case 'D':
        calcularPlanoDeSaude();
        break;
    case 'E':
        calcularFgts();
        break;
    case 'F':
        calcularInss();
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

void cadastrarFuncionario(){
  char[100] nome;
  int vale, plano, numeroDependentes;
  float salarioBruto, salarioExtra, salario;

  printf("Entre com o nome do funcionario:\n");
  scanf("%s", nome);
  printf("Se possui o vale transporte (1) Sim (2) Não");
  scanf("%d", &vale);
  printf("Se vai utilizar plano de saude (1) Sim (2) Não");
  scanf("%d", &plano);
  printf("Quantidade de salario extra: \n");
  scanf("%f", salarioExtra);
  printf("")
}
