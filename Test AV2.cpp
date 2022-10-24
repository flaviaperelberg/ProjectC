#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

//tentativa de implementar um menu para especialidades
void specialist () {
    printf("1 - Clinica Geral");
    printf("2 - Cardiologia");
    printf("3 - Oftalmologia");
    printf("4 - Pediatria");
    printf("5 - Ortopedia e Traumatologia");
    printf("6 - Neurologia e Psiquiatria");
    printf("7 - Ginecologia e Obstetricia");
}
void specialistMedicos1 () {
    printf("1 - Clinica Geral - 1 Dr. Huberto Castro");
    printf("1 - Clinica Geral - 2 Drª. Liandra Cerqueira");
    printf("1 - Clinica Geral - 3 Dr. Magno Florencio");
}
void specialistMedicos2 () {
    printf("2 - Cardiologia - 1 Dr. Pedro Paulo Souza");
    printf("2 - Cardiologia - 2 Dr. Victor Almeida");
    printf("2 - Cardiologia - 3 Dr. Robert de Jesus");
}
void specialistMedicos3 () {
    printf("3 - Oftalmologia - 1 Drª. Flavia Perelberg");
    printf("3 - Oftalmologia - 2 Dr. Matheus Costa");
    printf("3 - Oftalmologia - 3 Dr. Daniel da Cruz");
}
void specialistMedicos4 () {
    printf("4 - Pediatria - 1 Drª. Alderiza Costa");
    printf("4 - Pediatria - 2 Drª. Lis Alphontes");
    printf("4 - Pediatria - 3 Dr. Luiz Dahora");
}
void specialistMedicos5 () {
    printf("5 - Ortopedia e Traumatologia - 1 Dr. Huberto Celestim");
    printf("5 - Ortopedia e Traumatologia - 2 Drª. Amanda Almeida");
    printf("5 - Ortopedia e Traumatologia - 3 Dr. Hildebrando Caetano");
}
void specialistMedicos6 () {
    printf("6 - Neurologia e Psiquiatria - 1 Drº. Talita Rocha");
    printf("6 - Neurologia e Psiquiatria - 2 Dr. Amorim");
    printf("6 - Neurologia e Psiquiatria - 3 Dr. Joaquim");
}
void specialistMedicos7 () {
    printf("7 - Ginecologia e Obstetricia - 1 Dr. Celso Rodrigues");
    printf("7 - Ginelocogia e Obstetricia - 2 Drª. Lorena Viega");
    printf("7 - Ginecologia e Obstetricia - 3 Drª. Patricia Lima");
}
//tentativa de implementação de banco de dados simples em C

main(){
setlocale(LC_ALL,"");

int numspecilist, nummedico;
    printf("Olá, Bem Vindo ao nosso prototipo de APP\n");
    
    
    printf("Escolha o numero da opção de sua especialidade: ");
    numspecilist = getche();

	return 0;
}
