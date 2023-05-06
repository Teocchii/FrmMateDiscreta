#pragma once
#include<iostream>
#include<string>
using namespace std;


class VuelosCO
{
public:
	
	string terminalesco[23]{ "Bogota","Yopal","Pasto","Villavicencio","Florencia","Neiva"
	,"Popayan","Tumaco","Cali","Ibague","Armenia","Pereira","Medellin","Monteria","Cartagena",
	"San Andrés","Barranquilla","Santa Marta","Riohacha","Cucuta","Bucaramanga","Barrancabermeja","Leticia" };


	int origen, destino; 
	bool colombia[23][23] = {
	{0,	1,	1,	1,	1,	1,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1},//Bogotá
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Yopal
	{1,	0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//pasto
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Villavicencio
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Florencia
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Neiva
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Popayan
	{0,	0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Tumaco
	{1,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0},//Cali
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Ibague
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Armenia
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Pereira
	{1, 0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	1,  1,  0,	0},//Medellin
	{1, 0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Monteria
	{1,	0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Cartagena
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//San Andrés
	{1,	0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	1,	0, 	0,	0,	0,	0,	0,	0,	0,	0,	0},//Barranquilla
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	0, 	0, 	0, 	0, 	0, 	0, 	0, 	0, 	0, 	0},//Santa Marta
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Riohacha
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Cucuta
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Bucaramanga
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},//Barrancabermeja
	{1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0}//Leticia
	};

	void escalasco(int x, int y) {

		int Escala1;
		int Escala2;
		if (colombia[x][y] == 1)
		{
			cout << "Vuelo directo encontrado desde: " << terminalesco[x] << " hasta: " << terminalesco[y]<<endl<<endl;

		}
		else
		
			for (int a = x; a <= x; a++) //por la fila siendo x
			{
				for (int b = 0; b < 22; b++)//analizar la columna 
				{
					if (colombia[x][b] == 1) {/*en la columna en la que se encuentre un 1 pasará a ser dicha fila hasta encontrar alguna otra coincidencia que lleve al numero deseado*/
						Escala1 = b;  //asignamos el valor como una variable dentro de la funcion
						if (colombia[Escala1][y] == 1) {
							cout << "Hay un vuelo desde: "
								<< terminalesco[x] << " hasta: "
								<< terminalesco[y] << endl << " Escala : "
								<< terminalesco[Escala1] << endl;
							system("PAUSE");
						}
						for (int c = Escala1; c <= Escala1; c++)//en caso debas hacer una escala más para llegar a tu destino
						{
							for (int d = 0; d < 22; d++)
							{
								if (colombia[Escala1][d] == 1)
								{
									Escala2 = d;
									if (colombia[Escala2][y] == 1)
									{
										cout << "Hay vuelo desde: " << terminalesco[x] << " hasta: " << terminalesco[y] << endl << "Escalas: " << terminalesco[Escala1] << " y: " << terminalesco[Escala2] << endl;
										system("PAUSE");
									}
								}
							}

						}
					}
				}
			}


	}

};

