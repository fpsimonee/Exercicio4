/*
Especificação das Funções para leitura e manipulação de arquivo

*/
#include "stdafx.h"
#include "Arquivo.h"

void le_arquivo(FILE *fPtr, char noticia[80]){


	if ((fPtr = fopen("noticia.txt", "r")) == NULL){
		printf("O arquivo nao pode ser aberto.\n");
	}
	else{
			while (!feof(fPtr)){
			//fscanf(fPtr, "%s", noticia);
		    fgets(noticia, 80, fPtr);			
			printf("%s", noticia);
			}
        }
	fclose(fPtr);
}



void cria_binario(FILE *fPtr, char noticia[80]){
	FILE *fPtr2 = NULL;

	if ((fPtr = fopen("noticia.txt", "r")) == NULL){
		printf("O arquivo nao pode ser aberto.\n");
	}

	if ((fPtr2 = fopen("noticia.bin", "wb+")) == NULL){
		printf("O arquivo binario pode ser aberto.\n");
	}
	else{
		while (!feof(fPtr)){
			fgets(noticia, 80, fPtr);
			fputs(noticia,fPtr2);
		}
	}
	fclose(fPtr);
	fclose(fPtr2);
}

void inverte_arquivo(FILE *fPtr, char noticia[80]){
	FILE *fPtr2 = NULL;
	if ((fPtr = fopen("noticiaInvertida.txt", "wb+")) == NULL){
		printf("O arquivo nao pode ser aberto.\n");
	}
	if ((fPtr2 = fopen("noticia.bin", "r")) == NULL){
		printf("O arquivo nao pode ser aberto.\n");
	}
	else{
		while (!feof(fPtr2)){
			fseek(fPtr2,80, SEEK_END);
			fPtr2 -= sizeof(noticia);
			fputs(noticia,fPtr);
		}
	}


	fclose(fPtr);
}


