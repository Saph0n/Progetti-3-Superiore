#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <fstream>
#include <iostream>


using namespace std;


struct stud{
	
	string cognomi[];
	string telefoni[];
	string comuni[];
	float km[];
	int assenze[];
	float media[];
	
};

//EEEE     A     RRRR  L     Y   Y         A     CCCCCC CCCCCC EEEEE SSSSSSS
//E       A A    R   R L      Y Y         A A    CC     CC     E     SS
//EEEE   A   A   RRRR  L       Y         A   A   C      C      EEEEE   SS
//E     AAAAAAA  R  R  L       Y        AAAAAAA  CC     CC     E        SS
//EEEE A       A R   R LLLLL   Y       A       A CCCCCC CCCCCC EEEEE SSSSSSS

int riordina(int,stud[]);
int informazioni(int,stud[]);
int nalunno(int,stud[]);
int bocciature(int,stud[]);
int promossi(int,stud[]);
int bocciatiassenze(int,stud[]);
int infocomune(int,stud[]);
int	kmedia(int,stud[]);
int infobest(int,stud[]);

int menu();
int stampa(int ,stud[]);
int carica(int ,stud[]);
int salva(int ,stud[]);
		
int main(){
	
	int scelta,n=0;
	stud studenti[100];
	
	n=carica(n,studenti);
	
	do{
	
	scelta=menu();
		
		if(scelta==1){
			n=riordina(n,stud);
		}
		else if(scelta==2){
			n=informazioni(n,stud);
			
		}
		else if(scelta==3){
			n=nalunno(n,stud);
			n=salva(n,stud);
		}
		else if(scelta==4){
		    n=bocciature(n,stud);
		}
		else if(scelta==5){
			n=promossi(n,stud);
		}
		else if(scelta==6){
			n=bocciatiassenze(n,stud);
		}
		else if(scelta==7){
			n=infocomune(n,stud);

		}
		else if(scelta==8){
			n=kmedia(n,stud);
		}
		else if(scelta==9){
			n=infobest(n,stud);
		}
		else if(scelta==10){
			stampa(n,stud);
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

int riordina(int n,stud studenti[]){

	int i, j;
	string app_Char;
	float app_Float;
	int app_Int;
	
		for(i=0;i<n-1;i++){
			
			for(j=i+1;j<n;j++){
				
				if(studenti[i].cognomi>studenti[j].cognomi){
					
					app_Char=studenti[i].cognomi;
					strcpy(cognomi[i], studenti[j].cognomi);
					strcpy(studenti[j].cognomi, app_Char);
					
						app_Char= studenti[i].telefoni);
						studenti[i].telefoni= studenti[i].telefoni);
						studenti[j].telefoni= app_Char);
					
					app_Char= studenti[i].comuni;
					studenti[i].comuni= studenti[i].comuni[j];
					studenti[j].comuni= app_Char; 
					
						app_Float=studenti[i].km;
						studenti[i].km=studenti[i].km[j];
						studenti[j].km[j]=app_Float;
					
					app_Float=studenti[i].media;
					studenti[i].media=studenti[j].media[i];
					studenti[j].media=app_Float;
					
						app_Int=studenti[i].assenze;
						studenti[i].assenze=studenti[j].assenze;
						studenti[j].assenze=app_Int;
					
				}
			}
		}




	return n;
}

int informazioni(int n,stud studenti[]){
	
	char app[30];
	int i,t;
	cout<<"Inserisci il cognome?"<<endl;
	cin>>app;
	
	for(i=0;i<n;i++){
	
		int p=strcmp(app,cognomi[i]);
		
			if(p==0){
					
				t=i;
				//metto i==1717 perche almeno mi esce dal cilco 
				i=1717;
				
			}
			
			
	}
	
			cout<<"Telefono: "<<telefoni[t]<<endl;
			cout<<"Comuni: "<<comuni[t]<<endl;
			cout<<"Chilometri: "<<km[t]<<endl;			
			cout<<"Assenze: "<<assenze[t]<<endl;
			cout<<"Media: "<<media[t] <<endl;
		
	
	return n;
}

