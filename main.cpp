#include <iostream>
#include "Racional.h"
#include <vector>
#include <string>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

void listar(vector<Racional>);
void listar(vector<string>);

int main(int argc,char* argv[]){
	int opcion;
	bool continuar=true;
	vector<Racional> listado;
	vector<string> historial;
	do{
		cout << "Elija una opción: "<<endl;
		cout << "1: Crear racional" << endl
		     <<	"2: Suma"	    <<endl
		     << "3: Resta"	    <<endl
		     << "4: Producto"	    <<endl
		     << "5: Division"	    <<endl
		     << "6: Ver historial de operaciones" << endl
		     << "7: Salir"	    <<endl
		     <<	"Ingrese: ";
		     cin >> opcion;
		     if(opcion==1){
		     	int num,den;
		     	cout << "Ingrese el numerador: ";
		     	cin >>num;
		     	cout << "Ingrese el denominador: ";
		     	cin >> den;
		     	listado.push_back(Racional(num,den));
		     }else if(opcion==2){
		     	listar(listado);
		     	int primera,segunda;
		     	cout << "Ingrese el primer operando: ";
		     	cin >> primera;
		     	cout << "Ingrese el segundo operando: ";
		     	cin >> segunda;
		     	if(primera<listado.size() && segunda<listado.size()){
		     		Racional resultado = listado[primera] + listado[segunda];
		     		stringstream ss;
		     		ss <<listado[primera] << " + (" << listado[segunda] <<") = "<<resultado<<endl;
		     		cout << ss.str();
		     		historial.push_back(ss.str());
		     	}else{
		     		cout << "Ingresó datos inválidos!!" << endl;
		     	}
		     }else if(opcion==3){
		     	listar(listado);
		     	int primera,segunda;
		     	cout << "Ingrese el primer operando: ";
		     	cin >> primera;
		     	cout << "Ingrese el segundo operando: ";
		     	cin >> segunda;
		     	if(primera<listado.size() && segunda<listado.size()){
		     		Racional resultado = listado[primera] - listado[segunda];
		     		stringstream ss;
		     		ss <<listado[primera] << " - (" << listado[segunda] <<") = "<<resultado<<endl;
		     		cout << ss.str();
		     		historial.push_back(ss.str());
		     	}else{
		     		cout << "Ingresó datos inválidos!!" << endl;
		     	}
		     }else if(opcion==4){
		     	listar(listado);
		     	int primera,segunda;
		     	cout << "Ingrese el primer operando: ";
		     	cin >> primera;
		     	cout << "Ingrese el segundo operando: ";
		     	cin >> segunda;
		     	if(primera<listado.size() && segunda<listado.size()){
		     		Racional resultado = listado[primera] * listado[segunda];
		     		stringstream ss;
		     		ss <<listado[primera] << " * (" << listado[segunda] <<") = "<<resultado<<endl;
		     		cout << ss.str();
		     		historial.push_back(ss.str());
		     	}else{
		     		cout << "Ingresó datos inválidos!!" << endl;
		     	}
		     }else if(opcion==5){
		     	listar(listado);
		     	int primera,segunda;
		     	cout << "Ingrese el primer operando: ";
		     	cin >> primera;
		     	cout << "Ingrese el segundo operando: ";
		     	cin >> segunda;
		     	if(primera<listado.size() && segunda<listado.size() ){
		     		Racional resultado = listado[primera] / listado[segunda];
		     		stringstream ss;
		     		ss <<listado[primera] << " / (" << listado[segunda] <<") = "<<resultado<<endl;
		      		cout << ss.str();
		     		historial.push_back(ss.str());
		     	}else{
		     		cout << "Ingresó datos inválidos!!" << endl;
		     	}
		     }else if(opcion==6){
			listar(historial);
		     }else{
		     	continuar=false;
		     }   
	}while(continuar==true);
	return 0;
}


void listar(vector<Racional> listado){
	for(int i=0;i<listado.size();i++){
		cout <<i<<":"<<listado[i] <<endl;
	}
}
void listar(vector<string> listado){
	cout << "Lista de operaciones"<<endl;
	for(int i=0;i<listado.size();i++){
		cout << listado[i];
	}
}
