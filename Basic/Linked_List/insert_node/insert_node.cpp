#include<iostream>

//Define a node Class

class Node {
public:
	int data;
       	Node * nxt_addr;	       

	Node(int d){
		data = d;
		nxt_addr = NULL;
	}

};

void count_nodes(Node * c){
	int val {0};
	while(c != NULL){
		c = c->nxt_addr;
		val++;	
	}

	std::cout<<val<<"\n";
}

void printLL(Node* c){
	while(c != NULL){
		std::cout<<c->data<<"-->";
		c = c->nxt_addr;
	}
	std::cout<<'\n';
}

// INSERTION

Node* insert_node(Node * head, int new_data ){
	Node* new_node = new Node(new_data);
        
//	new_node->data = new_data;
	new_node->nxt_addr= head;
	
/*	
	while(c != NULL){
		c= c->nxt_addr;
		if(c == NULL){
			c->nxt_addr = new_node;
		}
	} */

	return new_node;
	
}

void insertMiddle(Node* head, int data, int pos){
	Node* c = head;
	pos--;
	while(pos>0){
		c = c->nxt_addr;
		pos--;
	}

	Node* new_node= new Node(data);
	new_node->nxt_addr = c->nxt_addr;
	c->nxt_addr = new_node;	
}

void insertTail(Node* head, int data){
	Node* c = head;
	while(c->nxt_addr != NULL){
		c= c->nxt_addr;
	}

	Node* new_node = new Node(data);
	new_node->nxt_addr = NULL;
	c->nxt_addr = new_node;
}

// SERACHING

bool recSearch(Node* head, int key){
	if(head == NULL){
		return false;
	}

	if(head->data == key){
		return true;
	} else {
		recSearch(head->nxt_addr, key);
	}
}

bool iterSearch(Node* head, int key){
	while(head != NULL){
		if(head->data == key){
			return true;
		} else {
			head = head->nxt_addr;
		}
	}

	return false;
}

int main(){
	Node* head = new Node(2);

	std::cout<<"Before 1st insertion, count: "<<'\n';
	count_nodes(head);
	printLL(head);
	head = insert_node(head, 4);

	std::cout<<"After 1st Insertion, count: "<<'\n';
	count_nodes(head);
	printLL(head);

	head = insert_node(head, 5);
	
	std::cout<<"After 2nd isntertion, count: "<<'\n';
		
	count_nodes(head);
	printLL(head);

	std::cout<<"Insert 3 after two pos"<<'\n';
	insertMiddle(head, 3, 2);
	printLL(head);

	std::cout<<"Insertion at tail"<<'\n';
	insertTail(head, 10);
	printLL(head);

	std::cout<<"Inserting at pos 2"<<'\n';
	insertMiddle(head, 70, 2);
	printLL(head);

	std::cout<<"69 in LL: "<<recSearch(head, 69)<<'\n';
	std::cout<<"5 in LL:"<<recSearch(head, 5)<<'\n';

	std::cout<<"79 in LL: "<<iterSearch(head, 79)<<'\n';
        std::cout<<"10 in LL:"<<iterSearch(head, 10)<<'\n';

	return 0;
}
