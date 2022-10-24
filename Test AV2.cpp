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
    printf("1 - Clinica Geral - 2 Dr�. Liandra Cerqueira\n");
    printf("1 - Clinica Geral - 3 Dr. Magno Florencio\n");
}
void specialistMedicos2 () {
    printf("2 - Cardiologia - 1 Dr. Pedro Paulo Souza\n");
    printf("2 - Cardiologia - 2 Dr. Victor Almeida\n");
    printf("2 - Cardiologia - 3 Dr. Robert de Jesus\n");
}
void specialistMedicos3 () {
    printf("3 - Oftalmologia - 1 Dr�. Flavia Perelberg\n");
    printf("3 - Oftalmologia - 2 Dr. Matheus Costa\n");
    printf("3 - Oftalmologia - 3 Dr. Daniel da Cruz\n");
}
void specialistMedicos4 () {
    printf("4 - Pediatria - 1 Dr�. Alderiza Costa\n");
    printf("4 - Pediatria - 2 Dr�. Lis Alphontes\n");
    printf("4 - Pediatria - 3 Dr. Luiz Dahora\n");
}
void specialistMedicos5 () {
    printf("5 - Ortopedia e Traumatologia - 1 Dr. Huberto Celestim\n");
    printf("5 - Ortopedia e Traumatologia - 2 Dr�. Amanda Almeida\n");
    printf("5 - Ortopedia e Traumatologia - 3 Dr. Hildebrando Caetano\n");
}
void specialistMedicos6 () {
    printf("6 - Neurologia e Psiquiatria - 1 Dr�. Talita Rocha\n");
    printf("6 - Neurologia e Psiquiatria - 2 Dr. Amorim\n");
    printf("6 - Neurologia e Psiquiatria - 3 Dr. Joaquim\n");
}
void specialistMedicos7 () {
    printf("7 - Ginecologia e Obstetricia - 1 Dr. Celso Rodrigues\n");
    printf("7 - Ginelocogia e Obstetricia - 2 Dr�. Lorena Viega\n");
    printf("7 - Ginecologia e Obstetricia - 3 Dr�. Patricia Lima\n");
}
//tentativa de implementa��o de banco de dados simples em C

main(){
setlocale(LC_ALL,"");

int numspecilist, nummedico;
    printf("Ol�, Bem Vindo ao nosso prototipo de APP\n");
    
    specialist();
    printf("Escolha o numero da op��o de sua especialidade: ");
    numspecilist = getche();

	return 0;
}
