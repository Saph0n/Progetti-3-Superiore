/***************************************************************************
  Completa il seguente codice per la gestione del garage di un autonoleggio.
  Ricorda di effettuare in ogni sottoprogramma i necessari controlli.
  Commenta il codice e fornisci informazioni chiare all'utente.
****************************************************************************/

#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
#define PARCOAUTO 100

struct data
{
	int giorno;
	int mese;
	int anno;
	
};

struct automobile
	{
		string targa;
		string marca;
		bool noleggiato; //true= noleggiata, false= disponibile
		int numPosti;//posti  di cui dispone l'auto
		data noleggio;
	};

// visualizza il menu
int menu();

// inserisce un nuovo veicolo nel garage
int inserisciAuto(automobile[],int);

// ordinamento delle auto per targa
void ordTarga(automobile[],int);

// ricerca di un'auto per targa attraverso la ricerca Binaria
void ricTarga(automobile[],int);

// ricerca tutte le auto di una particolare marca non noleggiate
void ricMarca(automobile[],int);

/* Il noleggio avviene per numero di posti richiesti
   (per esempio auto 5 posti, auto 7 posti ecc...)
   viene noleggiata la prima auto disponibile
   e impostata la data come inizio noleggio*/
void inizioNol(automobile[],int);

//imposta la data come fine noleggio e...
void fineNol(automobile[],int);

// visualizza tutti i dati delle auto del garage
void visualizzaTutto (automobile[],int);

void stampaFile(automobile[],int);
int leggiDaFile(automobile[]);

int main()
{
	automobile Cars[100];
	data data[100];
	int righe=0,scelta;

	righe=leggiDaFile(Cars);
	
	do
	{
		scelta=menu();
			switch(scelta)
			{
				case 1:
					righe=inserisciAuto(Cars,righe);
					
					break;
				
				case 2:
					ordTarga(Cars,righe);
					
					break;
				
				case 3:
					ricMarca(Cars,righe);
				
					break;
				
				case 4:

					inizioNol(Cars,righe);
				
					break;
			
				case 5:
					fineNol(Cars,righe);
				
					break;
				
				case 6:
					visualizzaTutto(Cars,righe);
					
					break;
				case 7:
					ricTarga(Cars,righe);
					
				
					break;
				
				case 0:
					cout<< endl<<endl<<"grazie per aver utilizzato il nostro programma, arrivederci!!"<<endl;
					stampaFile(Cars,righe);
					break;	
				default:
					{
					cout<<"Errore di digitazione scelte  possibili da 0 a 7!"<<endl<<"Riprovare"<<endl;
					break;
					}
			}
	}while(scelta!=0);

	return 0;
}// fine main

int menu(){
	// menu
		int sce;
		cout<<"Cosa vuoi fare?"<<endl;
		cout<<"Premi 1 inserisci un veicolo nel garage"<<endl;
		cout<<"Premi 2 ordina le auto per targa"<<endl;
		cout<<"Premi 3 ricerca tutte le auto di una marca non noleggiate "<<endl;
		cout<<"Premi 4 inizio noleggio"<<endl;
		cout<<"Premi 5 fine noleggio"<<endl;
		cout<<"Premi 6 visualizza tutti i dati delle auto del garage"<<endl;
		cout<<"Premi 7 ricercare un'auto per targa (ricerca Binaria)"<< endl;
		cout<<"Premi 0 per uscire"<<endl;
		cin>>sce;
		return sce;
}// fine menu


void  stampaFile(automobile C[], int size)
{
	//prima di uscire dal programma mi salvo tutto sul file di testo
	ofstream out("Garage.txt");
	out<<size<<endl;
	
	for(int i=0;i<size;i++)
	{	
		out<<C[i].targa<<endl;	
		out<<C[i].marca<<endl;		
		out<<C[i].noleggiato<<endl;						
		out<<C[i].numPosti<<endl;
		out<<C[i].noleggio.giorno<<endl;
		out<<C[i].noleggio.mese<<endl;
		out<<C[i].noleggio.anno<<endl;		
	}
	out.close();
	
}// fine stampaFile

