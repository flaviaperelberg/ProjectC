#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#define SIZE 200

char nome[SIZE] [50];
char nascimento[SIZE][10];
char email[SIZE] [50];
char cpf[SIZE][50];

int numspecialist, nummedico, unid, op, cpfInt[SIZE];


void cadastro(){
	static int linha;
	int opCadastro;
	do{
		fflush(stdin);
		printf("Nome: ");
		gets(nome[linha]);
		system("cls");
		fflush(stdin);
		printf("Ex.: 25 12 1984");
		printf("\nData de nascimento: ");
		gets(nascimento[linha]);
		system("cls");
		fflush(stdin);
		printf("Email: ");
		gets(email[linha]);
		system("cls");
		fflush(stdin);
		printf("Digite o cpf: ");
		gets(cpf[linha]);
		system("cls");
		cpfInt[linha] = 1;
		printf("Digite 1 para fazer um novo cadastro, ou outro valor para sair: ");
		scanf("%d", &opCadastro);
		linha++;
		system("cls");
	}while(opCadastro==1);
	
}
void pesquisa() {
	char cpfPesquisa[50];
	char emailPesquisa[50];
	int i;
	int opPesquisa;
	do{
		printf("Digite 1 para pesquisar por CPF ou 2 para pesquisar por email: ");
		scanf("%d", &opPesquisa);
		switch(opPesquisa) {
			case 1:
				printf("\nDigite o CPF: ");
				scanf("%s", &cpfPesquisa);
				for(i=0;i<SIZE;i++) {
					if(strcmp(cpf[i], cpfPesquisa)==0) {
						printf("\nNome: %s\nData de Nascimento: %s\nEmail: %s\nCPF: %s", nome[i], nascimento[i], email[i], cpf[i]);
						break;
					}
					if(i==199){
						i+=1;
						//printf("\n%d",i);
					}
					if(strcmp(cpf[i], cpfPesquisa)!=0 && i == SIZE){
						printf("Pessoa não encontrada !");
					}
				}
				break;
			case 2: 
				printf("\nDigite o E-mail: ");
				scanf("%s", emailPesquisa);
				for(i=0; i<SIZE; i++) {
					if(strcmp(email[i], emailPesquisa)==0) {
						printf("\nNome: %s\nData de Nascimento: %s\nEmail: %s\nCPF: %s", nome[i], nascimento[i], email[i], cpf[i]);
					}
					if(i==199){
						i+=1;
						//printf("\n%d",i);
					}
					else if(strcmp(email[i], emailPesquisa)!=0 && i == SIZE){
						printf("Pessoa não encontrada !");
					}
				}
				break;
			default:
				printf("\n Opção invalida");	
				break;
		}
		printf("\n\nDigite 1 para continuar pesquisando ou outro valor para sair: ");
		scanf("%d", &opPesquisa);
		system("cls");
	}while(opPesquisa==1);	
}


