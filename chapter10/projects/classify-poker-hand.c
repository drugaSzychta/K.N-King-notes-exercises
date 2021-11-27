
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_CARDS 5
#define NUM_RANKS 13
#define NUM_SUITS 4

/*external variables*/
//read data and analyze
int rank_array[NUM_RANKS];
int suit_array[NUM_SUITS];
//analyze data and print
bool straight, flush, four, three;
int pairs; //can be 0 1 or 2

/*prototypes*/
void receive_a_deck();
void analyze_deck();
void print_result();

int main(void){
	
	for(;;){
		receive_a_deck();
		analyze_deck();
		print_result();
	}
	return 0;
}

void receive_a_deck(){
/******************************************************
 *receive_a_deck() Reads the cards into external 
 * variables rank_array[] and suit_array[], check if for
 * bad cards and duplicated cards
 ******************************************************/
	int card_exists[NUM_RANKS][NUM_SUITS];
	char ch , suit_ch, rank_ch;
	int suit, rank;
	bool bad_card = false;
	int cards_read = 0;
	
	/*arrays initialization*/
	for(int i=0;i<NUM_RANKS;i++){
		rank_array[i]=0;
		for(int j=0;j<NUM_SUITS;j++){
			card_exists[i][j] = false;
			suit_array[j]=0;
		}
	}
	
	while(cards_read<NUM_CARDS){
		
		printf("Type a rank and suit NUMBERSUITF forman for example 9s. Number of cards in a deck: %d\n",cards_read);
		rank_ch = getchar();
		switch(rank_ch){
			case '0': exit(EXIT_SUCCESS);
			case '2': rank = 0; break;
			case '3': rank = 1; break;
			case '4': rank = 2; break;
			case '5': rank = 3; break;
			case '6': rank = 4; break;
			case '7': rank = 5; break;
			case '8': rank = 6; break;
			case '9': rank = 7; break;
			case 't': case 'T': rank = 8; break;
			case 'w': case 'W': rank = 9; break;
			case 'd': case 'D': rank = 10; break;
			case 'k': case 'K': rank = 11; break;
			case 'a': case 'A': rank = 12; break;
			default: bad_card = true;
		}
		suit_ch = getchar();
		switch(suit_ch){
			case 's': case 'S': suit=0; break;
			case 'k': case 'K': suit=1; break;
			case 't': case 'T': suit=2; break;
			case 'p': case 'P': suit=3; break;
			default: bad_card = true;
		}
		while((ch = getchar()) != '\n')
			if(ch !=' ') bad_card = true;
		
		if(bad_card)
			printf("Bad card, ignored\n");
		else if(card_exists[rank][suit])
			printf("Duplicate card, ignored\n");
		else{
			card_exists[rank][suit] = true;
			rank_array[rank]++;
			suit_array[suit]++;
			cards_read++;
		}
		
		
	}

}

void analyze_deck(){
	flush=false;
	straight=false;
	four=false;
	three=false;
	pairs=0;
	
/*Function receive an input into*/
	for(int i=0;i<NUM_RANKS;i++)
	{
		if(rank_array[i]==NUM_CARDS-1)
			four=true;
		else if(rank_array[i]==NUM_CARDS-2)
			three=true;
		else if(rank_array[i]==NUM_CARDS-3)
			pairs++;
	}
	
	for(int i=0;i<NUM_SUITS && suit_array[i]==NUM_CARDS;i++){
			flush=true;
	}
	//straight
	for(int i=0;i<NUM_RANKS;i++)
		if(rank_array[i]==1 && i+NUM_CARDS-1<NUM_RANKS && 
		rank_array[i]+ rank_array[i+1]+ rank_array[i+2]+ rank_array[i+3]+ rank_array[i+4]==5)
				straight = true;
}

void print_result(){
/*Function receive an input into*/
	if(flush && straight ) printf("We have straight flush!\n");
	else if(four) printf("We have four!\n");
	else if(three && pairs) printf("We have full house!\n");
	else if(flush) printf("We have flush!\n");
	else if(straight) printf("We have straight!\n");
	else if(three) printf("We have three!\n");
	else if(pairs==2) printf("We have two pairs!\n");
	else if(pairs==1) printf("We have one pair!\n");
	else printf("We have a high card!\n");
	char a=0;
	printf("Press enter to end program\n");
	scanf("%c",&a);
	exit(0);
}
