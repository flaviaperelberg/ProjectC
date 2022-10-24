#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

//tentativa de implementar um menu para especialidades
void specialist () {
    printf("1 - Clinica Geral\n");
    printf("2 - Cardiologia\n");
    printf("3 - Oftalmologia\n");
    printf("4 - Pediatria\n");
    printf("5 - Ortopedia e Traumatologia\n");
    printf("6 - Neurologia e Psiquiatria\n");
    printf("7 - Ginecologia e Obstetricia\n");
}
void specialistMedicos1 () {
    printf("1 - Clinica Geral - 1 Dr. Huberto Castro\n");
    printf("1 - Clinica Geral - 2 Drï¿½. Liandra Cerqueira\n");
    printf("1 - Clinica Geral - 3 Dr. Magno Florencio\n");
}
void specialistMedicos2 () {
    printf("2 - Cardiologia - 1 Dr. Pedro Paulo Souza\n");
    printf("2 - Cardiologia - 2 Dr. Victor Almeida\n");
    printf("2 - Cardiologia - 3 Dr. Robert de Jesus\n");
}
void specialistMedicos3 () {
    printf("3 - Oftalmologia - 1 Drï¿½. Flavia Perelberg\n");
    printf("3 - Oftalmologia - 2 Dr. Matheus Costa\n");
    printf("3 - Oftalmologia - 3 Dr. Daniel da Cruz\n");
}
void specialistMedicos4 () {
    printf("4 - Pediatria - 1 Drï¿½. Alderiza Costa\n");
    printf("4 - Pediatria - 2 Drï¿½. Lis Alphontes\n");
    printf("4 - Pediatria - 3 Dr. Luiz Dahora\n");
}
void specialistMedicos5 () {
    printf("5 - Ortopedia e Traumatologia - 1 Dr. Huberto Celestim\n");
    printf("5 - Ortopedia e Traumatologia - 2 Drï¿½. Amanda Almeida\n");
    printf("5 - Ortopedia e Traumatologia - 3 Dr. Hildebrando Caetano\n");
}
void specialistMedicos6 () {
    printf("6 - Neurologia e Psiquiatria - 1 Drï¿½. Talita Rocha\n");
    printf("6 - Neurologia e Psiquiatria - 2 Dr. Amorim\n");
    printf("6 - Neurologia e Psiquiatria - 3 Dr. Joaquim\n");
}
void specialistMedicos7 () {
    printf("7 - Ginecologia e Obstetricia - 1 Dr. Celso Rodrigues\n");
    printf("7 - Ginelocogia e Obstetricia - 2 Drï¿½. Lorena Viega\n");
    printf("7 - Ginecologia e Obstetricia - 3 Drï¿½. Patricia Lima\n");
}
void unidades () {
	printf("1 - Unidade de Saúde da Familia Brotas\n");
	printf("2 - Unidade de Saúde da Familia Ribeira\n");
	printf("3 - Unidade de Saúde da Familia Boca do Rio\n");
	printf("4 - Unidade de Saúde da Familia Itapuã\n");
	printf("5 - Unidade de Saúde da Familia Itinga\n")
	printf("6 - Hospital da Mulher\n");
	printf("7 - Hospital Geral do Estado\n");
	printf("8 - Hospital Menandro de Farias\n");
}

//tentativa de implementação de banco de dados simples em C

main(){
setlocale(LC_ALL,"");

int numspecilist, nummedico;
    printf("Olá, Bem Vindo ao nosso prototipo de APP\n");
    
    specialist();
    printf("Escolha o numero da opção de sua especialidade: ");
    numspecilist = getche();

	return 0;
}
