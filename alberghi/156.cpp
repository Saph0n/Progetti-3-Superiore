#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXALB 100
#define MAXSERV 200


/* *******************************************************************
 * Gestione Alberghi con Struct e file                               *
 * *******************************************************************/
 
struct albergo{
	 char nome[20];
	 int numStelle;
	 char numTel[20];
	 int cod; //il codice viene assegnato come numero d'ordine nell'inserimento
	};
	
struct servizio{
	 char nomeS[20];	
	 char descrS[20];
	 int cod;
	};

/*void caricaDatiDaFile();
void salvaDatiSuFile();*/
void visualizzaTutto(albergo [],int,servizio[],int);
void visualizzaPerNome(albergo [],int,servizio[],int);
void aggiungiAlberghiServizi(albergo [],int*,servizio[],int*);
void aggiungiServizio(servizio[],int*); //dato il nome di un albergo permette di aggiungere un servizio
void cercaServiziPerNomeAlbergo(.............)//dato il nome di un albergo stampa tutti i suoi servizi
void ...........................................


int main(){
	
/*dichiaro due tabelle una di dimensione "MAXALB" che conterrà i dati di tutti gli alberghi
* l'altra di dimensione "MAXSERV" che conterrà tutti i servizi di tutti gli alberghi  */
	
	albergo alberghi[MAXALB]; 
	servizio servizi[MAXSERV];
	
	
	int k;
	int NA=0; //numero reale di alberghi presenti nella tabella alberghi;
	int NS=0; //numero reale di servizi presenti nella tabella servizi;
//	caricaDatiDaFile();//carico i dati dal file
	
	
//	visualizza ();//visualizzo i dati caricati da FILE
	 do
	{
	printf ("\nInserisci 1 per aggiungere albergo:\n");
	printf ("Inserisci 2 per la visualizzazione di tutti gli alberghi:\n");
	printf ("Inserisci 3 per  visualizzare tutti i servizi di un determinato albergo cercato per nome:\n");
 
//	printf ("Inserisci 4 per elenco alberghi con numero stelle richiesto:\n");
//	printf ("Inserisci 5 per elenco alberghi con servizio richiesto:\n");
//	printf ("Inserisci 6 per aggiungere un servizio ad un albergo:\n");
	
	printf ("Inserisci 0 per terminare:\n");
	printf ("Inserisci la tua scelta :");
	scanf ("%d",&k);
	switch (k)
	{
		case 1:
		{
			aggiungiAlberghi(alberghi,&NA,servizi, &NS );
		
		break;
		}
		case 2:
		{
			visualizzaTutto (alberghi,NA,servizi,NS); //visualizzo tutte le informazioni
		break;
		}
		case 3:
		{
//			visualizzaPerNome(alberghi,NA,servizi,NS);
		break;
		}
		case 4:
		{
	
		break;
		}
	
		
		case 0:
		{
	//	salvaDatiSuFile();
		break;
		}
                    default :
		printf ("Scelte consentite 1,2,3,4,5,6 o 0 :\n");
	}
  
	} while(k!=0 ); 
  



	return 0;
	
}


/*void caricaDatiDaFile(){
	
	FILE *fr; //dichiaro una variabile di tipo "puntatore a FILE"
//apro il file datiAlberghi.txt in lettura e gli associo il nome simbolico fr   
	fr=fopen("datiAlberghi.txt", "r");

	
 
//leggo i valori con cui riempire i miei array dal file datiAlberghi.txt (fr)
	
	fclose(fr);//chiudo il file di caricamento
//	return N;

	
}*/
void aggiungiAlberghi(albergo alberghi [],int* NA, servizio servizi[],int* NS){
	
	//da completare
}
void visualizzaTutto(albergo  alberghi[], int NA,servizio servizi[], int NS){
	
	// da completare
}
void visualizzaPerNome(albergo  alberghi[], int NA,servizio servizi[], int NS){
	
	int app, trovato=0;
	char nomeApp[20];
	printf("\nInserire nome  albergo da cercare:");
	scanf("%s",nomeApp); 
	
	printf("\n\n ******* ALBERGHI TROVATI*************\n ");
	for (int i=0; i<NA;i++){
		
		if (strcmp(nomeApp,alberghi[i].nome)==0){
		       printf("\nnome:%s",alberghi[i].nome); 
		       printf("  numero stelle:%d",alberghi[i].numStelle);
	                 printf("  numero telefono:%s ",alberghi[i].numTel);
		       app= alberghi[i].cod;
		      
			for(int j=0;j<NS; j++){
				
				if ( servizi[j].cod == app){
					printf("\n servizio : %s",servizi[j].nomeS);
		            printf(" descrizione: %s\n",servizi[j].descrS);
		        }
		        
			}
			
	                 trovato=1;
		}
	}
	if (trovato==0)
		printf("\nATTENZIONE non esistono alberghi con il nome specificato  ");
}
/*void salvaDatiSuFile(){
	
	FILE *fw; //dichiaro una variabile di tipo "puntatore a FILE"
 Riapro il file datiAlberghi.txt in scrittura e gli associo il nome simbolico fw 
 * utilizzo lo stesso file in modo che le successive chiamate del programma 
 * ritrovino i dati inseriti nelle elaborazioni precedenti  
//	fw=fopen("datiAlberghi.txt", "w");


 
//copio i valori dai miei array nel file fw 
	
	fclose(fw);//chiudo il file di salvataggio
	

	
}*/

AlberghiDaCompletare.cpp
Visualizzazione di AlberghiDaCompletare.cpp.
