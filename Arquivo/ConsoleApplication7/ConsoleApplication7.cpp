// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Arquivo.h"


int _tmain(int argc, _TCHAR* argv[])
{
	FILE *fPtr=NULL;
	char noticia[80];
	
	
	
	le_arquivo(fPtr, noticia);
	cria_binario(fPtr, noticia);
	inverte_arquivo(fPtr, noticia);
	getchar();
	return 0;
}

