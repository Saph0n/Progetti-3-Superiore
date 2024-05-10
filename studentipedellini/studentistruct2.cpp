#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream> 

//EEEE     A     RRRR  L     Y   Y         A     CCCCCC CCCCCC EEEEE SSSSSSS
//E       A A    R   R L      Y Y         A A    CC     CC     E     SS
//EEEE   A   A   RRRR  L       Y         A   A   C      C      EEEEE   SS
//E     AAAAAAA  R  R  L       Y        AAAAAAA  CC     CC     E        SS
//EEEE A       A R   R LLLLL   Y       A       A CCCCCC CCCCCC EEEEE SSSSSSS

#define maxDim 50
using namespace std;

//----------------------------DICHIARAZIONE STRUCT------------------------------//
struct data{
	
	int giorno;
	int mese;
	int anno;
	
};

struct indirizzo{
	
	string via;
	int numero;
};


struct studente
{
	
	string codiceFiscale;
	string nome;
	string cognome;
	string  numTel ;
	data dataNascita ;// Struct nella struct!
	indirizzo   ind;	// Struct nella struct!
	int voti[5]; //array nella Struct
	
};

//------------------------------PROTOTIPI FUNZIONI------------------------------//
int menu();
int  caricaDaFile(studente []);
void  salvaSuFile(studente [],int );
int  inserimento(studente [],int );
void visualizzaTutto(studente [],int );
void visualizzaStudente(studente [],int );//modificare inserendo size
int cercaStud(studente [],int, string, string ); //restituisce, se esiste, la  posizione dello studente cercato per cognome e nome
void cercaStudente(studente [],int); //restituisce, se esiste,i dati dello studente cercato per cognome e nome
void ordina(studente [],int); 
void cerca(studente[],int);
//-------------------------------------MAIN--------------------------------------//
int main()
{ 
	
	studente  studenti[maxDim];	//dichiarazione di un array di studenti
	int size=0, scelta=0;
	
	size=caricaDaFile(studenti);
	
	do
	{
		
		scelta =menu();
	
		
			switch(scelta)
			{
				case 1:
					size=inserimento(studenti,size);
					
					break;
				
				case 2:
					cercaStudente(studenti,size);
					
					break;
				
				case 3:
					visualizzaTutto(studenti,size);
				
					break;
				
				case 4:
					visualizzaStudente(studenti,size);
				
					break;
			
				case 5:
					ordina(studenti,size);
				
					break;
				
				case 6:
					ordina(studenti,size);
					cerca(studenti,size);
				
					break;
				
				case 0:
					cout<< endl<<endl<<"Grazie per aver utilizzato il nostro programma, arrivederci!!"<<endl;
					salvaSuFile(studenti,size);
					break;	
				default:
					{
					cout<<"Errore di digitazione.scelte  possibili da 0 a 3!"<<endl<<"Riprovare"<<endl;
					break;
					}			
			}
	}while(scelta!=0);
 	
 	
 	system("color A4");
	printf("\n 	                          														 ");
	printf("\n                            														 ");		
	printf("\n                          														 ");
	printf("\n PPPPPPPPPPP        AAA           BBBBBBBB     LL         OOOOOOOOOOOO");
	printf("\n PPPPPPPPPPPP      AAAAA          BBBBBBBBBB   LL         OOOOOOOOOOOO");
	printf("\n PPP       PP     AA   AA         BB      BB   LL         OO        OO");		
	printf("\n PPPPPPPPPPPP    AA     AA        BB      BB   LL         OO        OO");
	printf("\n PPPPPPPPPPP    AA       AA       BBBBBBBB     LL         OO        OO");
	printf("\n PPP           AAAAAAAAAAAAA      BB      BB   LL         OO        OO");
	printf("\n PPP          AAAAAAAAAAAAAAA     BB      BB   LL         OO        OO");
	printf("\n PPP         AA             AA    BBBBBBBBBB   LLLLLLLLL  OOOOOOOOOOOO");
	printf("\n PPP        AA               AA   BBBBBBBB     LLLLLLLLL  OOOOOOOOOOOO");
	printf("\n 	                          														 ");
	printf("\n 	                          														 ");
	printf("\n 	                          														 ");
	system("PAUSE");
 	
 	
 	return 0;		
}
////////////***************SOTTOPROGRAMMI*******************//////////////////////////////////////
int menu()
{
	
	int scelt;
	cout<<endl<<"*************MENU'****************"<<endl;
	cout<<"1. Inserimento nuovo Studente"<<endl;
	cout<<"2. Ricerca studente per codice fiscale"<<endl;
	cout<<"3. Visualizza tutti gli studenti in elenco"<<endl;
	cout<<"4. Visualizza lo studente in posizione"<<endl;
	cout<<"5. Ordina studenti per cognome"<<endl;
	cout<<"6. Ricerca per cognome con ricerca binaria"<<endl;
	
	cout<<"0. Esci"<<endl;
	cout<<"Scelta : ";
	cin>>scelt;
	return scelt;
}
int  caricaDaFile(studente a[])
{
	int size;
	ifstream in("Stud.txt");
	if (!in) {
		cout<<"ATTENZIONE File non ancora creato TABELLA VUOTA!"<<endl;
		
		}
	else {
		in>>size;
		for(int i=0;i<size;i++)
			{	
			in>>a[i].codiceFiscale;	
			in>>a[i].nome;		
			in>>a[i].cognome;						
			in>>a[i].dataNascita.giorno;
			in>>a[i].dataNascita.mese;
			in>>a[i].dataNascita.anno;		
			in>>a[i].numTel;
			in>>a[i].ind.via;
			in>>a[i].ind.numero;
			for (int j=0; j<5;j++)
				in>>a[i].voti[j];
			}
		}

	return size;
}


