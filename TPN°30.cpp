#include <bits/stdc++.h>
using namespace std;

class Circulo{
	private: 
		float Radio;
		float Diametro;
	
	
	public: 
		Circulo(float radio, float diametro){
			SetDatos(radio,diametro);
		}
		
		void SetDatos(float radio, float diametro){
			SetRadio(radio);
			SetDiametro(diametro);
		}
		
		void SetRadio(float radio){
			Radio = radio;	
		}
		void SetDiametro(float diametro){
			Diametro = diametro;
		}
		
		float GetRadio(){
			return Radio;
		}
		float GetDiametro(){
			return Diametro;
		}

};

int main(){
	
	Circulo C1(100, 20);
	
	cout<<"Circulo "<<endl;
	cout<<"Radio: "<<C1.GetRadio()<<endl;
	cout<<"Diametro: "<<C1.GetDiametro()<<endl;

    return 0;
}
