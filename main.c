//auteur Raouf Baaziz
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
int j,i,row, column;
char choix;
char Mat[3][3] ={{'_','_','_'},
 				{'_','_','_'},
 				{'_','_','_'} };
 				

//fonction qui affiche la matrice
void Affiche(){
	for (row=0; row<3; row++)
     {
        for(column=0; column<3; column++)
            {printf("%c     ", Mat[row][column]);}
            printf("\n");
     }

}

void Joue (char choix,int i){	
	if ( (i % 2) == 0) { //play X
	  
	   if (choix == '1'){ //case 1
	 
	 	  	if(Mat[0][0]=='_'){	 //vide ou pas
		Mat[0][0]='x';
	}
		else{
	printf("la case est deja prise \n");
	Affiche();
		printf("choisissez une autre case \n");
		scanf("%s",&choix);
		Joue(choix,i);		
	}
	   }
	   else if (choix == '2'){ //case 2
	   	if(Mat[0][1]=='_'){	
	Mat[0][1]='x';	
	}

	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	}
	   }
	   
	    else if (choix == '3'){	
 	if(Mat[0][2]=='_'){	
	Mat[0][2]='x';
	
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	}
	}
	     else if (choix == '4'){
		if(Mat[1][0]=='_'){	
	Mat[1][0]='x';
	
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	} }
	      else if (choix == '5'){
		  if(Mat[1][1]=='_'){	
	Mat[1][1]='x';
		
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	}}
	   else if (choix == '6'){
	   if(Mat[1][2]=='_'){	
	Mat[1][2]='x';
	
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	}}
	      else if (choix == '7'){
		  if(Mat[2][0]=='_'){	
	Mat[2][0]='x';
	
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	}}
	   else if (choix == '8'){
	   if(Mat[2][1]=='_'){	
	Mat[2][1]='x';
	
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	}}
	      else if (choix == '9'){
		  if(Mat[2][2]=='_'){	
	Mat[2][2]='x';
	
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	}}
		else{
			printf("wrong choice\n");
			printf("choisissez une case entre 1 a 9 \n");
scanf("%s",&choix);
Joue(choix,i);	
		}
} //fin play x
 else {     // play O
   if (choix == '1'){ //case 1
	 
	 	  	if(Mat[0][0]=='_'){	 //vide ou pas
		Mat[0][0]='O';
	}
		else{
		printf("la case est deja prise \n");
		Affiche();
		printf("choisissez une autre case \n");
	scanf("%s",&choix);
		Joue(choix,i);		
	}
	   }
	   else if (choix == '2'){ //case 2
	   	if(Mat[0][1]=='_'){	
	Mat[0][1]='O';
		
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	}
	   }
	    else if (choix == '3'){
		if(Mat[0][2]=='_'){	
	Mat[0][2]='O';
	
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	}}
	     else if (choix == '4'){
		if(Mat[1][0]=='_'){	
	Mat[1][0]='O';
	
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	} }
	      else if (choix == '5'){
		  if(Mat[1][1]=='_'){	
	Mat[1][1]='O';
		
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	}}
	   else if (choix == '6'){
	   if(Mat[1][2]=='_'){	
	Mat[1][2]='O';
	
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	}}
	      else if (choix == '7'){
		  if(Mat[2][0]=='_'){	
	Mat[2][0]='O';
	
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	}}
	   else if (choix == '8'){
	   if(Mat[2][1]=='_'){	
	Mat[2][1]='O';
	
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	}}
	      else if (choix == '9'){
		  if(Mat[2][2]=='_'){	
	Mat[2][2]='O';
	
	}
	else{
	printf("la case est deja prise \n");
	Affiche();
	printf("choisissez une autre case \n");
scanf("%s",&choix);
		Joue(choix,i);		
	}}
		else{
			printf("wrong choice\n");
			printf("choisissez une case entre 1 a 9 \n");
scanf("%s",&choix);
Joue(choix,i);	
		}
} //fin play O
	
	}

	void WinnerX(){
	//lignes
if((Mat[0][0]=='x' && Mat[0][1]=='x' && Mat[0][2]=='x') || (Mat[1][0]=='x' && Mat[1][1]=='x' && Mat[1][2]=='x') || (Mat[2][0]=='x' && Mat[2][1]=='x' && Mat[2][2]=='x')){
	
printf("Bravo vous avez gagne !\n");

	i=11;

}
//colonnes
else if((Mat[0][0]=='x' && Mat[1][0]=='x' && Mat[2][0]=='x') || (Mat[0][1]=='x' && Mat[1][1]=='x' && Mat[2][1]=='x') || (Mat[0][2]=='x' && Mat[1][2]=='x' && Mat[2][2]=='x')){
	i=11;
	printf("Bravo vous avez gagné !\n");

}
else if((Mat[0][0]=='x' && Mat[1][1]=='x' && Mat[2][2]=='x') || (Mat[0][2]=='x' && Mat[1][1]=='x' && Mat[2][0]=='x')){
i=11;
printf("Bravo vous avez gagné !\n");

}
}

void WinnerO(){
	//lignes
if((Mat[0][0]=='O' && Mat[0][1]=='O' && Mat[0][2]=='O') || (Mat[1][0]=='O' && Mat[1][1]=='O' && Mat[1][2]=='O') || (Mat[2][0]=='O' && Mat[2][1]=='O' && Mat[2][2]=='O')){
printf("Bravo vous avez gagné !\n");
i=11;
}
//colonnes
else if((Mat[0][0]=='O' && Mat[1][0]=='O' && Mat[2][0]=='O') || (Mat[0][1]=='O' && Mat[1][1]=='O' && Mat[2][1]=='O') || (Mat[0][2]=='O' && Mat[1][2]=='O' && Mat[2][2]=='O')){
	printf("Bravo vous avez gagné !\n");
i=11;
}
else if((Mat[0][0]=='O' && Mat[1][1]=='O' && Mat[2][2]=='O') || (Mat[0][2]=='O' && Mat[1][1]=='O' && Mat[2][0]=='O')){
printf("Bravo vous avez gagné !\n");
i=11;
}
}
 
	
	
 main() {
for(j=0;j<5;j++){

 printf("le jeu du TicTacToe \n");
	printf("joueur 1 = X, joueur 2 = O \n");

 for(i=2;i<11;i++){
 	printf("choisisez une case \n");
(scanf("%s",&choix));
 Joue(choix,i);
 Affiche();
WinnerX();
WinnerO();
 }

for (row=0; row<3; row++){
        for(column=0; column<3; column++)
            Mat[row][column]='_';}
            
     }
}

 
 
