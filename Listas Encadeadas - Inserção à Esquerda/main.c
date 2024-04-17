#include <stdio.h>
#include <stdlib.h>

// Lista Simplesmente Encadeada:
// Cada item da lista � chamado n� e cont�m dois campos, um campo de informa��o e outro do endere�o seguinte.
// O campo de informa��o armazena o real elemento da lista.
// O campo de endere�o seguinte cont�m o endere�o do pr�ximo n� na lista.

// Se uma lista precisa crescer e diminuir, � necess�rio um mecanismo para obter n�s vazios a ser inclu�do na lista.
// Observe que, ao contr�rio de uma vetor, uma lista n�o vem com um conjunto pr�-fornecido de locais de armazenamento nos quais podem
// ser colocados elementos.
// O pr�ximo passo � inserir o inteiro 6 na parte info do n� rec�m-alocado. 
//Depois de definir a parte info de node(p), � necess�rio definir a parte
/*
next desse n�. Como node(p) ser� inserido no in�cio da lista, o n� seguinte
dever� ser o primeiro n� atual na lista. Como a vari�vel list cont�m o
endere�o desse primeiro n�, node(p) poder� ser inclu�do na lista, efetuando
a opera��o:
next(p) = list;
Essa opera��o coloca o valor de list (que � o endere�o do primeiro n� na lista) no
campo next de node(p).
*/

// O segredo da inser��o � esquerda da lista simplesmente encadeada:
// 1. Criar um novo n� (elemento) atrav�s do malloc (pode ser colocado em uma fun��o)
// 2. Fazer o campo info receber a informa��o desejada
// 3. Fazer o ponteiro next apontar para lista
// 4. Fazer a lista receber o ponteiro

// Um item � acessado numa lista ligada, percorrendo-se a lista a partir do in�cio.

// Cria��o do N�, que � um elemento da Lista
struct node {
	int info; // Cria��o do campo info, que armazena a informa��o do elemento
	struct node *next; // Cria��o do ponteiro, que aponta para o endere�o do pr�ximo elemento, garantindo o encadeanento da lista
};

int main(int argc, char *argv[]) {
	struct node *lista, *p;
	int response;
	lista = NULL;
	
	do {
		p = malloc(sizeof(struct node));
		// p->info = 50;
		printf("Qual informacao deseja adicionar a lista?");
		scanf("%i", &p->info);
		p->next = lista;
		lista = p;
		
		printf("Deseja inserir um novo no? 0- nao, 1-sim");
		scanf("%i", &response);
	} while(response != 0);
	return 0;
}
