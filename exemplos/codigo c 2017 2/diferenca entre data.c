#include<stdio.h>
int main(){
	int ano,mes,dia;
		int ano2,mes2,dia2;
	printf("digite a primeira data(menor)\n");
	printf("ano:");
	scanf("%d",&ano);
	printf("mes:");
	scanf("%d",&mes);
	printf("dia:");
	scanf("%d",&dia);

	printf("digite a primeira data(maior)\n");
	printf("ano:");
	scanf("%d",&ano2);
	printf("mes:");
	scanf("%d",&mes2);
	printf("dia:");
	scanf("%d",&dia2);

	printf("diferenca entre ano e: %d\n",ano2-ano);
	printf("diferenca entre mes e: %d\n",mes2-mes);
	printf("diferenca entre dia e: %d\n",dia2-dia);
	return 0;
}
