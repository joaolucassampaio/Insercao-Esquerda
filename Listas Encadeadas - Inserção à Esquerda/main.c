#include <stdio.h>
#include <stdlib.h>

// Lista Simplesmente Encadeada:
// Cada item da lista é chamado nó e contém dois campos, um campo de informação e outro do endereço seguinte.
// O campo de informação armazena o real elemento da lista.
// O campo de endereço seguinte contém o endereço do próximo nó na lista.

// Se uma lista precisa crescer e diminuir, é necessário um mecanismo para obter nós vazios a ser incluído na lista.
// Observe que, ao contrário de uma vetor, uma lista não vem com um conjunto pré-fornecido de locais de armazenamento nos quais podem
// ser colocados elementos.
// O próximo passo é inserir o inteiro 6 na parte info do nó recém-alocado. 
//Depois de definir a parte info de node(p), é necessário definir a parte
/*
next desse nó. Como node(p) será inserido no início da lista, o nó seguinte
deverá ser o primeiro nó atual na lista. Como a variável list contém o
endereço desse primeiro nó, node(p) poderá ser incluído na lista, efetuando
a operação:
next(p) = list;
Essa operação coloca o valor de list (que é o endereço do primeiro nó na lista) no
campo next de node(p).
*/

// O segredo da inserção à esquerda da lista simplesmente encadeada:
// 1. Criar um novo nó (elemento) através do malloc (pode ser colocado em uma função)
// 2. Fazer o campo info receber a informação desejada
// 3. Fazer o ponteiro next apontar para lista
// 4. Fazer a lista receber o ponteiro

// Um item é acessado numa lista ligada, percorrendo-se a lista a partir do início.

// Criação do Nó, que é um elemento da Lista
struct node {
	int info; // Criação do campo info, que armazena a informação do elemento
	struct node *next; // Criação do ponteiro, que aponta para o endereço do próximo elemento, garantindo o encadeanento da lista
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
