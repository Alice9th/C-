// APP PARA PREGUNTAR EDAD
//Librerías

#include <stdio.h> //stands for Standard Input Output. It has the information related to input/output functions.
#include <iostream> //Nos da entradas y salidas de datos
#include <conio.h>
#include <stdlib.h> //This header defines several general purpose functions, including dynamic memory management, 
                    //random number generation, communication with the environment, integer arithmetics, searching, 
                    //sorting and converting

//Determinando las variables

using namespace std;

int edad;

main()

{   cout<< "Ingrese la edad del niño" <<endl;
    cin>>edad;

    if(edad<=6)
    {
        cout<< "El niño pertenece al grupo de la primera infancia" <<endl;        
    }
      if(edad <= 12 && edad >= 7 )
      {
        cout<< "El niño pertenece al grupo de la segunda infancia" <<endl;
      }
      if(edad >= 13 && edad <=18)
      {
        cout<< "El niño pertenece al grupo de adolescentes" <<endl;
      }

    else
      { 
          cout<< "La edad de la persona está fuera del rango del programa" << endl;
      }
        cin.get();
        return 0;
        
}