int nalunno(int n,stud studenti[]){
	
	cout<<"Inserisci il cognome"<<endl;
	cin>>cognomi[n];
	
	cout<<"Inserisci il telefono"<<endl;
	cin>>telefoni[n];
	
	cout<<"Inserisci il comune"<<endl;
	cin>>comuni[n];
	
	cout<<"Inserisci i KM"<<endl;
	cin>>km[n];
	
	cout<<"Inserisci le assenze"<<endl;
	cin>>assenze[n];
	
	cout<<"Inserisci la media"<<endl;
	cin>>media[n];
	
	n++;
	

	return n;
}

int bocciature(int n,stud studenti[]){
	
	int i,maxassenze;
	
	cout<<endl<<"Inserisci il numero massimo di assenze"<<endl;
	cin>>maxassenze;
	
	for(i=0;i<n;i++){
		
		if(maxassenze<assenze[i]){
			
			cout<<"L' alunno "<< cognomi[i]<<" e BOCCIATO per le assenze"<<endl;
		}
		if(6>media[i]){
			cout<<"L' alunno "<< cognomi[i]<<" e BOCCIATO per media insufficente"<<endl;
		}
		
	}
	
	
	
	return n;
}

int promossi(int n,stud studenti[]){

	int i,y=0;
	char promossi[100][30];
	
	for(i=0;i<n;i++){
											
		if(6>media[i]){
			
			//printf("L' alunno %s e BOCCIATO per media insufficente\n",cognomi[i]);
		}
		else{
			
			strcpy(promossi[y],cognomi[i]);
			//printf("%s",promossi[y]); per vedere che funziona togli il commento
			y++;
		}
	}

	return n;
}

int bocciatiassenze(int n,stud studenti[]){

	
	char bocciatiassenze[100][30];
	int troppeassenze[100];
	int i,y=0,maxassenze, j, min=360, t;;
	
	cout<<"Inserisci le assenze massime"<<endl;
	cin>>maxassenze;
	
	
	for(i=0;i<n;i++){
											
		if(maxassenze<assenze[i]){
			
			//printf("L' alunno %s e BOCCIATO per media insufficente\n",cognomi[i]);
			strcpy(bocciatiassenze[y],cognomi[i]);
			troppeassenze[y]=assenze[i];
			y++;
		}
		
	}
		
		//t è la variabile temporanea utilizzata per lo scambio 

   for(i=0; i<y; i++){ 
      min=i; 
      for (j = i+1;j < y+1; j++){ 
         if (troppeassenze[j]<troppeassenze[min]) 
            min=j; 
      } 
      t = troppeassenze[min];
		//si trova l'elemento più piccolo dell'array e si scambia con l'elemento alla posizione i 
      troppeassenze[min] = troppeassenze[i]; 
      troppeassenze[i] = t;  
      strcpy(bocciatiassenze[min],bocciatiassenze[i]);
      strcpy(bocciatiassenze[i],bocciatiassenze[min]);
    }

   	cout<<"Gli studenti in ordine di assenze decresciente sono: "<<endl;
	
	
	
	   for(i=0;i<y;i++){

	   		cout<<endl<<"cognome: "<<bocciatiassenze[i]<<endl;	
	   		cout<<"assenze: "<<troppeassenze[i];	
	   	

	   }
	
	
	return n;
}

