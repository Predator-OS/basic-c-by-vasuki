#include<stdio.h>
#include<stdlib.h>
int score;
void help()
{
   printf("Quiz: this game is simple and comprises only basic C.\nTotally there are 25 questions,based on which the score the given out for the player.");
   printf(" There is display of question with 4 options ie:\nWhat are the total number of bones in human body?\na)202\tb)308\tc)206\td)none of above");
   printf("If the answer chosen by the player is correct the score is added up, else it is deducted from his total.");
}
void start()
{
   static int count=1;
          int i=1; 
   while(i==1)
   {
	i=display(count,i);
	count++;
   }
}
int display(int qn,int i)
{
	char ans;
int m;
if(qn<=15)
{
        switch(qn)
		{
			case 1 : printf("Q1:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=1;
				 break; 
			case 2 : printf("\nQ2:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=1;
				 break;
			case 3 : printf("\nQ3:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=1;
				 break;
			case 4 : printf("\nQ4:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=1;
				 break;
			case 5 : printf("\nQ5:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=1;
				 break;
			case 6 : printf("\nQ6:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=1;
				 break;
			case 7 : printf("\nQ7:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=1;
				 break;
			case 8 : printf("\nQ8:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=1;
				 break;
			case 9 : printf("\nQ9:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=1;
				 break;
			case 10 : printf("\nQ10:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=1;
				 break;
			case 11 : printf("\nQ11:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=1;
				 break;
			case 12 : printf("\nQ12:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=1;
				 break;
			case 13 : printf("\nQ13:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=1;
				 break;
			case 14 : printf("\nQ14:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=1;
				 break;
			case 15 : printf("\nQ15:\na)\tb)\nc)\td)\n:");
                                 scanf(" %c",&ans);
                                 if(ans=='a')
                                 {
                                     printf("Correct");
                                     score+=10;
                                 }
                                 else
                                 {
                                     printf("answer is a");
                                     score-=10;
                                 }
				 i=0;
				 break;
		}
}
return i;
}
void scoreprint()
{
	FILE *f;
	char name[6];
	f = fopen("Score.quiz", "a");
	printf("Enter your name=\t");
	scanf("%s",name);
	fprintf(f,"%s\t\t%d",name,score);
	fclose(f);
}
 int main()
{
    int ch;
while(1)
{
    printf("Enter your choice\n1.start\t2.help\t3.exit\t4.score");
    scanf("%d",&ch);
    switch(ch)
      {
         case 1:start();break;
         case 2:help();break;
         case 3:exit(0);
         case 4:scoreprint();break;
         default:printf("enter a proper choice\n");
      }
}
    printf("\n");
    return 0;
}
