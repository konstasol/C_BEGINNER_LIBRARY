#include <stdio.h>
#include <stdlib.h>


#define SIZE 100

int main(void){
	system("chcp 1253>nul");
	
	
	int k=0;
	int count=0;
	int countl=0;
	int i,j,temp,start,end,direction;
	int pin[SIZE];
	
	
	// Εισαγωγή αριθμών από το χρήστη μεχρι να πατηθεί '=' ή να φτάσουμε τους 100 αριθμούς.
	// Χρησιμοποιείται πίνακας 'pin' για αποθήκευση των αριθμών.
	// Η εισαγωγή στοιχείων διακόπτεται αν πατηθεί '=' ή αν φτάσουμε τους 100 αριθμούς.
	// Η μεταβλητή 'k' χρησιμοποιείται για την αποθήκευση του τρέχοντος αριθμού.
	while (1){
		printf("Δώσε τον %d-ο αριθμό: ",k+1);
		scanf("%d",&pin[k]);
		
		char c=getchar();
		if (c=='='){
			
			printf("Ολοκλήρωση εισαγωγής στοιχείων.");
			break;
		}
		++k;	
		if(k==99){
			
			printf("Φτάνει πια. Ολοκλήρωση εισαγωγής στοιχείων σ'αρέσει δε σ'αρέσει.");
			break;
		}
		
		
		// Αύξηση του 'k' για την επόμενη εισαγωγή.
    		
		
	}
	
	
	
	
	
	
	//Εμφάνιση Πίνακα που εδωσε ο χρήστης
	puts("\n\nΟ Αρχικός Πίνακας που εισήχθη: ");
	puts("----------------------------------------");
	
	for(i=0;i<k;++i){
		
		printf("[%d] ",pin[i]);
		}
	
	puts("\n\n----------------------\n");
	//bubblesort ΚΛΑΣΣΙΚΗ - ΣΧΟΛΙΟ-
	
	
	/*
	for(i=0;i<k-1;++i){ //Διαπέραση από 1ο εως προτελευταιο
		
		for(j=k-1;j>=i+1;--j){ //Συγκριση από αριστερα προς δεξια
			
			if(pin[j]<pin[j-1]){  //Αν το δεξιοτερο ειναι μικροτερο swap 
			πχ αν pin[6]<pin[5] ==>SWAP τα μικρότερα πάνε αριστερά.
				
				
				//SWAP
				temp=pin[j-1];
				pin[j-1]=pin[j];
				pin[j]=temp;
				
				
			}
			
			
			
		}
	}  //bubble τελος
	
	
	
	//Εμφάνιση Πίνακα Ταξινομημένου
	puts("\n\nΟ πίνακας Ταξινομημένος:");
	puts("----------------------------------------");
	for(i=0;i<k;++i){
		
		printf("[%d] ",pin[i]);
		}
		
	*/
	
	
	
	
	//bubblesort2 απο αριστερα προς τα δεξια-
	
	/*
	
	for(i=0;i<k-1;++i){ //Διαπέραση από 1ο εως προτελευταιο
		
		for(j=0;j<k-1-i;++j){ //Συγκριση από δεξιά προς τα αριστερα αν δυο εως το 1ο
			
			if(pin[j]>pin[j+1]){  //Αν το δεξιοτερο ειναι μικροτερο swap πχ αν pin[6]<pin[5] ==>SWAP τα μικρότερα πάνε αριστερά.
				
				
				//SWAP
				temp=pin[j];
				pin[j]=pin[j+1];
				pin[j+1]=temp;
				
				count++;
			}
			
			
			
		}
	}  //bubble anti τελος
	
	*/
	
	puts("\nΕΙΚΟΝΑ ΜΝΗΜΗΣ\n");
	
	//Bubble sort 3 ΕΝΑΛΛΑΓΗ ΚΑΤΕΥΘΥΝΣΗΣ
	direction=1;//1 κατευνση προς τα δεξια, 0 προς τα αριστερα
	start=0; //ΑΡΧΗ
	end=k-1; //ΤΕΛΟΣ
	for(i=0;i<k-1;++i){ //ΕΞΩΤΕΡΙΚΗ ΕΠΑΝΑΛΗΨΗ ΙΔΙΑ
	
		if(direction==1){ //Αν η κατεύθυνση ειναι προς τα δεξία
		
			for(j=start;j<end;++j){ //Συγκριση απο αριστερα ΠΡΟΣ ΔΕΞΙΑ
			
				if(pin[j]>pin[j+1]){  //
				
				
					//SWAP
					temp=pin[j];
					pin[j]=pin[j+1];
					pin[j+1]=temp;
					
					count++;
				}
				
				
				printf("\n | DIRECTION=1 (ΑΡΙΣΤΕΡΑ-->ΔΕΞΙΑ) ΕΤΡΕΞΑ ΓΙΑ:  i=%d, j=%d",i,j);
				
			}
			end-=1;
			direction=0;
		
		} else {
			
			for(j=end;j>start;--j){ //Συγκριση από δεξιά προς τα αριστερα αν δυο εως το 1ο
			
			if(pin[j]<pin[j-1]){  //Αν το δεξιοτερο ειναι μικροτερο swap πχ αν pin[6]<pin[5] ==>SWAP τα μικρότερα πάνε αριστερά.
				
				
				//SWAP
				temp=pin[j-1];
				pin[j-1]=pin[j];
				pin[j]=temp;
				countl++;
				
				}
			
			printf("\n | direction=0 (ΔΕΞΙΑ-->ΑΡΙΣΤΕΡΑ) KAΙ ΕΤΡΕΞΑ ΓΙΑ: i=%d, j=%d",i,j);
			count++;
			
		}
		
			start+=1;
			direction=1;	
			
		}
	
	}	
	
	
	
	
	
	
	//Εμφάνιση Πίνακα Ταξινομημένου
	puts("\n\nΟ πίνακας Ταξινομημένος:");
	puts("----------------------------------------");
	for(i=0;i<k;++i){
		
		printf("[%d] ",pin[i]);
	
	}
		
	printf("\n\n ΣΥΝΟΛΙΚΑ ΕΓΙΝΑΝ: %d swaps",count+countl);	
	printf("\n ΜΕ ΚΑΤΕΥΘΥΝΣΗ ΑΠΟ ΑΡΙΣΤΕΡΑ ΠΡΟΣ ΔΕΞΙΑ :εγιναν %d swaps",count);
	printf("\n ΜΕ ΚΑΤΕΥΘΥΝΣΗ ΑΠΟ ΔΕΞΙΑ ΠΡΟΣ ΑΡΙΣΤΕΡΑ :εγιναν %d swaps",countl);
	
		
	puts("\n\n\n")	;
		
	return 0;
	
}



