#include <stdio.h>

void main() {
    
	int nbNotes, nbNotes2, i, NS10, K=13,m, j;// NS10 : note superieur a dix//
	float note, note2, NPG, NPP;// NPG veut dire note la plus grande, NPP veut dire note la plus petite//
	float tabN[13]; // Déclare un tableau de 13 réels
    float tabNotes2[15]; // Déclare un tableau de 15 réels
    float tri[28];
	//
 printf("veuillez entrez les 13 notes (entre 0 et 20) des eleves  de la classe 1 :\n");
    
 nbNotes = 0;
	// A. Saisir les notes et les mémoriser dans un tableau
	// B. Compter les notes saisies et afficher leur nombre
	do {
		scanf("%f", &note);
		tabN[nbNotes] = note; // tabNotes[nbNotes] <-- note
		nbNotes++;
	} while((note >= 0) && (note <= 20) && (nbNotes < 13));

   printf("\n\nVous avez saisi %d notes", nbNotes);


	NPG =0;
	    for(i = 0 ; i < nbNotes ; i++) {
	    if(tabN[i] > NPG) {
	        NPG = tabN[i];
	    }
}
    printf("\nLa plus grande moyenne est de %.2f",NPG);

    NPP = 15;
        for(i = 0 ; i < nbNotes ; i++) {
	    if(tabN[i] < NPP) {
	        NPP = tabN[i];
	    }
	}
    printf("\nLa plus petite moyenne est de %.2f",NPP);  
NS10 = 0;
	for(i = 0 ; i < nbNotes ; i++) {
	    printf("\n%d : %.2f", i+1, tabN[i]);
	    
	    if(tabN[i] >= 10) {
	        printf(" >= 10");
	        NS10++;
}
    }
printf("\n\nIl y a %d eleve a obtenu une moyenne >= 10", NS10);


                 // §§§§ SAISIR LES NOTES DE LA  CLASSE 2 §§§§//  
 

printf("\n\nveuillez entrez les 15 notes (entre 0 et 20) des eleves  de la classe 2 :\n");
 nbNotes2 = 0;
do{	
		scanf("%f", &note2);
		tabNotes2[nbNotes2] = note2; 
		nbNotes2++;
}
while((note2 >= 0) && (note2 <= 20) && (nbNotes2 < 15));


    printf("\n\n Vous avez saisi %d notes", nbNotes2);
    

	NPG =0;
	    for(i = 0 ; i < nbNotes2 ; i++) {
	    if(tabNotes2[i] > NPG) {
	        NPG = tabNotes2[i];
	    }
}
    printf("\n\nLa plus grande moyenne est de %.2f",NPG);
        NPP = 15;
        for(i = 0 ; i < nbNotes2 ; i++) {
	    if(tabNotes2[i] < NPP) {
	        NPP = tabNotes2[i];
	    }
	}
    printf("\n\nLa plus petite moyenne est de %.2f",NPP);  
NS10 = 0;
	for(i = 0 ; i < nbNotes2 ; i++) {
	    printf("\n%d : %.2f", i+1, tabNotes2[i]);
	    
	    if(tabNotes2[i] >= 10) {
	        printf(" >= 10");
	        NS10++;
}
    }
printf("\n\nIl y a %d eleve a obtenu une moyenne >= 10", NS10);

// TRI DES DEUX TABLEAUX CLASSE1 ET CLASSE2 HH//
  printf("\n\n veuillez saisi 3 pour que le programme tri les deux tableaux : ");
  scanf("%d",&note);
    for (i = 0; i < 13; i++)
    {
        tri[i]=tabN[i];
    }
    for (i = 0; i < 15; i++)
    {
         tri[K]=tabNotes2[i];
         K++;
    }
    for (i=0;i<27;i++)
     for (j = i + 1; j < 28; j++)
        { 
            if (tri[i] > tri[j])
            {
                m = tri[i];
                tri[i] = tri[j];
                tri[j] = m;
            }
}
            printf ("les notes de deux classes par ordre croissant est:\n");
            for (i = 0; i < 28; i++){
                printf("%.2f\t",tri[i]);
            }
	}