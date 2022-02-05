/*---------------------------------------------------------------------------------------------------------------------------------------------------------------
	Título: Exercícios sobre manipulação de arquivos (abertura, leitura, escrita e fechamento)

	Autor: Edgar Hideo Tamasiro
	Data: fevereiro de 2022
	Versão: 1.0
	
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

/* Declaração de variáveis globais */

/* Protótipo das funções secundárias */


/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* Início da função principal */
main(int argc, char *argv[])
{
	FILE *arqMsg, *arqCrp, *arqDcrp;
	int caractere = 0;

	/* abre o arquivo que contém a mensagem original */
	arqMsg = fopen("mensagem.txt", "r");
	
	/* teste se o arq foi aberto com sucesso */
	if (arqMsg == NULL)
		{
			printf("ERROR_READ\n");
			system("PAUSE");
			exit(1);
		}

	/* abre o arquivo que conterá a mensagem criptografada */
	arqCrp = fopen("cripto.txt", "w");
	
	/* teste se o arq foi aberto com sucesso */
	if (arqCrp == NULL)
		{
			printf("ERROR_APPEND\n");
			system("PAUSE");
			exit(2);
		}

	/* abre o arquivo que conterá a mensagem criptografada */
	arqDcrp = fopen("decripto.txt", "w");
	
	/* teste se o arq foi aberto com sucesso */
	if (arqDcrp == NULL)
		{
			printf("ERROR_APPEND\n");
			system("PAUSE");
			exit(2);
		}

	/* fgetc -> lê um caractere no arquivo, retorna um inteiro */		
	/* executa fgetc até que a constante EOF seja detectada */
	/* (r)mensagem.txt -> (w)cripto.txt */
	while ( (caractere = fgetc(arqMsg)) != EOF )
		fprintf(arqCrp, "%c", caractere + 3);
	putchar('\n');

	/* fecha o arquivo da msg original, a partir deste ponto não será mais necessário */
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
	
	/* fgetc -> lê um caractere no arquivo, retorna um inteiro */		
	/* executa fgetc até que a constante EOF seja detectada */
	/* (r)cripto.txt -> (w)decripto.txt */
	while ( (caractere = fgetc(arqCrp)) != EOF )
		fprintf(arqDcrp, "%c", caractere - 3);
	putchar('\n');
	
	/* fecha os arquivos */
	fclose(arqCrp);
	fclose(arqDcrp);
	caractere = 0;
	
	printf("Operacao realizada com sucesso\n\n");
	system("PAUSE");					/*pausa execução*/
	return 0;						/*retorna 0, se main() for executada*/
	
}
/* Fim da função principal */

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* Desenvolvimento das funções secundárias */

/* --- Função para... --- */


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

	/*fflush(stdin);*/		/* esta função limpa a buffer do teclado, semelhante ao 'espaço antes do %c' */
	/*scanf(" %c", &opcao);*/
	/*getchar();*/			/* esta função capta um caractere do teclado, semelhante ao scanf' */

	/*printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	printf("\n");*/

