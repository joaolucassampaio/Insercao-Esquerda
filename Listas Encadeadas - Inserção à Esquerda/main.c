#include <stdio.h>
#include <stdlib.h>

// Lista Simplesmente Encadeada - Inserção no início

// Elemento da lista
struct node {
	int info;
	struct node *next;
};

int main(int argc, char *argv[]) {
	// Ponteiros auxiliares
	struct node *lista, *p;
	lista = NULL;
	int choice;
	
	do {
		p = malloc(sizeof(struct node));
		printf("Qual informacao voce gostaria de adiciona a esquerda? ");
		scanf("%i", &p->info);
		p->next = lista;
		lista = p;
		
		printf("Voce deseja adicionar uma outra informacao? 0-nao, 1-sim");
		scanf("%i", &choice);
	} while (choice != 0);
	
	printf("\n\n\n");
	p = lista;
	while (p != NULL) {
		printf("%i ", p->info);
		p = p->next;
	};

	return 0;
}
