#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define MAXALB 100
#define MAXSERV 200

#define MAXALB 100
#define MAXSERV 200

/* *******************************************************************
 *            Gestione Alberghi con Struct e file                    *
 * *******************************************************************/
 
struct albergo{

	string nome;
	int numStelle;
	string numTel;

	int cod; /*il codice viene assegnato come numero progressivo al momento nell'inserimento CORRISPONDE AL NUMERO D'ORDINE NELL'ARRAY*/
};
	
struct servizio{

	string nomeS;	
	string descrS;

	int cod;
};

int menu();
void caricaDatiDaFile(albergo[],servizio[],int* ,int*);
void salvaDatiSuFile(albergo[],servizio[],int* ,int*);
void visualizzaTutto(albergo[],servizio[],int* ,int*);
void Alberghistelle(albergo[],servizio[],int* ,int*); //visualizza gli alberghi con le stelle richieste 
void AlberghiServizio(albergo[],servizio[],int* ,int*);// visualizza gli alberghi con i servizi richiesti
void aggiungiAlberghi(albergo[],servizio[],int* ,int*);//permette  di inserire un SOLO nuovo albergo (NON i suoi servizi)
void aggiungiServizio(albergo[],servizio[],int* ,int*); //dato il nome di un albergo permette di aggiungere un servizio all'albergo indicato
void cercaServiziPerNomeAlbergo(albergo[],servizio[],int* ,int*);//dato il nome di un albergo stampa tutti i suoi servizi
void albergoservizio(albergo[],servizio[],int* ,int*);//albergo con piu servizi

int main(){
	
/*dichiaro due tabelle una di dimensione "MAXALB" che conterrà i dati di tutti gli alberghi
* l'altra di dimensione "MAXSERV" che conterrà tutti i servizi di tutti gli alberghi  */
	
	albergo alberghi[MAXALB]; 
	servizio servizi[MAXSERV];
	int NA=0;//hotel reale
	int NS=0;//servizio reale
	int scelta;// scelta nel menu
	caricaDatiDaFile(alberghi,servizi,&NA ,&NS);//carico i dati dal file
	
	do{
		scelta=menu();
		switch(scelta)
			{
				case 1:
					
					aggiungiAlberghi(alberghi,servizi,&NA,&NS);
					break;
				
				case 2:
					
					visualizzaTutto(alberghi,servizi,&NA,&NS);
					
					break;
				
				case 3:
					
					cercaServiziPerNomeAlbergo(alberghi,servizi,&NA,&NS);
				
					break;
				
				case 4:

					Alberghistelle(alberghi,servizi,&NA,&NS);
					
					break;
			
				case 5:
					
					AlberghiServizio(alberghi,servizi,&NA,&NS);
				
					break;
				
				case 6:
					
					aggiungiServizio(alberghi,servizi,&NA,&NS);
					
					break;
			
				case 7:
					
					albergoservizio(alberghi,servizi,&NA,&NS);
					
					break;
			
				case 0:
					cout<< endl<<endl<<"grazie per aver utilizzato il nostro programma, arrivederci!!"<<endl;
					salvaDatiSuFile(alberghi,servizi,&NA,&NS);
					break;	
				default:
					{
					cout<<"Errore di digitazione scelte  possibili da 0 a 7!"<<endl<<"Riprovare"<<endl;
					break;
					}
			}
	}while(scelta!=0);
	
	return 0;
}
void albergoservizio(albergo al[],servizio ser[],int* NA,int* NS){
	
	int max=0;
	int app=0;
	int appi;
	
	for(int i=0;i<*NA;i++){
		
		for(int j=0;j<*NS;j++){
		
		
			if(al[i].cod==ser[j].cod){
				
				max++;
				
				if(max>app){
					
					app=max;
					appi=i;
					
				}
				
			}
		}
		max=0;
	}
	
	cout<<"L' albergho con piu servizzi e: "<<al[appi].nome;
	
	
	
}
void AlberghiServizio(albergo al[],servizio ser[],int* NA,int* NS){
	
	string servizio;
	
	cout<<"Inserisci il servizio: ";
	cin>>servizio;
	
		for(int i=0;i<*NS;i++){
			
			if(servizio==ser[i].nomeS){
				
				for(int j=0;j<*NA;j++){
					
					if(ser[i].cod==al[j].cod){
						
						cout<<"Nome albergo: "<<al[j].nome<<endl;
						
					}
					
				}
				
				
			}
			
		}
	
	
	
	
}

void Alberghistelle(albergo al[],servizio ser[],int* NA,int* NS){
	
	int stelle;
	
	cout<<"Inserisci il numero di stelle";
	cin>>stelle;
	
		for(int i=0;i<*NA;i++){
			
			if(al[i].numStelle==stelle){
				
				cout<<"Nome albergo: "<<al[i].nome<<endl;
				
				
			}
			
			
		}
	
	
}

