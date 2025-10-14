#include <stdio.h>
#include <stdlib.h>

struct student_record {  
              int   id;
              char  name[20];
              int   age;
              struct student_record *next;
            };

// Each node in the link list contains a student record

typedef struct student_record node;

// Delete a student record by Id
void  delete (node **head) 
{ 
    int  id_no; 
    node  *curr, *prev; 
    
    printf ("\nDelete for id :"); 
    scanf ("%d", &id_no); 

    curr = *head;
    prev = *head; 
    if  (curr->id == id_no)  {        
        /* Delete the first element */ 
        *head = curr->next;   
        free (curr); 
    } else  {
        while  ((curr != NULL) && (curr->id != id_no)) { 
            prev = curr; 
            curr  = curr->next; 
        }      

        if  (curr == NULL)      /* Element not found */ 
			printf ("\nNo match :: deletion failed");   
        else if (curr->id == id_no)  {     /* Delete any other element */    
			prev->next  =  curr->next; 
			free (curr); 
		} 
    }
} 

/* Search for student records by age   
*  Prompt the user for an integer age. 
*  Search student records in the linked list with an age
*  with value age.
*  If a record is found print the Id, Name and Age 
*          of the student
*  If no record is found print No Match  
*/
void search (node *head)
{
    int  age;   // user inputted id no to search for
    node  *curr; 
    
   
   /*  COMPLETE  */
 
 
 
} 

/* Insert a new student record ordered by Id */
void insert (node **head) 
{ 
    node *curr, *prev, *new; 	
    new = (node *) malloc(sizeof(node)); 

    // Get the information from the user
	printf("Enter id : ");
    scanf ("%d", &new->id);
	printf("Enter name : ");
    scanf ("%s",new->name);
	printf("Enter age : ");
	scanf ("%d", &new->age);
	printf("\n");
	
    curr = *head;
    prev =*head; 

	if (curr == NULL) {   /*the list is empty */
		new->next = NULL;
		*head= new;
		return;
	}

    if (curr->id > new->id) {      /* At the beginning */  
        new->next = curr; 
        *head = new; 
    } 
	else {
	while ((curr != NULL) && (curr->id <= new->id)){ 
            prev = curr; 
            curr = curr->next; 
      }      
        if  (curr == NULL) {   	/* At the end */ 
            prev->next = new;    
            new->next = NULL;     
        } else {				/* In the middle */ 
            prev->next = new; 
            new->next = curr; 
        } 
    }
} 

/* Display all student records */
void display (node *head)
{
	int  count = 1;
	node  *p;    
	p = head;
	if (head == NULL) {
		printf("The List is empty. \n");
	} else {
		printf("Displaying Students\n");
	}
  
	while (p != NULL){
		printf ("\nId: %d \tName: %s \tAge: %d", 
			p->id, p->name, p->age);
		count++;
		p = p->next;      
	}
	printf ("\n");
}

// Create the initial linked list of student records
node * create_list() 
{ 
    int  k, n; 
    node *head; 
	
    printf("Create the Initial List of Students");
    printf  ("\nNumber of students: "); 
    scanf ("%d", &n); 

    for  (k=0; k<n; k++) 
    { 
        if (k == 0) {  // an empty list so create the head
			head = (node *) malloc(sizeof(node)); 

			printf("Enter id : ");
			scanf ("%d", &head->id);
			printf("Enter name : ");
			scanf ("%s",head->name);
			printf("Enter age : ");
			scanf ("%d", &head->age);
			printf("\n");
			head->next  =  NULL;
		} else {  // Not the head of the list
			// call insert to add move students
			insert(&head);
		}
    }      
    return (head);
} 


// User input menu
void displayMenu() {
    printf("\n---- Menu for Student List ----\n");
    printf("| 1. Insert a new record      |\n");
    printf("| 2. Delete a record          |\n");
    printf("| 3. Search for record by age |\n");
	printf("| 4. Display all records      |\n");
    printf("| 5. Exit                     |\n");
	printf("-------------------------------\n");
    printf("Enter your choice: ");
}


int main() {
    int choice, element, i;
	node *head;
	head = create_list();
	
	//Keep displaying menu until user selects exit
    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
				insert (&head);
                break;

            case 2:
				delete(&head);
                break;

            case 3:
				/* COMPLETE */

            case 4:
				display(head);
                break;
				
            case 5:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please select a valid option.\n");
                break;
        }
    }
    return 0;
}

