// Ej_Nombre_Edad.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Un programa que, mediante tu nombre, edad, etc… adivine el futuro o cómo es el usuario.

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <iomanip>

using namespace std;

//void getCurrentDate(int&, int&, int&);
//void getBirthday(int&, int&, int&);
//int calcYears(int, int, int, int, int, int);

int main()
{
    string nombre, horoscopo;
    int edad=0, opcion_genero, dia, mes, ano, da, ma, aa;
    //getCurrentDate(mes1, dia1, ano1);
    //getBirthday(mes, dia, ano);
    //edad = calcYears(ano, ano1, mes, mes1, dia, dia1);
    cout << "Introduce tu nombre\n";
    cin >> nombre;
    cout << "Selecciona tu g" << char(130) << "nero\n";
    cout << "Masculino=1 Femenino=2" << endl;
    cin >> opcion_genero;
    cout << "Introduce tu fecha de nacimiento (dia, mes y a"<<char(164)<<"o)\n";
    cin >> dia >> mes >> ano;
    /* enero */
    switch (mes) {
    case 1:
        if (dia >= 21) 
            horoscopo = "Acuario";
        else 
            horoscopo = "Capricornio";
        break;
    case 2:
        if (dia >= 21)
            horoscopo ="Piscis";
        else 
            horoscopo = "Acuario";
        break;
    case 3:
        if (dia >= 21)
            horoscopo = "Aries";
        else 
            horoscopo = "Piscis";
        break;
    case 4:
        if (dia >= 21)
            horoscopo = "Tauro";
        else 
            horoscopo = "Aries";
        break;
    case 5:
        if (dia >= 21)
            horoscopo = "Geminis";
        else 
            horoscopo = "Tauro";
        break;
    case 6:
        if (dia >= 21)
            horoscopo = "Cancer";
        else 
            horoscopo = "Geminis";
        break;
    case 7:
        if (dia >= 21)
            horoscopo = "Leo";
        else 
            horoscopo = "Cancer";
        break;
    case 8:
        if (dia >= 21)
            horoscopo = "Virgo";
        else 
            horoscopo = "Leo";
        break;
    case 9:
        if (dia >= 21)
            horoscopo = "Libra";
        else 
            horoscopo = "Virgo";
        break;
    case 10:
        if (dia >= 21)
            horoscopo = "Escorpio";
        else 
            horoscopo = "Libra";
        break;
    case 11:
        if (dia >= 21)
            horoscopo = "Sagitario";
        else 
            horoscopo = "Escorpio";
        break;
    case 12:
        if (dia >= 21)
            horoscopo = "Capricornio";
        else 
            horoscopo = "Sagitario";
        break;
    default:
        std::cout << "Inserta una fecha v"<< char(160) <<"lida" << endl;
    }
    //Función time_t para la fecha actual en vez de la fecha y hora del sistema usando el if
    //y el struct
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    aa = tm.tm_year + 1900;
    ma = tm.tm_mon + 1;
    da = tm.tm_mday;
    edad = aa - ano;
    if (mes > ma)
        edad--;
    else if (ma == mes)
        if (dia > da)
            edad--;
        else if (da = dia)
            cout << "\nFelicidades, hoy es tu cumpleaños" << endl;
    //printf("Segundos desde 1 de enero de 1970: %u s\n", t);
    if (edad>=18)
    {
        cout << "T"<< char(163) <<" eres mayor de edad" << endl;
    }
    else {
        cout << "T" << char(163) << " eres menor de edad" << endl;
    }
    //printf("La fecha/hora actual es: %s", asctime(timeinfo));
    cout << "Tu hor"<< char(162) <<"scopo es " << horoscopo << "\n";
    cout << "Tu edad es " << edad << endl;
    system("pause");
}
