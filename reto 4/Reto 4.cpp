#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;

void promedio();
void may();
void men();


int a=0,b=0,c=0,d=0;

int main() {
  
  	system("cls");
  	cout<<"Ingresa el salario del trabajador 1 :"<<endl;
  	cin>>a;
  	cout<<"\nIngresa el salario del trabajador 2 :"<<endl;
  	cin>>b;
  	cout<<"\nIngresa el salario del trabajador 3 :"<<endl;
  	cin>>c;
  	cout<<"\nIngresa el salario del trabajador 4 :"<<endl;
  	cin>>d;
	  
	promedio();
  	may();
  	men();
  	cout<<endl;
  return 0;
}

void promedio(){
float prom;
prom=(a+b+c+d)/4;

cout<<"\n\nEl promedio de los salarios es de: $"<<prom<<endl;	
}

void may(){	
	if(a>b && a>c && a>d){
		cout<<"\n El salario mas alto es: "<<a<<endl;
	}else 
		if(b>a && b>c && b>d){
		cout<<"\n El salario mas alto es: "<<b<<endl;
		}else 
			if(c>a && c>b && c>d){
			cout<<"\n El salario mas alto es: "<<c<<endl;
			}else 
				if(d>a && d>b && d>c){
				cout<<"\n El salario mas alto es: "<<d<<endl;
				}else{
					cout<<"\n\n No hay un mayor"<<endl;
				}
}

void men(){
	if(a<b && a<c && a<d){
		cout<<"\n El salario mas bajo es :"<<a<<endl;
	}else 
		if(b<a && b<c && b<d){
		cout<<"\n El salario mas bajo es :"<<b<<endl;
		}else 
			if(c<a && c<b && c<d){
			cout<<"\n El salario mas bajo es :"<<c<<endl;
			}else 
				if(d<a && d<b && d<c){
				cout<<"\n El salario mas bajo es :"<<d<<endl;
				}else{
					cout<<"\n No hay un menor"<<endl;
				}		
}