void  salvaSuFile(studente a[],int size)
{
	ofstream out("Stud.txt");
	out<<size<<endl;
	
	for(int i=0;i<size;i++)
	{	
		out<<a[i].codiceFiscale<<endl;	
		out<<a[i].nome<<endl;		
		out<<a[i].cognome<<endl;
		out<<a[i].dataNascita.giorno<<endl;
		out<<a[i].dataNascita.mese<<endl;
		out<<a[i].dataNascita.anno<<endl;		
		out<<a[i].numTel<<endl;
		out<<a[i].ind.via<<endl;
		out<<a[i].ind.numero<<endl;
		for (int j=0; j<5;j++)
				out<<a[i].voti[j]<<endl;
									
	}

}
//* dopo aver controllato se l'array è già pieno o se lo studente è già stato inserito, inserisce un nuovo studente nell'array*//

int inserimento(studente a[], int size) {
//FINITO
	int i;
	do{
	
		cout<<"Inserisci il codice fiscale";
		cin>>a[size].codiceFiscale;
	
		for(i=0;i<size;i++){
			
			if(a[i].codiceFiscale==a[size].codiceFiscale)	
			i=1717;
			
		}
		
	}while(i==1717);
	
	cout<<"Inserisci il nome";
	cin>>a[size].nome;
	cout<<"Inserisci il cognome";
	cin>>a[size].cognome;
	
	do{
	cout<<"Inserisci il numero di telefono";
	cin>>a[size].numTel;
	for(i=0;i<size;i++){
			
		if(a[i].numTel==a[size].numTel)	
			
			i=1717;
			
		}
		
	}while(i==1717);
	
	cout<<"Inserisci il giorno di nascita";
	cin>>a[size].dataNascita.giorno;
	cout<<"Inserisci il mese di nascita";
	cin>>a[size].dataNascita.mese;
	cout<<"Inserisci il anno di nascita";
	cin>>a[size].dataNascita.anno;
	cout<<"Inserisci la via";
	cin>>a[size].ind.via;
	cout<<"Inserisci il numero civico";
	cin>>a[size].ind.numero;
	cout<<"Inserisci 5 voti: ";
	
	for(int i=0;i<5;i++){
	
		cout<<"Voto "<<i+1<<": ";
		cin>>a[size].voti[i];	
	}
	

	size++;
		
	return size;
}
////////////////VISUALIZZAZIONE////////////////////////////////////

