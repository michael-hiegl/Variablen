//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Variablen	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 16.11.2021 18:37:29
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables


	//Deklaration
	int i_Variable1, i_Variable2;
	char c_Variable3;
	char c_Variable4;
	double d_Variable5 = 2.1; //Deklaration und Initialisierung in einer Zeile

	//Initialisierung
	i_Variable1 = 1;
	i_Variable2 = 2;
	c_Variable3 = 127;
	c_Variable4 = -10;

	//Kurzschreibweisen
	d_Variable5 = d_Variable5 * 2;
	d_Variable5 *= 2;
	c_Variable3 = c_Variable3 + 1;
	c_Variable3++; //c_Variable3 = c_Variable3 + 1
	//nicht möglich: 5=Variable1 !

	//Ausgabe von Variablen
	printf("i_Variable1 = %i\n", i_Variable1);
	printf("i_Variable2 = %i\n", i_Variable2);
	printf("c_Variable3 = %i\n", c_Variable3 + 1);
	printf("c_Variable4 = %i\n", c_Variable4+1);
	printf("d_Variable5 = %i\n", d_Variable5);

	//korrekte Darstellung einer Gleitpunktzahl
	printf("Die Gleitpunktzahlen koennen nicht korrekt als Integer dargestellt werden \n");
	printf("Abhilfe: d_Variable5 = %f\n", d_Variable5);
	printf("Die Anzahl der Kommastellen kann beruecksichtigt werden.\n");
	printf("d_Variable5 = %1.2f\n", d_Variable5);






	getchar();
	fflush(stdin);
	getchar();
	return 0;
}