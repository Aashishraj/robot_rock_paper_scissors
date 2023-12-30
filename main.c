// C program for the above approach
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void do_count_down(){
	printf("You see all my fingers \n");
}

void scissors(){
	printf("--------------It is scissors bitch _i_------------------\n");
}

void rock(){
	printf("--------------You have been fucking stoned!-------------\n");
}

void paper(){
	printf("--------------I hope you're wet ;)----------------------\n");
}

void play(){
	printf("in play \n");
	// Stores the random number
	int n;

	// Chooses the random number
	// every time
	srand(time(NULL));

	// Make the random number less
	// than 100, divided it by 100
	int randi = rand()%10;
	printf("randi value %d \n", randi);
	n = randi % 3;
	printf("n value %d \n", n);
    switch (n) {
        case 0:
        	rock();
            break;
 
        case 1:
        	paper();
            break;
 
        case 2:
        	scissors();
            break;
    }

    sleep(3);

    do_count_down();
	do_count_down();    
}

// Driver Code
int main()
{
	printf("before while loop \n");
	while(1){
		printf("hello \n");
		// break;
		play();
		sleep(10);
	}

	return 0;
}
