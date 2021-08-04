#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OP_CADASTRAR 1
#define OP_IMPRIMIR 2
#define OP_CALC_VT 3
#define OP_CALC_SAUDE 4
#define OP_CALC_FGTS 5
#define OP_CALC_INSS 6
#define OP_CALC_SAL_FAM 7
#define OP_CALC_IR 8
#define OP_CALC_SAL_LIQ 9
#define OP_SAIR 0

typedef struct elemento
{
	char nome[100];
	int vale;
  float valorVale;
	int planoSaude;
	float salario;
	float gratificacao;
	int dependentes;
	struct elemento* prox;
} funcionario;

void menu();
void cadastrarFuncionario();
void adicionarUsuario();
void calcularPlano()

void main()
{
  char op = '0';
  printf("Bem vindo ao sistema\n");

  funcionario* elemento = NULL;

  while(op != OP_SAIR)
  {

    menu();

    scanf("%c", &op);
    switch (op)
    {
    case OP_CADASTRAR:
        cadastrarFuncionario();
        break;

    case OP_IMPRIMIR:
        imprimirFuncionario();
        break;

    case OP_CALC_VT:
        calcular();
        break;

    case OP_CALC_SAUDE:
        calcularPlanoDeSaude();
        break;

    case OP_CALC_FGTS:
        calcularFgts();
        break;

    case OP_CALC_INSS:
        calcularInss();
        break;

    case OP_CALC_SAL_FAM:
        break;

    case OP_CALC_IR:
        
        break;
    case OP_CALC_SAL_LIQ:

        break;

    default:
      printf("ERRO : Voce escreveu errado usuario burro\n");
      break;
    }
  
}

void menu(){
  printf("%d - Cadastrar funcionario\n", OP_CADASTRAR);
  printf("%d - Imprimir funcionarios\n", OP_IMPRIMIR);
  printf("%d - Calcular VT\n", OP_CALC_VT);
  printf("%d - Calcular plano de saúde\n", OP_CALC_SAUDE);
  printf("%d - Calcular o FGTS\n", OP_CALC_FGTS);
  printf("%d - Calcular o INSS\n", OP_CALC_INSS);
  printf("%d - Calcular o salario familia\n", OP_CALC_SAL_FAM);
  printf("%d - Calcular o IR\n", OP_CALC_IR);
  printf("%d - Calcular o Salario liquido", OP_CALC_SAL_LIQ);
  printf("%d - Sair", OP_SAIR);
}

void cadastrarFuncionario(){
  char[100] nome;
  int grat;
  funcionario *fun

  printf("Entre com o nome do funcionario:\n");
  scanf("%s", &nome);
  strcpy(fun->nome, nome);
  printf("Se possui o vale transporte (1) Sim (0) Não");
  scanf("%d", &fun->vale);
  printf("Se vai utilizar plano de saude (1) Sim (0) Não");
  scanf("%d", &fun->plano);

  printf("Possui gratificação? (1) Sim (0) Não");
  scanf("%d", &grat);

  if(grat == 1)
  {
    printf("Entre com o valor: ");
    scanf("%f", &fun->gratificacao);
  }

  printf("Entre com salario bruto: \n");
  scanf("%f", &fun->salarioBruto);
  printf("Entre com quantidade de dependentes: \n");
  scanf("%d", &fun->dependentes);
}

void calcularValeTransporte(funcionario fun){
 
  if(fun->vale == 1) {
    
  }else {

  }
}

void calcularPlano()
{

}

void calcularFgts() {

}

void calcularInss() {

}

void calcularSalarioFamilia() {

}

void calcularIR() {

}

void calcularSalarioLiquido() {

}


void adicionarUsuario()
{
  
}
