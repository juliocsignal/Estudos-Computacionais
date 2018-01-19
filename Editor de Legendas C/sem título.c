#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *legenda;
	FILE *final;
	char numero[500];
	
	legenda = fopen("legenda.srt","r");
	final = fopen("final.srt","w");
	
	fgets(numero,500,legenda);
	fprintf(final,"%s",numero);
	
		
	return 0;
}

