/*---------------------------------------------------------------------------------------------------------------------------------------------------------------
	T�tulo: Exerc�cios sobre manipula��o de arquivos (abertura, leitura, escrita e fechamento)

	Autor: Edgar Hideo Tamasiro
	Data: fevereiro de 2022
	Vers�o: 1.0
	
---------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

/* Constantes */
/*const*/
/*#define*/

/* Macros */
/*#define*/

/* Declara��o de vari�veis globais */

/* Prot�tipo das fun��es secund�rias */


/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* In�cio da fun��o principal */
main(int argc, char *argv[])
{
	FILE *arqMsg, *arqCrp, *arqDcrp;
	int caractere = 0;

	/* abre o arquivo que cont�m a mensagem original */
	arqMsg = fopen("mensagem.txt", "r");
	
	/* teste se o arq foi aberto com sucesso */
	if (arqMsg == NULL)
		{
			printf("ERROR_READ\n");
			system("PAUSE");
			exit(1);
		}

	/* abre o arquivo que conter� a mensagem criptografada */
	arqCrp = fopen("cripto.txt", "w");
	
	/* teste se o arq foi aberto com sucesso */
	if (arqCrp == NULL)
		{
			printf("ERROR_APPEND\n");
			system("PAUSE");
			exit(2);
		}

	/* abre o arquivo que conter� a mensagem criptografada */
	arqDcrp = fopen("decripto.txt", "w");
	
	/* teste se o arq foi aberto com sucesso */
	if (arqDcrp == NULL)
		{
			printf("ERROR_APPEND\n");
			system("PAUSE");
			exit(2);
		}

	/* fgetc -> l� um caractere no arquivo, retorna um inteiro */		
	/* executa fgetc at� que a constante EOF seja detectada */
	/* (r)mensagem.txt -> (w)cripto.txt */
	while ( (caractere = fgetc(arqMsg)) != EOF )
		fprintf(arqCrp, "%c", caractere + 3);
	putchar('\n');

	/* fecha o arquivo da msg original, a partir deste ponto n�o ser� mais necess�rio */
	fclose(arqMsg);
	caractere = 0;

	/* fecha o arquivo da msg criptografada para escrita e abre para leitura */	
	fclose(arqCrp);
	arqCrp = fopen("cripto.txt", "r");
		if (arqCrp == NULL)
		{
			printf("ERROR_APPEND\n");
			system("PAUSE");
			exit(2);
		}
	
	/* fgetc -> l� um caractere no arquivo, retorna um inteiro */		
	/* executa fgetc at� que a constante EOF seja detectada */
	/* (r)cripto.txt -> (w)decripto.txt */
	while ( (caractere = fgetc(arqCrp)) != EOF )
		fprintf(arqDcrp, "%c", caractere - 3);
	putchar('\n');
	
	/* fecha os arquivos */
	fclose(arqCrp);
	fclose(arqDcrp);
	caractere = 0;
	
	printf("Operacao realizada com sucesso\n\n");
	system("PAUSE");					/*pausa execu��o*/
	return 0;						/*retorna 0, se main() for executada*/
	
}
/* Fim da fun��o principal */

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* Desenvolvimento das fun��es secund�rias */

/* --- Fun��o para... --- */


/*-------------------------------------------------------------------------------

                                                              
                                       _                      
                                      / \                     
                                     |oo >                    
                                     _\=/_                    
                    ___         #   /  _  \   #               
                   /<> \         \\//|/.\|\\//                
                 _|_____|_        \/  \_/  \/                 
                | | === | |          |\ /|                    
                |_|  0  |_|          \_ _/                    
                 ||  0  ||           | | |                    
                 ||__*__||           | | |                    
                |* \___/ *|          []|[]                    
                /=\ /=\ /=\          | | |                    
________________[_]_[_]_[_]_________/_]_[_\_______________________________
                                                              
MAY THE FORCE BE WITH YOU! :)
-------------------------------------------------------------------------------*/
/* Final do projeto */

/* Rascunho */

	/*fflush(stdin);*/		/* esta fun��o limpa a buffer do teclado, semelhante ao 'espa�o antes do %c' */
	/*scanf(" %c", &opcao);*/
	/*getchar();*/			/* esta fun��o capta um caractere do teclado, semelhante ao scanf' */

	/*printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	printf("\n");*/