//tentativa de implementar um menu para especialidades
void specialist () {
    printf("1 - Clinico Geral\n");
    printf("2 - Cardiologista\n");
    printf("3 - Oftalmologista\n");
    printf("4 - Pediatra\n");
    printf("5 - Ortopedista e Traumatologia\n");
    printf("6 - Neurologista e Psiquiatra\n");
    printf("7 - Ginecologista e Obstetra\n");

	printf("Escolha o numero da opção de sua especialidade: ");
	scanf("%d", &numspecialist);
    system("cls");
}
void specialistMedicos1 () {
    printf("1 - Clinica Geral - 1 Dr. Huberto Castro\n");
    printf("1 - Clinica Geral - 2 Drª. Liandra Cerqueira\n");
    printf("1 - Clinica Geral - 3 Dr. Magno Florencio\n");
    
    printf("Escolha o numero da opção do médico de sua preferência: ");
	scanf("%d", &nummedico);
}
void specialistMedicos2 () {
    printf("2 - Cardiologia - 1 Dr. Pedro Paulo Souza\n");
    printf("2 - Cardiologia - 2 Dr. Victor Almeida\n");
    printf("2 - Cardiologia - 3 Dr. Robert de Jesus\n");
    
    printf("Escolha o numero da opção do médico de sua preferência: ");
	scanf("%d", &nummedico);
}
void specialistMedicos3 () {
    printf("3 - Oftalmologia - 1 Drª. Flavia Perelberg\n");
    printf("3 - Oftalmologia - 2 Dr. Matheus Costa\n");
    printf("3 - Oftalmologia - 3 Dr. Daniel da Cruz\n");
    
    printf("Escolha o numero da opção do médico de sua preferência: ");
	scanf("%d", &nummedico);
}
void specialistMedicos4 () {
    printf("4 - Pediatria - 1 Drª. Alderiza Costa\n");
    printf("4 - Pediatria - 2 Drª. Lis Alphontes\n");
    printf("4 - Pediatria - 3 Dr. Luiz Dahora\n");
    
    printf("Escolha o numero da opção do médico de sua preferência: ");
	scanf("%d", &nummedico);
}
void specialistMedicos5 () {
    printf("5 - Ortopedia e Traumatologia - 1 Dr. Huberto Celestim\n");
    printf("5 - Ortopedia e Traumatologia - 2 Drª. Amanda Almeida\n");
    printf("5 - Ortopedia e Traumatologia - 3 Dr. Hildebrando Caetano\n");
    
    printf("Escolha o numero da opção do médico de sua preferência: ");
	scanf("%d", &nummedico);
}
void specialistMedicos6 () {
    printf("6 - Neurologia e Psiquiatria - 1 Drª. Talita Rocha\n");
    printf("6 - Neurologia e Psiquiatria - 2 Dr. Amorim\n");
    printf("6 - Neurologia e Psiquiatria - 3 Dr. Joaquim\n");
    
    printf("Escolha o numero da opção do médico de sua preferência: ");
	scanf("%d", &nummedico);
}
void specialistMedicos7 () {
    printf("7 - Ginecologia e Obstetricia - 1 Dr. Celso Rodrigues\n");
    printf("7 - Ginelocogia e Obstetricia - 2 Drª. Lorena Viega\n");
    printf("7 - Ginecologia e Obstetricia - 3 Drª. Patricia Lima\n");
    
    printf("Escolha o numero da opção do médico de sua preferência: ");
	scanf("%d", &nummedico);
}
void unidades () {
	printf("1 - Unidade de Saúde da Familia Brotas\n");
	printf("2 - Unidade de Saúde da Familia Ribeira\n");
	printf("3 - Unidade de Saúde da Familia Boca do Rio\n");
	printf("4 - Unidade de Saúde da Familia Itapuã\n");
	printf("5 - Unidade de Saúde da Familia Itinga\n");
	printf("6 - Hospital da Mulher\n");
	printf("7 - Hospital Geral do Estado\n");
	printf("8 - Hospital Menandro de Farias\n");
	
	printf("Escolha a Unidade que você deseja ser atendido: ");
	scanf("%d", &unid);
	system("cls");
}

//tentativa de implementação de banco de dados simples em C

int main(void){
setlocale(LC_ALL,"");

    //printf("Olá, Bem Vindo ao nosso prototipo de APP\n");//estrutura de bem vindo, a se implementar.
    
    
    do{//estrutura de repetição para cadastro, existe um parametro de armazenamento implementado no código
		printf("\n-----SusUniruy-----\n1 - Cadastre-se\n2 - Consultar Cadastros\n3 - Sair\n\n");
		printf("\nCaso já tenha cadastro e deseje seguir com a marcação, digite 3");
		printf("\nDigite o valor da opção que deseja: ");
		scanf("%d", &op);
		system("cls");
		
		switch(op) {
			case 1:
				cadastro();
				system("cls");
				break;	
			case 2:
				pesquisa();
				break;
			case 3:
				system("exit");
				break;
			default:
				printf("Opcao invalida!!");
				getchar();
				getchar();
				break;
		}system("cls");
	}while(op!=3);
    system("cls");
    
    specialist();//chamando função das especialidades para apresentação das opções
    while(numspecialist>7 || numspecialist<1){//laço de repetição que força o usuario digitar um valor aceito
		printf("Opção Invalida! Tente novamente...\n");
		specialist();
	}
    
    switch(numspecialist){//condições em cadeia
    	case 1:
	    	specialistMedicos1 ();
		break;
		case 2:
	    	specialistMedicos2 ();
		break;
		case 3:
	    	specialistMedicos3 ();
	    break;
		case 4:
	    	specialistMedicos4 ();
	    break;
		case 5:
	    	specialistMedicos5 ();
	    break;
		case 6:
	    	specialistMedicos6 ();
	    break;
		case 7:
	    	specialistMedicos7 ();
		break;
		default:
			printf("Opção Inválida.\n");
			printf("Tente novamente!!");
		}
		system("cls");
	
unidades ();//chamando a função unidades para apresentar as opções	
while(unid>8 || unid<1){//laço de repetição para forçar o usuario digitar um valor validado
	printf("Opção Invalida! Tente novamente...\n");
	unidades();
}
	
}