int infocomune(int n,stud studenti[]){

	char app[30];
	int i,t=1717;
	do{	
		
		cout<<"Inserisci il comune";
		cin>>app;
	
		for(i=0;i<n;i++){
		
			int p=strcmp(app,comuni[i]);
			
				if(p==0){
						
					t=i;
					//metto i==1717 perche almeno mi esce dal cilco 
					i=1717;
					
				}
				
				
		}
		
			if(t!=1717){
				
				cout<<"Cognome: "<<cognomi[t]<<endl;
				cout<<"Telefono: "<<telefoni[t]<<endl;
				cout<<"Chilometri: "<<km[t]<<endl;			
				cout<<"Assenze: "<<assenze[t]<<endl;
				cout<<"Media: "<<media[t] <<endl;
			
		
				
			}
			else{
				
				cout<<"Il nome del comune è ERRATO";
				
			}
		
	}while(t==1717);

	
	return n;
}

int kmedia(int n,stud studenti[]){

	int i,somma=0,mediau;
	
		for(i=0;i<n;i++){
			
			somma=somma+km[i];
			
		}
		
		mediau=somma/n;
		
		for(i=0;i<n;i++){
			
			if(km[i]>mediau){
				
				
				cout<<"Cognome: "<<cognomi[i]<<endl;
				cout<<"Comune: "<<comuni[i]<<endl;

				
			}
		  	
		}

	return n;
}

int infobest(int n,stud studenti[]){

	int i,max=0,t;
	
	for(i=0;i<n;i++){
		
		if(max<media[i]){
			
			max=media[i];
			t=i;
		}
		
	}
			
			cout<<"Cognome: "<<cognomi[t]<<endl;
			cout<<"Telefono: "<<telefoni[t]<<endl;
			cout<<"Comuni: "<<comuni[t]<<endl;
			cout<<"Chilometri: "<<km[t]<<endl;			
			cout<<"Assenze: "<<assenze[t]<<endl;
			cout<<"Media: "<<media[t] <<endl;
				
			
			
	return n;
}

int menu(){
	
	int scelta;

		do{
		
		cout<<endl<<"****MENU****"<<endl;
		cout<<"0) Esci"<<endl;	
		cout<<"1) Riordina le informazioni in ordine alfabetico"<<endl;	
		cout<<"2) Dato cognome cerco informazioni"<<endl;	
		cout<<"3) Nuovo alunno"<<endl;	
		cout<<"4) Bocciature"<<endl;	
		cout<<"5) Promossi"<<endl;	
		cout<<"6) Alunni bocciati per assenze"<<endl;	
		cout<<"7) Dato comune cerco informazioni"<<endl;	
		cout<<"8) Cognome di studenti che abitano piu lontano della media"<<endl;	
		cout<<"9) Info Best studente"<<endl;	
		cout<<"10) Stampa TUTTO"<<endl;	
		cout<<"Inserisci il numero della scelta: "<<endl;	
	    cin>>scelta;
		
		}while(scelta<0||scelta>10);

	return scelta;
}

int stampa(int n,stud studenti[]){
	
	int i;
	
	for(i=0;i<n;i++){
		
		cout<<endl<<"Alunno numero "<<i+1<<endl<<endl;
		
	
			cout<<"Cognome: "<<cognomi[i]<<endl;
			cout<<"Telefono: "<<telefoni[i]<<endl;
			cout<<"Comuni: "<<comuni[i]<<endl;
			cout<<"Chilometri: "<<km[i]<<endl;			
			cout<<"Assenze: "<<assenze[i]<<endl;
			cout<<"Media: "<<media[i] <<endl;
			
	}
	
	return 0;
}

int carica(int n,stud studenti[]){
	

	int righe;
	
	ifstream lettura("salva.txt");//apro il file CaniStruct in input e riempio l'array di cani con i suoi elementi
	
	lettura>>righe;  // prendo il primo valore e lo inserisco nella variabile righe

 	lettura>>n;
	for(int i=0; i<righe; i++) // leggo dal file CaniStruct.txt
	{
		lettura>>cognomi[i];
		lettura>>telefoni[i];
		lettura>>comuni[i];
		lettura>>km[i];
		lettura>>assenze[i];
		lettura>>media[i];
	
		
	}
	lettura.close(); 
	return righe;

	return n;
}

