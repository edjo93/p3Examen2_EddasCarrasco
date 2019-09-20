#ifndef PILA_CPP
#define PILA_CPP
	#include"Node.cpp"
	#include<string>
	using namespace std;
	class Pila{
		private:
			Node*head;
		public:
			pila(){
				head=NULL;
			}
			void push(string valor){
				Node*temp=new Node(valor);
				temp->setNext_node(head);
				head=temp;
			}
			Node* pop(){
				Node*temp=head;
				head=head->getNext_node();//head avanza
				return temp;
			}
			Node* top(){
				return head;
			}
			bool isEmpty(){
				return head==NULL;
			}
			~Pila(){
				
			}
	};
#endif
