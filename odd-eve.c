#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void intro();       //normal
void batfirst();
void ballfirst();
int main (){
	intro();
	srand(time(0));
	char coin,bf,you;
	int toss = rand()%2 ;
		if (toss == 0){
		coin ='T';
	}else {
		coin='H';
	} 
   printf ("CHOOSE H FOR HEADS ,T FOR TAILS \n");
   scanf ("%c",&you);
   fflush(stdin);
   if (you==coin){
   	  printf ("YOU WON THE TOSS ,CHOOSE B FOR BAT , F FOR FIELD \n");
   	  scanf (" %c",&bf);
   fflush(stdin);
   	 if (bf== 'B'){
		printf ("YOU CHOOSE TO BAT FIRST \n");
   	  	batfirst();
   }else{
   			printf ("YOU CHOOSE TO BALL FIRST \n");
   	 ballfirst();
   }
}else {
	printf ("YOU HAVE LOST THE TOSS , NOW THE COMPUTER SHALL CHOOSE. \n");
	int ctoss=rand()%2;
	if (ctoss==0){
		printf ("COMPUTER CHOOSE TO BAT FIRST \n");
				ballfirst();
		
	}else{
		printf ("COMPUTER CHOOSE TO BAll FIRST \n");
				batfirst();
	}
}
	return 0;
}
void intro (){
	printf ("                                                                                              ODD-EVE 2.0 \n");
	printf ("                                                   DELVE DEEP INTO YOUR NOSTALGIA ,AND PLAY THE LEGENDARY GAME OF ODD-EVE WITH THE COMPUTER !!! \n\n\n\n");
    printf ("RULES :-                                                                  \n\n");
    printf ("1)INPUT LETTERS IN CAPITAL ONLY .\n\n");
    printf ("2)WHILE BATTING OR BALLING INPUT NUMBER FROM 1 TO 10 . \n\n");
    printf ("3)IF USER AND COMPUTER ENTER SAME NUMBER; BATSMAN IS OUT . \n\n");
    printf ("4)SCORE MORE THAN THE COMPUTER AND WIN. \n\n\n\n");
	}
