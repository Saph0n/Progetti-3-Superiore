/*
 * Operazioni standard sui vettori Con utilizzo di SOTTOPROGRAMMI
 * I vettori sono passati ai sottoprogrammi SEMPRE e SOLO per INDIRIZZO.
 * Il NOME stesso del vettore in realtà è l'INDIRIZZO del primo elemento
 * 
*/              
#include <stdio.h>
#define maxdim 100 //dimensione massima del vettore

void caricaVettore(int [],int ); /*al sottoprogramma caricaVettore si
 passerà un vettore di interi e la sua reale lunghezza */
void visualizzaVettore (int [],int) ;/*al sottoprogramma visualizzaVettore si
 passerà un vettore e la sua reale lunghezza*/

   

int main()
{
  int A[maxdim];/*dichiarazione vettore.La dimensione DEVE essere espressa
  // da una COSTANTE, di questa dimensione massima ne verrà utilizzata poi
  // solo la parte N */
  int N;
  
  do
  {
  printf ("Inserisci la dimensione del vettore minore o uguale a %d : ",maxdim);
  scanf ("%d",&N);
  
  }while (N>maxdim || N<=0);

  caricaVettore(A,N); /*al sottoprogramma caricaVettore si
 passerà il nome (=l'indirizzo) del primo elemento) e la lunghezza del vettore*/
     
  visualizzaVettore(A,N);/*al sottoprogramma visualizzaVettore si
 passerà il nome(=l'indirizzo del primo elemento) e la lunghezza del vettore*/
     
  
  return (0);
 // system("PAUSE");
}

//sottoprogramma che stampa a video il contenuto di un vettore
void visualizzaVettore (int V[],int n)
{
	int i;
	for (i=0;i<n;i++)
	  printf("%d ",V[i]);
}

//sottoprogramma che riempie un vettore 
void caricaVettore (int V[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
	  printf("\ninserisci l'elemento numero %d : ",i+1);
	  scanf ("%d",&V[i]);
	}
}