void cercaServiziPerNomeAlbergo(albergo al[],servizio ser[],int* NA,int* NS){
	
	string nome;

	cout<<"Inserisci il nome del albergo di qui vuoi sapere i servizi: ";
	cin>>nome;
	
		for(int i=0;i<*NA;i++){
			
			if(nome==al[i].nome){
				
				for(int j=0;j<200;j++){
					
					if(al[i].cod==ser[j].cod){
						
						cout<<"Nome del Servizio: "<<ser[j].nomeS<<endl;
						cout<<"Descrizione del Servizio: "<<ser[j].descrS<<endl;
						
						
					}
					
					
				}
				
				
				
			}
			
			
		}
	
	
	
}

void aggiungiAlberghi(albergo al[],servizio ser[],int* NA,int* NS){
	

	cout<<"Inserisci il nome del albergo: ";
	cin>>al[*NA].nome;
	cout<<"Inserisci il numero di stelle del albergo: ";
	cin>>al[*NA].numStelle;
	cout<<"Inserisci il numero di telefono del albergo: ";
	cin>>al[*NA].numTel;

		al[*NA].cod=*NA+1000;	
		ser[*NS].cod=*NA+1000;
		
		*NA=*NA+1;
	
}

void visualizzaTutto(albergo al[],servizio ser[],int* NA,int* NS){
	
	for(int i=0;i<*NA;i++){
	
		cout<<endl<<"Albergo: "<<i+1<<endl;
		cout<<"Nome Albergo: "<<al[i].nome<<endl;
		cout<<"Numero di stelle del Albergo: "<<al[i].numStelle<<endl;
		cout<<"Numero di telefono del Albergo: "<<al[i].numTel<<endl;
		cout<<"Codice del Albergo: "<<al[i].cod<<endl;	
			for(int j=0;j<*NS;j++){
				
				if(al[i].cod==ser[j].cod){
					
					cout<<"Nome del Servizio: "<<ser[j].nomeS<<endl;
					cout<<"Descrizione del Servizio: "<<ser[j].descrS<<endl;

				}
				
			}
			
	}
	
	
	
}
void aggiungiServizio(albergo al[],servizio ser[],int* NA,int* NS){
	
	string nome;
	
	cout<<"Inserisci il nome del albergo a cui vuoi aggungere un servizio: ";
	cin>>nome;
	
		for(int i=0;i<*NA;i++){
			
			if(nome==al[i].nome){
					 
				cout<<"Inserisci il nome del servizio: ";
				cin>>ser[*NS].nomeS;
				cout<<"Inserisci la descrizione del servizio: ";
				cin>>ser[*NS].descrS;
				ser[*NS].cod=al[i].cod;
						
					
			}
			
			
		}
	
	
	
	*NS=*NS+1;
	
	
}
int menu(){
	
	int scelta;
	cout<<endl<<"Inserisci 1 per aggiungere albergo"<<endl;
	cout<<"Inserisci 2 per la visualizzazione di tutti gli alberghi"<<endl;
	cout<<"Inserisci 3 per visualizzare tutti i servizi di un determinato albergo cercato per nome"<<endl;
	cout<<"Inserisci 4 per elenco alberghi con numero stelle richiesto"<<endl;
	cout<<"Inserisci 5 per elenco alberghi con servizio richiesto"<<endl;
	cout<<"Inserisci 6 per aggiungere un servizio ad un albergo"<<endl;
	cout<<"Inserisci 7 per albergo con piu servizzi"<<endl;
	cout<<"Inserisci 0 per terminare"<<endl;
	cout<<"Scelta: ";
	cin>>scelta;
	
	return scelta;
	
}


void salvaDatiSuFile(albergo al[],servizio ser[],int* NA,int* NS){
	
	//prima di chiudere salvo tutto
	
	ofstream out("Alberghi.txt");

	
		out<<*NA<<endl;
		for(int i=0;i<*NA;i++)
		{	
				
				out<<al[i].nome<<endl;	
				out<<al[i].numStelle<<endl;		
				out<<al[i].numTel<<endl;						
				out<<al[i].cod<<endl;
				
			

		}
				
				out<<*NS<<endl;
				for(int i=0;i<*NS;i++)
				{	
				
					out<<ser[i].nomeS<<endl;	
					out<<ser[i].descrS<<endl;		
					out<<ser[i].cod<<endl;
				
				}
			
			
		
		
		
	
	out.close();
	
}

void caricaDatiDaFile(albergo al[],servizio ser[],int* NA,int* NS){
	
	// leggo dal file tutto e lo salvo
	
	ifstream in("Alberghi.txt");
	if (!in) {
		cout<<"ATTENZIONE File non ancora creato TABELLA VUOTA!"<<endl;
		
		}
	else {
		in>>*NA;
		for(int i=0;i<*NA;i++)
		{	
				
			in>>al[i].nome;	
			in>>al[i].numStelle;		
			in>>al[i].numTel;						
			in>>al[i].cod;
		
		

		}
				
				in>>*NS;
				for(int i=0;i<*NS;i++)
				{	
				
					in>>ser[i].nomeS;	
					in>>ser[i].descrS;		
					in>>ser[i].cod;
				
				}
			
			
		}
		
		
	
	in.close();
	
}