int leggiDaFile(automobile C[])
{
	// leggo dal file tutto e lo salvo
	int size;
	ifstream in("Garage.txt");
	if (!in) {
		cout<<"ATTENZIONE File non ancora creato TABELLA VUOTA!"<<endl;
		
		}
	else {
		in>>size;
		for(int i=0;i<size;i++)
			{	
				
				in>>C[i].targa;	
				in>>C[i].marca;		
				in>>C[i].noleggiato;						
				in>>C[i].numPosti;
				in>>C[i].noleggio.giorno;
				in>>C[i].noleggio.mese;
				in>>C[i].noleggio.anno;

			}
		}
	
	in.close();
	return size;
}// fine leggiDaFile

//inserisce un nuovo veicolo nel garage
int  inserisciAuto(automobile C[],int size)
{
	//chiede informazioni su auto le salva
	int bol;
	cout << "Inserisci la targa della machina : ";
	cin >> C[size].targa;
	
	cout<<"Inserisci la marca della machina: ";
	cin>>C[size].marca;
	
	cout<<"Insersici il numero di posti della machina: ";
	cin>>C[size].numPosti;
	
	do{
	cout<<"Insersici 1 se la machina e' nolleggiata 0 se non lo e': ";
	cin>>bol;
	

	
		if(bol==1){
			
			C[size].noleggiato=true;
		}
			else if(bol==0){
				
				C[size].noleggiato=false;
			}
		
	}while(bol!=0&&bol!=1);
	
	
	cout<<endl;
	
	size++;
	
	return size;
}// fine inserisciAuto

// ordinamento delle auto per targa
void ordTarga(automobile C[],int size)
{
 //ordino tutto il garage per targa
	
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(C[i].targa > C[j].targa)
			{
				automobile appoggio;
				
				appoggio = C[i];
				
				C[i] = C[j];
				
				C[j] = appoggio;	
			}			
		}	
	}
	
	
	
}


// ricerca tutte le auto di una particolare marca non noleggiate
void ricMarca(automobile C[],int size)
{
	//cerco auto chiedendo solo la marca e stampo informazioni
 	string nome;
 	int i=0;
 	
 	cout<<"Inserisci il nome della marca del auto: ";
 	cin>>nome;
 	
 	for(i=0;i<size;i++){
 		
 		if(nome==C[i].marca){
 			
 			if(C[i].noleggiato==false){
 				
 				cout<<endl<<"Machina: "<<i+1<<endl;
 				
 				cout <<"Targa della machina: "<<C[i].targa<<endl;
				
				cout<<"Marca della machina: "<<C[i].marca<<endl;
				
				cout<<"Numero di posti della machina: "<<C[i].numPosti<<endl;
				
				cout<<"La machina NON e' noleggiata"<<endl;
			}
 			
 			
		 }
 		
 		
	 }
 	
 	
 	
}// fine ricMarca

/* viene noleggiata la prima auto disponibile,
con un numero di posti preso in input,
e viene impostata la data come inizio noleggio
 */
void inizioNol(automobile C[],int size)
{
 // dato numero di posti do la prima auto che trovo e gli dico le info
  int np;
  
  do{
  	 cout<<"Inserisci il numero di posti";
 	 cin>>np;
  	
  }while(np<1);
 
  
  for(int i=0;i<size;i++){
  	
  		if(np==C[i].numPosti&&C[i].noleggiato==false){
  		
  		do{
  			cout<<"Inserisci il giorno: ";
  			cin>>C[i].noleggio.giorno;
		  }while(C[i].noleggio.giorno<=0&&C[i].noleggio.giorno>31);
		  
		do{
  			cout<<"Inserisci il mese: ";
  			cin>>C[i].noleggio.mese;
		  }while(C[i].noleggio.mese<=0&&C[i].noleggio.mese>12);
		  
		do{
  			cout<<"Inserisci l' anno: ";
  			cin>>C[i].noleggio.anno;
		  }while(C[i].noleggio.anno<2000 &&	C[i].noleggio.anno>2023);
		  
  		cout<<"Hai noleggiato la machina: "<<C[i].marca<<" targata: "<<C[i].targa<<endl;
  		C[i].noleggiato=true;
  		
  		
  		
	  }
  	
  }
 
 
}// fine inizioNol

