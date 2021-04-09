//Ingresar número de notas deseadas por un usuario


//Librerías

#include <stdio.h> //stands for Standard Input Output. It has the information related to input/output functions.
#include <iostream> //Nos da entradas y salidas de datos
#include <conio.h>
#include <stdlib.h> //This header defines several general purpose functions, including dynamic memory management, 
                    //random number generation, communication with the environment, integer arithmetics, searching, 
                    //sorting and converting

//Determinando las variables

using namespace std;

main()
{
    int cantidad_notas,cont;
    float i;
    float nota;
    float suma;
    float promedio;
    cont = 0;
    cantidad_notas = 0;
    suma = 0;
    promedio = 0;
    nota = 0;
    char nombre[20];
    int opcion;
    opcion = 1;

    do
    {

    cout<<"Ingrese el nombre del estudiante: " <<endl;
    scanf("%s", nombre);

    printf("Ingrese la cantidad de notas que tiene el estudiante %s: ", nombre);
    cin>>cantidad_notas;

    
    for(i=1; i<=cantidad_notas; i++)
    {
        cout<<"Digite la nota: "<< i <<endl;
        cin>>nota;

        if(nota>=0.0 && nota<=5.0);
        {
            cont= cont+1;
            suma = suma + nota;
            promedio = suma/cont;

        }
    }

    cout<<"Su promedio es:\n" << promedio <<endl;
    cin.get();


    cout<<"Desea ingresar las notas de otro estudiante? 1 = Sí, 0 = No" <<endl;
    cin>>(opcion); 
    }
    
    while (opcion == 1);
    cout<<"Ha terminado de ingresar todas las notas"<<endl;
    
    return 0;
}