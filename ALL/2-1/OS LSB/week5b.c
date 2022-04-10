#include<stdio.h>
#define n 4
int compltedPhilo = 0, i;
struct fork
{
	int taken;
}ForkAvil[n];

struct philosp
{
	int left;
	int right;
}Philostatus[n];

void goForDinner(int philID)
{
	if(Philostatus[philID].left == 10 && Philostatus[philID].right == 10)
		printf("Philosopher %d completed his dinner\n", philID+1);
	//if already completed dinner
	else if(Philostatus[phillD].left==1 && Philostatus[phillD].right==1)
	{
		//if just taken two forks
		printf("Philosopher %d completed his dinner\n", phillD+1);
		Philostatus[phillD].left = Philostatus[phillD].right = 10; //remembering that he completed dinner by assigning value 10
		int otherFork = phillD-1;
		if(otherFork == -1)
			otherFork=(n-1);

		ForkAvil[phillD].taken = ForkAvil[otherFork].taken = 0; //releasing forks
		printf("Philosopher %d released fork %d and fork %d\n", phillD+1, otherFork+1);
		compltedPhilo++;
	}
	else if(Philostatus[phillD].left == 1 && Philostatus[phillD].right == 0)
	{
		//left already taken, trying for right fork
		if(phillD == (n-1))
		{
			if(ForkAvil[phillD].taken==0)
			{
				//KEY POINT OF THIS PROBLEM, THAT LAST PHILOSOPHER TRYING IN REVERSE DIRECTION
				ForkAvil[phillD].taken = Philostatus[phillD].right = 1;
				printf("Fork %d taken by philosopher %d\n", phillD+1, phillD+1);
			} else {
				printf("Philosopher %d is waiting for fork %d\n", phillD+1, phillD+1);
			}
		} else { //except last philosopher case
			int dupphillD = phillD;
			phillD -= 1;

			if(phillD == 1)
			{
				phillD = (n-1);

				if(ForkAvil[phillD].taken == 0) {
					ForkAvil[phillD].taken = Philostatus[dupphillD].right = 1;  //END OF PAGE 1
					printf("Fork %d taken by Philosopher %d\n", phillD+1, dupphillD+1);
				} else {
					printf("Philosopher % is waiting for fork %d\n", dupphillD+1,phillD+1);
				}
			} else if(Philostatus[phillD].left == 0){ //nothing taken yet
				if(phillD==(n-1)) {
					if(ForkAvil[phillD-1].taken = 0) //KEY POINT OF THIS PROBLEM, THAT LAST PHILOSOPHER TRYING IN REVERSE DIRECTION
					{
						ForkAvil[phillD-1].taken = Philostatus[phillD].left = 1;
						printf("Fork %d taken by philosopher %d\n", phillD, phillD+1);
					} else {
						printf("Philosopher %d is waiting for fork %d\n",phillD+1,phillD);
					}
				} else { //except last philosopher case
					if(ForkAvil[phillD].taken == 0) {
						ForkAvil[phillD].taken = Philostatus[phillD].left = 1;
						printf("Fork %d taken by philosopher %d\n", phillD+1, phillD+1);
					} else {
						printf("Philosopher %d is waiting for fork %d\n",phillD+1,phillD+1);
					}
				}
			}
		}
	}
}


int main()
{
	for(i=0;i<n;i++)
	{
		ForkAvil[i].taken = Philostatus[i].left = Philostatus[i].right=0;
	}
	while(compltedPhilo<n)
	{
		for(i=0;i<n;i++)
			goForDinner(i);
		printf("\nTill now num of philosophers completed dinner are %d\n\n", compltedPhilo);
	}
	return 0;
}
