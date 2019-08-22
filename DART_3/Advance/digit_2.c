#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
struct digit * readNumber();
void printNumber(struct digit *);
void freeNumber(struct digit * );
int divisibleByThree(struct digit * d );
struct digit * searchNumber(struct digit * start, int number );

int main(void) {
    //! stack = showMemory(start=65520)
    struct digit *start, * ptr;
	int searchNum = 5;
    printf("Please enter a number: ");
	start = readNumber();
	
	printNumber(start);
    if(divisibleByThree(start))
		printf("is divisable by 3.\n");
	else
		printf("is not divisable.\n");
	
	ptr = searchNumber(start, searchNum);
	if(ptr != NULL){
		printf("Found digit %d at location %p.\n", searchNum, ptr);
	}else{
		printf("Digit %d not found.\n", searchNum);
	}

	freeNumber(start);

    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d ", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}
void freeNumber(struct digit * start){
	struct digit * ptr = start;
	struct digit * tmp;
	while(ptr != NULL){
		tmp = ptr->next;
    	free(ptr);
    	ptr = tmp;
    }
}
struct digit * readNumber(){
	char c;
	int d;
	struct digit * start, * end, *newptr;
	start = NULL;
	scanf("%c", &c);
	while( c !=  '\n'){
		d = c - 48;
		newptr = createDigit(d);
		if( start == NULL){
			start = newptr;
			end = start;
		}else{
			end = append(end, newptr);
		}
		scanf("%c", &c);
	
	}
	return start;
}
int divisibleByThree(struct digit * d ){
	struct digit * ptr = d;
	int sum=0, div = 0;
	while( ptr != NULL ){
		sum += ptr->num;
		ptr = ptr->next;
	}
	div = sum % 3;
	if( div == 0 )
		return 1;
	else
		return 0;
}
struct digit * searchNumber(struct digit * start, int number){
	struct digit * ptr = start;
	while((ptr != NULL ) && (ptr->num != number)){
		ptr = ptr->next;
	}
	return ptr;
}
