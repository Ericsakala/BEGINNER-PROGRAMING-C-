#include <iostream>
#include <vector>
using namespace std;
class Node{
	public:
		int num;
		Node*next;
};
struct mynode{
int leftnode;
mynode*next;
int rightnode;
mynode*next;

	
};
void printer(Node*a){
	while(a!=NULL){
	
	cout<<a->num<<endl;
	a=a->next;
}
}

int main(){
Node*head=new Node();	
Node*first=new Node();	
	Node*second=new Node();
	Node*third=new Node();
head->num=5;
head->next=second;	
second->num=2;
second->next=third;	
	third->num=1;
third->next=NULL;
printer(head);
	


	return 0;
}