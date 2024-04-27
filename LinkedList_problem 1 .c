#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	char name[20];
	struct node *next;
};

void insert_cities (char city[] , struct node **start){
	
	struct node *new , *temp ;
	new = (struct node *) malloc (sizeof(struct node));
	strcpy (new -> name , city);
	new -> next = NULL ;
	
	// if start = null then we store new value in start
	if (*start == NULL){
		 *start = new  ;
	}
	// else temp node , start ke equal 
	else {
	   
		// ham dekhenge har node ko jab tak node ke next me null na ho 
		temp = *start ;
		
		while (temp -> next != NULL){
		   
			temp = temp -> next; 
		} // now after condition end , we got at last node then we store new node element into temp node
		temp -> next = new ;
	}
	
}

void showing_element ( struct node *start){
	
	while (start){
			printf ("%s \n",start -> name);
			start = start -> next ; 
		}
}
int main (){
	struct node *start = NULL;
	
	insert_cities ("Delhi" , &start);
	insert_cities ("Indore" , &start);
	insert_cities ("Pune" , &start);
	insert_cities ("Ujjain" , &start);
	insert_cities ("Surat" , &start);
	insert_cities ("San Fransisco" , &start);
	insert_cities ("Lucknow" , &start);
	
	
	// printing the element list
	showing_element(start);
}

