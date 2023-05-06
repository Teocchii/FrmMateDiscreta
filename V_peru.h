#include<iostream>
#include<string>
using namespace std;

class VuelosPe{
public: 
string terminales[9] = { "Lima","Iquitos","Piura","Chiclayo",
"Trujillo","Puerto Maldonado","Cusco","Juliaca","Arequipa" };
	

	
	bool peru[9][9] =
	{
		//  l  i p c t m c j a
			{0,1,1,1,1,0,1,1,1},//lima   
			{1,0,0,0,0,0,0,0,0},//iquitos
			{1,0,0,0,0,0,0,0,0},//piura
			{1,0,0,0,0,0,0,0,0},//chiclayo
			{1,0,0,0,0,0,0,0,0},//trujillo
			{0,0,0,0,0,0,1,0,0},//puerto maldonado
			{1,0,0,0,0,1,0,0,0},//cusco
			{1,0,0,0,0,0,0,0,0},//juliaca
			{1,0,0,0,0,0,1,0,0}//arequipa
	};
	string p(int x) {
		return terminales[x];
	}
	void escalaspe(int x, int y) {

		int Escala1;
		int Escala2;
		if (x == y) { cout << "Ya se encuentra en su destino";}
		
		else
		
		if (peru[x][y] == 1)
		{
			cout << "Vuelo directo encontrado desde: " << terminales[x] << " hasta:" << terminales[y] << endl;
		
		}
		else
		{


			for (int a = x; a <= x; a++) //por la fila siendo x
			{
				for (int b = 0; b < 9; b++)//analizar la columna 
				{
					if (peru[x][b] == 1) {/*en la columna en la que se encuentre un 1 pasará a ser dicha fila hasta encontrar alguna otra coincidencia que lleve al numero deseado*/
						Escala1 = b;  //asignamos el valor como una variable dentro de la funcion
						if (peru[Escala1][y] == 1) {
							cout << "Hay un vuelo desde: "
								<< terminales[x] << " hasta: "
								<< terminales[y] << endl << " Escala : "
								<< terminales[Escala1] << endl;
							system("PAUSE");
						}
						else
							for (int c = Escala1; c <= Escala1; c++)//en caso debas hacer una escala más para llegar a tu destino
							{
								for (int d = 0; d < 9; d++)
								{
									if (peru[Escala1][d] == 1)
									{
										Escala2 = d;
										if (peru[Escala2][y] == 1)
										{
											cout << "Hay vuelo desde: " << terminales[x] << " hasta: " << terminales[y] << endl << "Posibles Escalas: " << terminales[Escala1] << ", " << terminales[Escala2] << endl;
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
