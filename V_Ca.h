#pragma once
#include<iostream>
#include<string>
using namespace std;

class VuelosCA
{
public:
	string terminalesca[25]
	{   "Lima","Guayaquil","Quito","Cali","Bogota","Medellin","Ciudad de Panama",
		"San Jose de Costa Rica","Liberia","Managua","Tegucigalpa","San Salvador","La Ceiba","Roatan",
		"San Pedro de Sula","Ciudad de Guatemala","Flores","Belice","Cancun","Ciudad de Mexico","La Habana",
		"Santo Domingo","Punta Cana","San Juan","Caracas"
	};


	bool caribe[25][25] = {
	{0,	1,	1,	0, 0,	0,  1	,0	,0	,0	,1	,0	,0	,0	,0	,0	,0	,0	,1	,0	,1	,0	,0	,0},	//Lima
	{1,	0,	0,	0, 0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Guayaquil
	{1,	0,	0,	0, 0,	1,	0,	1,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Quito
	{0,	0,	0,	0, 0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Cali
	{0,	0,	0,	0, 0,	0,	1,	0,	0,	0,	0,	1,	0,	0,	0,	1,	0,	0,	1,	1,	0,	1,	1,	1,	0},	//Bogota
	{0,	0,	1,	0, 0,	0,	0,	1,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Medellin
	{0,	0,	0,	0, 1,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Ciudad de Panama
	{1,	0,	1,	0, 1,	1,	1,	0,	0,	1,	0,	1,	0,	0,	1,	0,	0,	0,	0,	1,	0,	1,	0,	0,	1},	//San Jose de Costa Rica
	{0,	0,	0,	0, 0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Liberia
	{0,	0,	0,	0, 0,	0,	1,	1,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Managua
	{0,	0,	0,	0, 0,	0,	0,	1,	0,	0,	0,	0,	1,	1,	1,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Tegucigalpa
	{1,	1,	1,	1, 1,	1,	0,	1,	1,	1,	0,	0,	0,	1,	1,	1,	0,	1,	1,	1,	1,	0,	0,	0,	0},	//San Salvador
	{0,	0,	0,	0, 0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//La Ceiba
	{0,	0,	0,	0, 0,	0,	0,	0,	0,	0,	1,	1,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Roatán
	{0,	0,	0,	0, 0,	0,	0,	1,	0,	0,	1,	1,	0,	1,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//San Pedro de Sula
	{0,	0,	0,	0, 1,	0,	0,	1,	0,	0,	1,	1,	0,	0,	1,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0},	//Ciudad de Guatemala
	{0,	0,	0,	0, 0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Flores
	{0,	0,	0,	0, 0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Belice
	{0,	0,	0,	0, 1,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Cancún
	{1,	0,	0,	0, 1,	0,	0,	1,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Ciudad de México
	{0,	0,	0,	0, 0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//La Habana
	{1,	0,	0,	0, 1,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Santo Domingo
	{0,	0,	0,	0, 1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//Punta Cana
	{0,	0,	0,	0, 1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0},	//San Juan
	{0,	0,	0,	0, 0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0}	//Caracas
	};
	
	void escalasCA(int x, int y) {

		int Escala1;
		int Escala2;


			if (caribe[x][y] == 1)
			{
				cout << "Vuelo directo encontrado desde: " << terminalesca[x] << " hasta:" << terminalesca[y] << endl;

			}
			else
			{


				for (int a = x; a <= x; a++) //por la fila siendo x
				{
					for (int b = 0; b < 9; b++)//analizar la columna 
					{
						if (caribe[x][b] == 1) {/*en la columna en la que se encuentre un 1 pasará a ser dicha fila hasta encontrar alguna otra coincidencia que lleve al numero deseado*/
							Escala1 = b;  //asignamos el valor como una variable dentro de la funcion
							if (caribe[Escala1][y] == 1) {
								cout << "Hay un vuelo desde: "
									<< terminalesca[x] << " hasta: "
									<< terminalesca[y] << endl << " Escala : "
									<< terminalesca[Escala1] << endl;
								system("PAUSE");
							}
							else
								for (int c = Escala1; c <= Escala1; c++)//en caso debas hacer una escala más para llegar a tu destino
								{
									for (int d = 0; d < 9; d++)
									{
										if (caribe[Escala1][d] == 1)
										{
											Escala2 = d;
											if (caribe[Escala2][y] == 1)
											{
												cout << "Hay vuelo desde: " << terminalesca[x] << " hasta: " << terminalesca[y] << endl << "Posibles Escalas: " << terminalesca[Escala1] << ", " << terminalesca[Escala2] << endl;
												system("PAUSE");
											}
										}
									}

								}
						}
					}
				}

			}
	}


};

