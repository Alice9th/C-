//Calcular el promedio de las notas de los estudiantes


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
    float nota1,nota2,nota3,nota4,promedio;

    cout<< "Ingresa la primera nota" <<endl;
    cin>>nota1;

    cout<< "Ingresa la segunda nota" <<endl;
    cin>>nota2;

    cout<< "Ingresa la tercera nota" <<endl;
    cin>>nota3;

    cout<< "Ingresa la cuarta nota" <<endl;
    cin>>nota4;

    promedio = (nota1 + nota2 + nota3 + nota4)/4;

    if(promedio >= 3 && promedio <= 3.5)
    {
        cout<< "En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidad de recuperar" <<endl;
    }
    if(promedio <= 2.9)
    {
       cout<<"No aprobado" <<endl;
    }

    else
    {
        if(promedio >= 3.56)
        {
            cout<<"Felicitaciones! has aprobado" << endl;
        }

    }
    getch();
    return 0;


}