#include "Racional.h"
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::stringstream;
using std::ostream;
using std::istream;
using std::showpos;
using std::noshowpos;

Racional::Racional(int numerador,int denominador){
	if(denominador==0){
		denominador=1;
	}else if(denominador<0){
		denominador*=-1;
		numerador*=-1;
	}
	int menor,divisor=2;
	if(numerador<denominador){
		menor=numerador:
	}else{
		menor=denominador;
	}	
	while(divisor<=menor){
		if(numerador%divisor==0 && denominador%divisor==0){
			numerador/=divisor:
			denominador/=divisor;
		}else{
			divisor++;
		}
	}
	this->numerador=numerador;
	this->denominador=denominador;
}
Racional::~Racional(){

}
Racional::string operator+(const &Racional operando)const{
	int den=(denominador*operando.denominador);
	int num=(numerador*operando.denominador + operando.numerador*denominador);
	Racional temp=Racional(num,den);
	stringstream ss;
}

Racional::string operator-(const &Racional operando)const{

}

Racional::string operator*(const &Racional operando)const{

}

Racional::string operator/(const &Racional operando)const{

}

friend ostream& operator<<(ostream&, const Racional& operando){

}
