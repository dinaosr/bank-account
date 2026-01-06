#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int candidates,voters,i,j,vote,*vote_count,winner_candidates=0,max_vote=-1;

printf("enter the candidates:");
scanf("%d",&candidates);
printf("enter the voters:");
scanf("%d",&voters);

for(i=0;i<candidates;i++)
{
vote_count[i]=0;
}

for(j=1;j<=voters;j++)
{
	printf("enter the number of your candidates:");
	scanf("%d",&vote);
	
	if(vote>=1 && vote<=candidates)
	{
	vote_count[vote-1]++;
	}
	else{
		printf("error");
		}
}
		
for(i=0;i<candidates;i++)
{
    if(vote_count[i]>max_vote)
	{
	    max_vote=vote_count[i];
	    winner_candidates=i+1;	
	}
}
printf("the winner is candidate number %d votes.",winner_candidates , max_vote);
	return 0;
}