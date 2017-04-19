#include <iostream>

using namespace std;

struct elem{
	int key;
	elem *next;
} *start = NULL, *tmp, *start2 = NULL;

/*void add(int n)
{
	elem *p = start;
	start = new elem;
	start -> key = n;
	start -> key = n;
	start -> next = p;
}*/

/*void add(elem* node, int n) 
{ 
	elem *p = new elem; 
	p->key = n; 
	p->next = NULL; 
	node->next = p; 
}*/

void add(elem* &node, int n) { 
	elem* p = node; 
	node = new elem; 
	node->key = n; 
	node->next = p; 
}

void list(elem* &node)
{
	elem *p = node;
	if(node)
		cout << "The list is ->\n";
	else
		cout << "The list is empty!\n";
	while(p){
		cout << p -> key << "	";
		p = p -> next;
	}
	cout << "\n\n";
}

int exclude(int value)
{
	int counter = 1;
	tmp = start;
	while(tmp != NULL){
		if(value != counter)
			add(start2,tmp -> key);
		
		tmp = tmp -> next;
		counter++;
	}
}


int main()
{
	int k, num,m;
	do{
		cout << "\n 	MENU\n";
		cout << "1-Add from beginning\n";
		cout << "2-Show the list\n";
		cout <<  "3- Exclude\n"; 
		cin >> m;	
		
		switch(m){
			case 1:
				cout << "Enter num:\n";
				cin >> num;
				add(start,num);list(start);break;
			case 2: 
				cout << "\n"; list(start); break;
			case 3:
				cout << "Enter:\n";
				cin >> num;
				exclude(num);list(start2); break;
		}

	}while(m != 4);
}