// imposta la data come fine noleggio
void fineNol(automobile C[],int size)
{
 // data targa faccio finire il noleggio e salvo la data della fine noleggio
 string t;
 int i;
	 cout<<"Inserisci la targa della machina: ";
	 cin>>t;
	 
	 for(i=0;i<size;i++){
	 	
	 	if(t==C[i].targa){
	 		
	 		C[i].noleggiato=false;
	 			do{
  			cout<<"Inserisci il giorno: ";
  			cin>>C[i].noleggio.giorno;
		  }while(C[i].noleggio.giorno<=0&&C[i].noleggio.giorno>31);
		  
		do{
  			cout<<"Inserisci il mese: ";
  			cin>>C[i].noleggio.mese;
		  }while(C[i].noleggio.mese<=0&&C[i].noleggio.mese>12);
		  
		do{
  			cout<<"Inserisci l' anno: ";
  			cin>>C[i].noleggio.anno;
		  }while(C[i].noleggio.anno<2000&&	C[i].noleggio.anno>2023);
		 }
	 	
	 	
	 }
	 
 
}// fine fineNol

// visualizza tutti i dati delle auto del garage
void visualizzaTutto (automobile C[],int size)
{
 // do tutte le infromaizioni di tutte le machine
 	int i;
 	if(size!=0){
	 
	 for(i=0;i<size;i++){
	 	
	 	cout<<endl<<"Machina :"<<i+1<<endl;
		
		cout<<"Targa: "<<C[i].targa<<endl;
		cout<<"Marca: "<<C[i].marca<<endl;
		cout<<"Numero posti: "<<C[i].numPosti<<endl;
		if(C[i].noleggiato==true){
			
			cout<<"La machina e' nolleggiata"<<endl<<endl;
		}
		else if(C[i].noleggiato==false){
			
			cout<<"La machina NON e' nolleggiata"<<endl<<endl;
		}
		
	 	
	 	
	 }
 	
 	}
 	else{
 		
 		cout<<"Non ci sono machine nel garage."<<endl;
	 }
 
}// fine visualizzaTutto

// ricerca di un'auto per targa attraverso la ricerca Binaria
void ricTarga(automobile C[],int size)
{
 // Data targa cerco l' auto con la ricerca binaria e stampo informazioni
 
 
 string app;
    int i = 0, j = size-1, m, pos = -1;
    
    cout<<"Inserisci la targa da cercare: ";
    cin>>app;
    
    do { 
    
		m=(i + j)/2;
		
		if(C[m].targa==app)  
			pos = m;
		
		else if (C[m].targa < app)
			i = m + 1;
		
		else
			j = m - 1;
		
    } while(i <= j && pos == -1);	

    if(pos != -1){
    	
    	cout<<"Marca: "<<C[i].marca<<endl;
		cout<<"Numero posti: "<<C[i].numPosti<<endl;
		if(C[i].noleggiato==true){
			
			cout<<"La machina e' nolleggiata"<<endl;
		}
		else if(C[i].noleggiato==false){
			
			cout<<"La machina NON e' nolleggiata"<<endl;
		}
		
		cout<<endl<<"**********************************************"<<endl;
    	
	}
	
    else 
	cout<<"Targa non trovata";
	
	
}// fine ricTarga