void visualizzaTutto(studente a[],int size) //visualizza il contenuto di tutto l'array
{
	if(size==0)
	{	
		cout<<"Nessuno studente presente in elenco "<<endl;
	}else
	{
		for(int i=0;i<size;i++)
		{
		cout<<"Nome           : "<<a[i].nome<<endl;
		cout<<"Cognome        : "<<a[i].cognome<<endl;
		cout<<"Codice Fiscale : "<<a[i].codiceFiscale<<endl;
		cout<<"Numero telefono: "<<a[i].numTel<<endl;
		cout<<"Data di nascita : "<<a[i].dataNascita.giorno<<"/"<<a[i].dataNascita.mese<<"/"<<a[i].dataNascita.anno<<endl;			
		cout<<"Indirizzo : via "<<a[i].ind.via<<" num."<<a[i].ind.numero<<endl;
		cout<<"voti :";
		for (int j=0; j<5;j++){
				cout<<"\t"<<a[i].voti[j];	
			}
		cout<<endl<<"**********************************************"<<endl;
		}
	}
}
void visualizzaStudente(studente a[],int i) //visualizza lo studente che si trova in posizione "i" DA MODIFICARE
{
		int j;
		cout<<"Inserisci la posizione del alunno: ";
		cin>>i;
		i--;
		cout<<"Nome           : "<<a[i].nome<<endl;
		cout<<"Cognome        : "<<a[i].cognome<<endl;
		cout<<"Codice Fiscale : "<<a[i].codiceFiscale<<endl;
		cout<<"Numero telefono: "<<a[i].numTel<<endl;
		cout<<"Data di nascita : "<<a[i].dataNascita.giorno<<"/"<<a[i].dataNascita.mese<<"/"<<a[i].dataNascita.anno<<endl;			
		cout<<"Indirizzo : via "<<a[i].ind.via<<" num."<<a[i].ind.numero<<endl;
		cout<<"voti :";
		for (int j=0; j<5;j++){
				cout<<"\t"<<a[i].voti[j];	
			}
		cout<<endl;
	
}




//Se nell'elenco c'è SOLO UNO studente con quel nome e cognome:

//restituisce la posizione dello studente cercato per nome e cognome
int cercaStud(studente a[],int size, string cogn, string nom)
{
	
		for(int i=0;i<size;i++)
		{
 	 		if(cogn==a[i].cognome && nom==a[i].nome )
			return i;// appena trovo lo studente restituisco l'indice in cui si trova
		}
	
	return -1; //se non lo trovo restituisco -1
}

//visulizza i dati di uno studente cercato per nome e cognome
void cercaStudente(studente a[],int size){
	
	string cf;
	int app=17;
	cout<<"Inserisci il codice fiscale: ";
	cin>>cf;
	
	for(int i=0;i<size;i++){
		
		if(a[i].codiceFiscale==cf){
			
			app=i;	
			
		}
		
		
	}
	
	int j;
		cout<<"Nome           : "<<a[app].nome<<endl;
		cout<<"Cognome        : "<<a[app].cognome<<endl;
		cout<<"Numero telefono: "<<a[app].numTel<<endl;
		cout<<"Data di nascita : "<<a[app].dataNascita.giorno<<"/"<<a[app].dataNascita.mese<<"/"<<a[app].dataNascita.anno<<endl;			
		cout<<"Indirizzo : via "<<a[app].ind.via<<" num."<<a[app].ind.numero<<endl;
		cout<<"voti :";
		for (int j=0; j<5;j++){
				cout<<"\t"<<a[app].voti[j];	
			}
	
	
}

void ordina(studente a[],int size){
	
	
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(a[i].cognome > a[j].cognome)
			{
				studente appoggio;
				
				appoggio = a[i];
				
				a[i] = a[j];
				
				a[j] = appoggio;	
			}			
		}	
	}

}

void cerca(studente a[],int size){
	 
	 
	 
	string app;
    int i = 0, j = size-1, m, pos = -1;
    
    cout<<"Inserisci il cognome da cercare: ";
    cin>>app;
    
    do { 
	m=(i + j)/2;
	if(a[m].cognome==app)  
		pos = m;
	else if (a[m].cognome < app)
		i = m + 1;
	else
		j = m - 1;
    } while(i <= j && pos == -1);	

    if(pos != -1){
    	
    	cout<<"Nome           : "<<a[pos].nome<<endl;
		cout<<"Cognome        : "<<a[pos].cognome<<endl;
		cout<<"Codice Fiscale : "<<a[pos].codiceFiscale<<endl;
		cout<<"Numero telefono: "<<a[pos].numTel<<endl;
		cout<<"Data di nascita : "<<a[pos].dataNascita.giorno<<"/"<<a[i].dataNascita.mese<<"/"<<a[i].dataNascita.anno<<endl;			
		cout<<"Indirizzo : via "<<a[pos].ind.via<<" num."<<a[i].ind.numero<<endl;
		cout<<"voti :";
		for (int j=0; j<5;j++){
				cout<<"\t"<<a[pos].voti[j];	
			}
		cout<<endl<<"**********************************************"<<endl;
    	
	}
	
    else 
	cout<<"numero non trovato";
	
	
	
	
}

