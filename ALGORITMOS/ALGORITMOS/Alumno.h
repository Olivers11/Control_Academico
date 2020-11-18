#pragma once
#include <iostream>
#include <vector>
using namespace std;


class Alumno
{
private:
	string nombre;
	string carnet;
	int curso;
	float examen;
	float actividades;
	float parcial1;
	float parcial2;
	float zona;
	bool asistencia;
public:
	Alumno();
	void insertarDatos(string, string, int, float, float, float, float, float);
	string RetornarNombre();
	void Asistir(bool);
	string RetornarCarnet();
	int retornarCurso();
	float retornarZona();
	float retornarExamen();
	float retornarActividades();
	float parcialUno();
	float parcialDos();
};

