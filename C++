// C++ //


// Ejemplo de comentario  //

/* Ejemplo de comentario 2 /*

*/ Ejemplo de comentario 3 */ 


//Comenzando con el ejercicio //

#include <iostream> 

//In order to read or write to the standard input/output streams you need to include it.//

using namespace std; 

//In programming, we cannot have variables, functions, etc with the same name.
So to avoid those conflicts we use namespaces. “using namespace std” means we use the namespace named std. 
“std” is an abbreviation for standard. //

int main() 

//'int main' means that our function needs to return some integer at the end of the execution 
and we do so by returning 0 at the end of the program. 0 is the standard for the “successful 
execution of the program” //
{
 int a, b;
 cout << "Ingresa el primer numero"<<endl;
 cin >> a;

 //cin es el flujo de entrada estándar que normalmente es el teclado 
 y cout es el flujo de salida estándar que por lo general es la pantalla.//

 cout << "Ingresa el segundo numero"<<endl;
 cin >> b;
 cout <<"La suma de los numeros es: "<< a+b <<endl;
 cout <<"La resta de los numeros es: "<< a-b <<endl;
 cout <<"La multiplicacion de los numeros es: "<< a*b <<endl;
 cout <<"La division de los numeros es: "<< a/b <<endl;
 cout <<"El residuo es: "<< a%b <<endl;

 system("pause");

 //This is a Windows-specific command, which tells the OS to run the pause program. 
 This program waits to be terminated, and halts the exceution of the parent C++ program. 
 Only after the pause program is terminated, will the original program continue.//

 return EXIT_SUCCESS;

 //Si el programa nunca señala un fallo, se puede usar 0 o EXIT_SUCCESS//
}


