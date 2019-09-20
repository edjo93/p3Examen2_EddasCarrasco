//main
#include<iostream>
#include"Node.cpp"
#include"Pila.cpp"
#include<cstdlib>
#include<sstream>
#include<string>
using namespace std;

int main(){
	char opcionMenu;
	Pila*pila=new Pila();//creamos una pila
	int acumulador;
	string value;
	string temp;
	string cadena;
	stringstream ss;
	string str_int;//int->string
	do {
		cout<<"\n-- opciones --\n1-pedir cadena\n2-salir\n?:";
		cin>>opcionMenu;
		switch(opcionMenu){
			case'1':
				cout<<"ingrese una cadena: ";
				cin>>cadena;
				//la cadena debe ser procesada
				value;//servira para pasar el cadena.at(n) a tipo string
				for(int i=0;i<cadena.size();i++){
					value="";	
					value+=cadena.at(i);
					pila->push(value);	
				}
				
				/*
				
				*/
				//repetir hasta que no haya mas que operar
				while(pila->top()->getNext_node()!=NULL){
					//numero-operador-numero
					// 3 pops
					acumulador=atoi((pila->pop()->getValue()).c_str());
					
					if(pila->top()->getValue()=="+"){
						pila->pop();
						acumulador+=atoi((pila->pop()->getValue()).c_str());
						
					}else if(pila->top()->getValue()=="*"){
						pila->pop();
						acumulador*=atoi((pila->pop()->getValue()).c_str());
						
					}else if(pila->top()->getValue()=="/"){
						pila->pop();
						acumulador/=atoi((pila->pop()->getValue()).c_str());
						
					}
					
					//push acumulador
					ss << acumulador;
					str_int=ss.str();
					pila->push(str_int);
					ss.str("");		
					
					acumulador=0;
				}
				
				cout<<"resultado: "<<pila->pop()->getValue()<<endl;
				
				break;
			case'2':
				cout<<"\nhasta luego\n";
				break;		
			default:
				cout<<"\nno se ingreso una opcion correcta\n";
		}
	} while(opcionMenu!='2');

	return 0;
}
