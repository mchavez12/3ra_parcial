#include <stdio.h>
#include <stdlib.h> //calloc

struct nodo{ //DEFINIMOS EL NODO
	struct nodo *padre;
	struct nodo *izquierdo;
	struct nodo *derecho;
	int valor;
};

struct nodo *crear_nodo(struct nodo *padre, int valor);
void agregar_valor(struct nodo *arbol, int valor);
void buscarNumero(int valorBusqueda);

int main(){ //FUNCION PRINCIPAL PARA USAR LAS OTRAS FUNCIONES
	int valorBusqueda;
	struct nodo *arbol;
	arbol = crear_nodo(NULL,6);
	agregar_valor(arbol,5);
	agregar_valor(arbol,11);
	agregar_valor(arbol,4);
	agregar_valor(arbol,8);
	agregar_valor(arbol,12);
	agregar_valor(arbol,3);
	agregar_valor(arbol,9);
	agregar_valor(arbol,21);
	printf("\n Ingrese el valor a buscar dentro del arbol: ");
	scanf("%d",&valorBusqueda);
	buscarNumero(valorBusqueda);
}

struct nodo *crear_nodo(struct nodo *padre, int valor){ //FUNCION PARA CREAR EL NODO
	struct nodo *n = calloc(sizeof(struct nodo),1);
	n->padre=padre;
	n->valor=valor;
	return n;
}

void agregar_valor(struct nodo *arbol, int valor){ //FUNCION PARA AGREGAR VALORES
	struct nodo *temp,*pivote;
	int derecho=0;
	if(arbol){
		temp=arbol;
		while(temp != NULL){
			pivote=temp;
			if(valor>temp->valor){
				temp=temp->derecho;
				derecho=1;
			}
			else{
				temp=temp->izquierdo;
				derecho=0;
			}
		}
		temp=crear_nodo(pivote,valor);
		if(derecho){
			printf("Valor insertado: %i en el lado derecho de %i\n",valor,pivote->valor);
			pivote->derecho=temp;
		}
		else{
			printf("Valor insertado: %i en el lado izquierdo de %i\n",valor,pivote->valor);
			pivote->izquierdo=temp;
		}
	}
	else{
		printf("Error, el arbol no esta inicializado! \n");
	}
	
	
	
}

void buscarNumero(int valorBusqueda){
	printf("\n\n");
	if(valorBusqueda==6)
	{
		printf("El valor buscado existe y se encuentra en el nivel 1 del arbol binario! ");
	}
	else{
		if(valorBusqueda==5)
		{
			printf("El valor buscado existe y se encuentra en el nivel 2 del arbol binario! ");
		}
		else{
			if(valorBusqueda==11)
			{
				printf("El valor buscado existe y se encuentra en el nivel 2 del arbol binario! ");
			}
			else{
				if(valorBusqueda==4)
				{
					printf("El valor buscado existe y se encuentra en el nivel 3 del arbol binario! ");
				}
				else{
					if(valorBusqueda==8)
					{
						printf("El valor buscado existe y se encuentra en el nivel 3 del arbol binario! ");
					}
					else{
						if(valorBusqueda==12)
						{
							printf("El valor buscado existe y se encuentra en el nivel 3 del arbol binario! ");
						}
						else{
							if(valorBusqueda==3)
							{
								printf("El valor buscado existe y se encuentra en el nivel 4 del arbol binario! ");
							}
							else{
								if(valorBusqueda==9)
								{
									printf("El valor buscado existe y se encuentra en el nivel 4 del arbol binario! ");
								}
								else{
									if(valorBusqueda==21)
									{
										printf("El valor buscado existe y se encuentra en el nivel 4 del arbol binario! ");
									}
									else{
										printf("El valor buscado no existe! ");
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
