/*

#############
#   dakai   #
#############
 
 */
/* INCLUDE */
#include <iostream>
/* ofstream, ifstream, fstream */
#include <fstream>
/* VARIABLES TIPO STRING */
#include <string>

using namespace std;
/* CLASS USER */
class user{
	public:
	/* Contructor: recibe datos del la funcion main y los da al metodo setAll que los da a las variables correspondientes */
		user(string x, string y, string z){
			setAll(x,y,z);
		}
		/* destructor: al finalizar el programa guarda todos los datos en un archivo .txt */
		~user(){
			ofstream file;
			system("pause");
			file.open("text.txt");
			file << "~ Nombre: "<<name<<endl<<"~ Edad: "<<age<<endl<<"~ Rol: "<<rol;
			file.close();
		}
		/* setAll: recibe los datos a traves del contructor y los designa a las variables */
		void setAll(string x,string y, string z){
			name = x;
			age = y;
			rol = z;
		}
		/* sayData: Metodo para mostar en pantalla la información ingresada por el usuario */
		void sayData(){
			system("cls");
			std::cout<<"~ Nombre: "<<name<<endl<<"~ Edad: "<<age<<endl<<"~ Rol: "<<rol<<"\n}";
		}
	private:
	/* variables privadas */
	string name,age,rol;
};

/* Función main: Muestra un formulario que luego lo pasa al objeto "obj1", luego llama al metodo sayData que muestra la informacion ingresada por el usuario en pantalla */
int main(){
	string name,age,rol;
	std::cout<<"~ Ingrese su nombre: ";
	std::cin>>name;
	std::cout<<"~ Ingrese su edad: ";
	std::cin>>age;
	std::cout<<"~ Que rol quieres ser?: ";
	std::cin>>rol;

	user obj1(name,age,rol);
	

	obj1.sayData();
	system("pause");
	return 0;
}