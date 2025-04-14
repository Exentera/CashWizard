#include <stdio.h>
#include <stdlib.h>								//für rand()
#include <time.h>								//für systemzeit


//Constante definieren
#define UG 1									//UG = Unere Grenze(kleinste Zahl)
#define OG 100000								//OG = Obere Grenze(größte Zahl)

int main(){
  double zuZahlen=0, zuZahlenR=0, gegeben=0, zurueck, mehr, ek=0.00,r=0.00,er=0.00;
  int i=0, anz=0, zur, k=0, g=0, br=0, fuenfer=50000, zweier=20000, einser=10000;
  
  
  srand(time(NULL));
  	for(i=0;i<3;i++){					
		zuZahlen=rand()%(OG-UG+1)+UG;  				
	}
	zuZahlen/=100;
	
	
	if(zuZahlen>500000.00){
		r=r+0.08;
	}
	else if(zuZahlen>250000.00){
		r=r+0.05;
	}
	printf("Zu zahlender Betrag\t:\t%.2f\t\tEURO\nRabatt\t\t\t:\t%.2f%%\t\tPROZENT\n\n",zuZahlen,r*100);
	
	printf("Kundenstatus\n(0) Neukunde\n(1) Stammkunde\n");
	scanf("%i",&k);
	system("cls");
	while(k<0||k>1){
		printf("Ung\201ltige Eingabe\n\n\nKundenstatus\n(0) Neukunde\n(1) Stammkunde\n");
		scanf("%i",&k);
		system("cls");
	}
	if(k==1){
		r=0.05;
	}
	
	printf("Zu zahlender Betrag\t:\t%.2f\t\tEURO\nRabatt\t\t\t:\t%.2f%%\t\tPROZENT\n\n",zuZahlen,r*100);
	printf("Gro\341h\204ndler\n(0) NEIN\n(1) JA\n ");
	scanf("%i",&g);
	system("cls");
	while(g<0||g>1){
		printf("Ung\201ltige Eingabe\n\n\nGro\341h\204ndler\n(0) NEIN\n(1) JA\n");
		scanf("%i",&g);
		system("cls");
	}
	if(g==1){
		r=r+0.15;
	}
  	
  	printf("Zu zahlender Betrag\t:\t%.2f\t\tEURO\nRabatt\t\t\t:\t%.2f%%\t\tPROZENT\n\n",zuZahlen,r*100);
  	printf("Zahlungsart\n(0)Karte\n(1)Bar\n");
	scanf("%i",&br);
	system("cls");
	while(br<0||br>1){
		printf("Ung\201ltige Eingabe\n\n\n");
		printf("Zahlungsart\n(0)Karte\n(1)Bar\n");
		scanf("%i",&br);	
		system("cls");	
	}
	if(br==1){
		r=r+0.02;
	}
		
	zuZahlenR=zuZahlen;
	zuZahlen=zuZahlen-(zuZahlen*r);
	zuZahlenR=zuZahlenR-zuZahlen,
	
	printf("Zu zahlender Betrag\t:\t%.2f\t\tEURO\nRabatt\t\t\t:\t%.2f%%\t\tPROZENT\n",zuZahlen,r*100);
	printf("Gespart\t\t\t:\t%.2f\t\tEURO\n\n\nZu zahlender Betrag\nmit Rabatt\t\t:\t%.2f\t\tEURO\n\n" ,r*100,zuZahlenR,zuZahlen);
  	printf("Geld bitte\t\t:\t");
	scanf("%lf",&gegeben);
  
   	system("cls");

  
  	while(zuZahlen>gegeben){
  		printf("Zu zahlender Betrag\t:\t%.2f\t\tEURO\nRabatt\t\t\t:\t%.2f%%\t\tPROZENT\n\n",zuZahlen,r*100);
  		printf("Rabatt\t\t\t:\t%.2f%%\t\t%PROZENT\nGespart\t\t\t:\t%.2f\t\tEURO\n\n\nZu zahlender Betrag\nmit Rabatt\t\t:\t%.2f\t\tEURO\n\n" ,r*100,zuZahlenR,zuZahlen);
  		printf("Geld bitte\t\t:\t");
  		scanf("%lf",&gegeben);
  		system("cls");
	}
  
  
  
  //printf("Gegeben  \t: \t%7.2f\n", gegeben);
  //printf("Zu zahlen\t: \t%7.2f\n", zuZahlen);
  
// while(gegeben<zuZahlen){
// 	printf("%.2lf => Zu wenig, neue Eingabe: ", gegeben);
//	scanf("%lf",&mehr);
//	gegeben=gegeben+mehr;
//  }
  
  zurueck=gegeben-zuZahlen;
  zur=zurueck*100;

  //printf("Zur\201ck  \t: \t%7.2lf\n\n", zurueck);
  printf("Ohne Rabatt\t\t:\t%.2f\t\tEURO\n",zuZahlen+zuZahlenR);
  printf("Rabatt\t\t\t:\t%.2f%%\t\tPOZENT\t\n",r*100);
  printf("Mit Rabatt\t\t:\t%.2f\t\tEURO\n",zuZahlen);

  printf("\nGespart\t\t\t:\t%.2f\t\tEURO\n\nZu zahlender Betrag\nmit Rabatt\t\t:\t%.2f\t\tEURO\n" ,zuZahlenR,zuZahlen);
  printf("\nGezahlt\t\t\t:\t%.2lf\t\tEURO\n\n\n",gegeben);
while(zur>0){
  anz=zur/fuenfer;  
  zur=zur%fuenfer; 
  if(anz>0){
	  printf("%2i x\t %6.2lf\t\t=", anz, (fuenfer/100.0));
	  printf("\tRest: %6.2lf\tEURO\n", (zur/100.0));
      anz=0;
  }
  
  anz=zur/zweier;  
  zur=zur%zweier;
    if(anz>0){
	  printf("%2i x\t %6.2lf\t\t=",anz, (zweier/100.0));
	  printf("\tRest: %6.2lf\tEURO\n", (zur/100.0));
      anz=0;
  }

  anz=zur/einser;  
  zur=zur%einser;
    if(anz>0){
	  printf("%2i x\t %6.2lf\t\t=",anz, (einser/100.0));
	  printf("\tRest: %6.2lf\tEURO\n", (zur/100.0));
      anz=0;
  	} 
	  
	   
  fuenfer=fuenfer/10;
  zweier=zweier/10;
  einser=einser/10;
}  

printf("\nR\201ckgeld\t\t=\t%.2lf\t\tEURO\n", zurueck);

scanf(" ",&mehr);

 return 0;
}