void batfirst(){
	int wickets,i,sum=0,sumtotal1=0,sumtotal2=0,comp,user,a,d,e,f=0,sumperover=0;  //BATFIRST
printf ("ENTER THE NUMBER OF WICKETS FOR THE MATCH.\n");
scanf ("%d",&wickets);
int statsuser[wickets],statscomp[wickets];
srand(time(0)); 
printf ("                                                                                               INNINGS 1 \n");
     a=0;
 for (i=0;i<wickets;i++){
     sum=0;
     f=0;
     printf ("BAT FOR WICKET %d \n",i+1);
     do {
         comp=rand()%10 +1;     
         printf (" YOU : ");
         scanf ("%d",&user);
            if (user>10 ||user<1){
         	printf ("YOU HAVE ENTERED AN INVALID NUMBER .PLEASE RE-ENTER . \n");
         	continue;
		 }
         printf("COMPUTER  : %d\n",comp  );
       sum=sum+user;
      a++;
      if (user==comp){
      	sumperover+=0;
	  }else {
	  	sumperover+=user;
	  }
       if ( a%6 == 0 ){
	     printf ("OVER %d COMPLETED \n\n",a/6);
	     printf ("RUNS SCORED IN OVER %d ARE %d \n\n",a/6,sumperover);
	     sumperover=0;
	 }
	 f++;
     }while (user!=comp);
     printf ("WICKET %d DOWN \n",i+1);
      if( f == 1 ){
     	printf ("HAHAHA ,DUCK OUT !!\n");
	 }
	         printf ("RUNS SCORED BY WICKET %d = %d .\n",i+1,sum-user);
      statsuser[i]=sum-user;
     sumtotal1+=sum-user;
      }
printf ("YOU HAVE SCORED %d RUNS ON %d WICKETS.\n COMPUTER REQUIRES %d RUNS TO WIN.\n",sumtotal1 ,wickets,sumtotal1 +1 );
printf ("                                                                                                 INNINGS 2 \n");
      a=0;
      sumperover=0;
 for (i=0;i<wickets;i++){
     sum=0;
     f=0;
     printf ("BALL TO WICKET %d \n",i+1);
     do {
         comp=rand()%10 +1;     
         printf (" YOU : ");
         scanf ("%d",&user);
            if (user>10 ||user<1){
         	printf ("YOU HAVE ENTERED AN INVALID NUMBER .PLEASE RE-ENTER . \n");
         	continue;
		 }
         printf("COMPUTER  : %d\n",comp  );
       sum=sum+comp;
         a++;
           if (user==comp){
      	sumperover+=0;
	  }else {
	  	sumperover+=comp;
	  } 
      sumtotal2+=comp;
	   if ( a%6 == 0 ){
	     printf ("OVER %d COMPLETED \n\n",a/6);
	     printf ("RUNS SCORED IN OVER %d ARE %d \n\n",a/6,sumperover);
	    printf ("%d RUNS ARE REQUIRED TO WIN THE MATCH  \n\n",sumtotal1-sumtotal2+1);
	     sumperover=0;
	 }
          if ( a%6 == 0 ){
	     printf ("OVER %d COMPLETED \n",a/6);
	 }
        if (user==comp){
       	sumtotal2-=comp;
		   }
       if ( sumtotal2>sumtotal1){
         statscomp[i]=sum;
         printf ("RUNS SCORED BY WICKET %d = %d .\n",i+1,sum);
	printf ("                                                                                          ALAS , YOU LOST !!!! . \n");
	printf ("                                                                                        BETTER LUCK NEXT TIME!!!!\n");
		printf ("COMPUTER HAS WON THE MATCH BY %d WICKETS \n",wickets-i );
	              break;
       } f++;
     }while (user!=comp );
        if ( sumtotal2>sumtotal1){
                      break;
       }
     printf ("WICKET %d DOWN \n",i+1); 
      if( f == 1 ){
     	printf ("HAHAHA ,DUCK OUT\n");
	 }
	     printf ("RUNS SCORED BY WICKET %d = %d .\n",i+1,sum-comp);
	     if (user == comp){
     statscomp[i]=sum-comp;
    }
	 }
 printf ("COMPUTER HAS SCORED %d RUNS WITH %d WICKETS LOST .\n",sumtotal2 ,i );
 if(sumtotal1>sumtotal2) {
	   printf ("                                                                                      YOU WON!!!!\n\n");
printf ("                                                                              YOU HAVE WON THE MATCH BY %d RUNS. \n\n\n" ,sumtotal1-sumtotal2);
} 
if (sumtotal1==sumtotal2){
	printf ("OOPS ,THE MATCH HAS TIED !! \n\n");
}
     printf ("                                                                                       MATCH STATISTICS \n\n");
     printf ("                                                                                             INNINGS-1     \n");  
 for (d=0;d<wickets;d++){
 	printf("RUNS SCORED BY WICKET %d OF USER == %d \n",d+1,statsuser[d]); 
 }
     printf ("                                                                                             INNINGS-2     \n");
     if (i==wickets){
     	for (e=0;e<wickets;e++){
    printf("RUNS SCORED BY WICKET %d OF COMPUTER == %d \n",e+1,statscomp[e]);
	 }
 } else { 
  for (e=0;e<i+1;e++){
    printf("RUNS SCORED BY WICKET %d OF COMP == %d \n",e+1,statscomp[e]);
	 }
	 for (e=i+1;e<wickets;e++){
	 	printf ("WICKET %d DIDN'T GET TO BAT \n",e+1);
	 }
  	 }
}
void ballfirst(){
	int wickets,i,sum=0,sumtotal1=0,sumtotal2=0,comp,user,a,d,e,f=0,sumperover=0;
printf ("ENTER THE NUMBER OF WICKETS FOR THE MATCH.\n");
scanf ("%d",&wickets);
	int statsuser[wickets],statscomp[wickets];
srand(time(0)); 
printf ("                                                                                               INNINGS 1 \n");
     a=0;
 for (i=0;i<wickets;i++){
     sum=0;
     f=0;
     printf ("BALL TO WICKET %d \n",i+1);
     do {
         comp=rand()%10 +1;     
         printf (" YOU : ");
         scanf ("%d",&user);
            if (user>10 ||user<1){
         	printf ("YOU HAVE ENTERED AN INVALID NUMBER .PLEASE RE-ENTER . \n");
         	continue;
		 }
         printf("COMPUTER  : %d\n",comp  );
       sum=sum+comp;
      a++;
       if (user==comp){
      	sumperover+=0;
	  }else {
	  	sumperover+=comp;
	  }
       if ( a%6 == 0 ){
	     printf ("OVER %d COMPLETED \n\n",a/6);
	     printf ("RUNS SCORED IN OVER %d ARE %d \n\n",a/6,sumperover);
	     sumperover=0;
	 }
	 f++;
     }while (user!=comp);
     printf ("WICKET %d DOWN \n",i+1);
      if( f == 1 ){
     	printf ("HAHAHA ,DUCK OUT\n");
	 }
	         printf ("RUNS SCORED BY WICKET %d = %d .\n",i+1,sum-comp);
      statscomp[i]=sum-comp;
     sumtotal1+=(sum-comp);
      }
printf ("COMPUTER HAS SCORED %d RUNS ON %d WICKETS.\nYOU REQUIRE %d RUNS TO WIN.\n",sumtotal1 ,wickets,sumtotal1 +1 );
printf ("                                                                                                 INNINGS 2 \n");
      a=0;
      sumperover=0;
 for (i=0;i<wickets;i++){
     sum=0;
     f=0;
     printf ("BAT FOR WICKET %d \n",i+1);
     do {
         comp=rand()%10 +1;     
         printf (" YOU : ");
         scanf ("%d",&user);
            if (user>10 ||user<1){
         	printf ("YOU HAVE ENTERED AN INVALID NUMBER .PLEASE RE-ENTER . \n");
         	continue;
		 }
         printf("COMPUTER  : %d\n",comp  );
       sum=sum+user;
         a++;
         sumtotal2+=user;
		  if (user==comp){
      	sumperover+=0;
	  }else {
	  	sumperover+=user;
	  }  
       if ( a%6 == 0 ){
	     printf ("OVER %d COMPLETED \n\n",a/6);
	     printf ("RUNS SCORED IN OVER %d ARE %d \n\n",a/6,sumperover);
	   printf ("%d RUNS ARE REQUIRED TO WIN THE MATCH  \n\n",sumtotal1-sumtotal2+1);
	     sumperover=0;
	 }
        if (user==comp){
       	sumtotal2-=user;
		   }
       if ( sumtotal2>sumtotal1){
         statsuser[i]=sum;
         printf ("RUNS SCORED BY WICKET %d = %d .\n",i+1,sum);
		   printf ("                                                                                      YOU WON!!!!\n\n");
printf ("                                                                                YOU HAVE WON THE MATCH BY %d WICKETS \n",wickets-i );
              break;
       } f++;
     }while (user!=comp );
        if ( sumtotal2>sumtotal1){
                      break;
       }
     printf ("WICKET %d DOWN \n",i+1); 
      if( f == 1 ){
     	printf ("HAHAHA ,DUCK OUT\n");
	 }
	     printf ("RUNS SCORED BY WICKET %d = %d .\n",i+1,sum-user);
	     if (user == comp){
     statsuser[i]=sum-user;
    }
 }
 printf ("YOU HAVE SCORED %d RUNS WITH %d WICKETS LOST .\n",sumtotal2 ,i );
 if(sumtotal1>sumtotal2) {
	printf ("                                                                                          ALAS , YOU LOST !!!! . \n");
	printf ("                                                                                        BETTER LUCK NEXT TIME!!!!\n");
		printf ("COMPUTER HAS WON BY %d RUNS. \n\n\n" ,sumtotal1-sumtotal2);
}  
if (sumtotal1==sumtotal2){
	printf ("OOPS ,THE MATCH HAS TIED !! \n\n");
}
     printf ("                                                                                       MATCH STATISTICS \n\n");
     printf ("                                                                                             INNINGS-1     \n");  
 for (d=0;d<wickets;d++){
 	printf("RUNS SCORED BY WICKET %d OF COMPUTER == %d \n",d+1,statscomp[d]); 
 }
     printf ("                                                                                             INNINGS-2     \n");
     if (i==wickets){
     	for (e=0;e<wickets;e++){
    printf("RUNS SCORED BY WICKET %d OF USER == %d \n",e+1,statsuser[e]);
	 }
 } else { 
  for (e=0;e<i+1;e++){
    printf("RUNS SCORED BY WICKET %d OF USER == %d \n",e+1,statsuser[e]);
	 }
	 for (e=i+1;e<wickets;e++){
	 	printf ("WICKET %d DIDN'T GET TO BAT \n",e+1);
	 }
  	 }
}
