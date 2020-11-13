#include "pch.h"
#include "Alumno.h"
using namespace std;


Alumno::Alumno()
{
	this->nombre = "";
	this->carnet = "";
	this->curso = 0;
	this->zona = 0.0;
	this->actividades = 0;
	this->parcial1 = 0;
	this->parcial2 = 0;
	this->examen = 0;
}


void Alumno::insertarDatos(string n, string c, int cu, float z, float a, float p1, float p2, float ex)
{
	this->nombre = n;
	this->carnet = c;
	this->curso = cu;
	this->zona = z;
	this->actividades = a;
	this->parcial1 = p1;
	this->parcial2 = p2;
	this->examen = ex;
}


string Alumno::RetornarNombre()
{
	return this->nombre;
}

int Alumno::retornarCurso()
{
	return this->curso;
}


string Alumno::RetornarCarnet()
{
	return this->carnet;
}


float Alumno::retornarZona()
{
	return this->zona;
}


float Alumno::retornarActividades()
{
	return this->actividades;
}

float Alumno::retornarExamen()
{
	return this->examen;
}

float Alumno::parcialUno()
{
	return this->parcial1;
}


float Alumno::parcialDos()
{
	return this->parcial2;
}


