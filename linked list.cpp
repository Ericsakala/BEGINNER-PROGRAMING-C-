#include <iostream>
using namespace std;
//creating a node class
class Node{

	public:

	int value;
	Node*next;
};
//inserting a node at the begining of the linked list

void insertnode_at_begining(Node**head,int value1){
  Node* newnode=new Node();

  newnode->value=value1;
   newnode->next=*head;
   *head=newnode;




}
//inserting the element at the end of the liked list
void insertAtTheEnd(Node**head,int newValue){

Node* newNode= new Node();
newNode->value=newValue;
newNode->next=NULL;

if(*head==NULL){
    *head==newNode;
    return;

}

Node*last=*head;

while(last->next!=NULL){
last=last->next;
}


last->next=newNode;
}

//inserting a node at the specific location
void insert_at_position(Node*before,int myvalue){
    if(before==NULL){
        cout<< "the previous node must not be empty\n";
        return;
    }
    Node* newNode=new Node();
    newNode->value=myvalue;
    newNode->next=before;
    before->next=newNode;

}
//the function that print the values of list
void print(Node*head){

while(head!=NULL){
    cout<<head->value<<endl;
    head=head->next;
}

}
int main(){
	//creating nodes;
	Node* head=new Node();
	Node* second=new Node();
	Node* third=new Node();
	Node* fourth=new Node();
	Node* fith=new Node();
	//linking the nodes to form a list;

	head->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fith;
	fith->next=NULL;

	head->value=7;
	second->value=3;
	third->value=89;
	fourth->value=23;
	fith->value=12;

	insertnode_at_begining(&head,1);
	insertAtTheEnd(&head,100);

	print(head);
	int searchnum;
	cout<<"enter the number you want to search from the list\n";
	cin>>searchnum;
	while(head!=NULL){
		if(head->value==searchnum){

		cout<<"the value "<<head->value<<" is found in the list  "<<endl;;
		break;
		}


		head=head->next;
	}

	return 0;
}
