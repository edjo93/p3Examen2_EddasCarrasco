#ifndef NODE_CPP
#define NODE_CPP
	#include<string>
	using namespace std;
	class Node{
		private:
			string value;
			Node* next_node;
		public:
			Node(string value="",Node* next_node=NULL){
				this->value=value;	
				this->next_node=next_node;
			}	
			void setValue(string value){
				this->value=value;
			}
			string getValue(){
				return value;
			}
			void setNext_node(Node* next_node){
				this->next_node=next_node;
			}
			Node* getNext_node(){
				return next_node;
			}
			~Node(){
				
			}
	};
#endif
