#include<iostream>
using namespace std;

struct node {
	int data;
	node *next;
};

class List{
private:
	node *head, *tail;
public:
	int count = 0;

	List(){
		head = NULL;
		tail = NULL;
	}

	void add(int n){
		node *tmp = new node;
		tmp->data = n;
		tmp->next = NULL;
		count++;
		if(head == NULL){
			head = tmp;
			tail = tmp;
		} else {
			tail->next = tmp;
			tail = tail->next;
		}
	}

	void display(){
		node *tmp;
		tmp = head;
		while(tmp != NULL){
			cout<< tmp->data << endl;
			tmp = tmp->next;
		}
		cout<<"Counter : "<<count;
	}

	void insert_after(int pos, int info){
		cout<<"Insertion After : @ - ";
		node *in = new node;
		node *tmpp = new node;		
		
		in->data = info;
		tmpp = head;
		cout<< tmpp->data <<endl;
		while(tmpp->next != NULL){
			
			if(tmpp->data == pos){
				in->next = tmpp->next; 
				tmpp->next = in;
				count++;
			} 
			tmpp = tmpp->next;
		}
	}

	void dlte(int elt){
		node *del = new node;
		node *prev = new node;
		del = head;
		int cc = count;
		while(del->next != NULL){
			prev = del;
			for(int i = 0;i < count ; i++){
				
				if(del->data == elt){
					prev->next = del->next;
					count--;
				}
				del = del->next;	
			}		
		}
	}
};



int main(void){
	List a;

	a.add(2); 
	a.add(34); 
	a.add(233);	
	a.display();

	a.insert_after(1,12); 
	
	a.dlte(34);
	a.display();
	return 0;
}