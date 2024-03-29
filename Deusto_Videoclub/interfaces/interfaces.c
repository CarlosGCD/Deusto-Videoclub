/*
 * interfaces.c
 *
 *  Created on: 13 mar 2024
 *      Author: ima.dominguez
 */

#include <stdio.h>
#include "interfaces.h"


void inicio(void)
{
	int option;
	printf("=======================================\n             VIDEOCLUB\n=======================================\n\n");

	printf("1.Iniciar Sesión\n2.Registrar Usuario\n3.Contraseña Olvidada\n4.Salir\n");
	printf("Introducir opcion: ");
	scanf("%i", &option);
	switch (option)
	{
	case 1:
		iniciarSesion();
		break;
	
	case 2:
		registrarUsuario();
	
	case 3:
		contrasenyaOlvidada();
	
	case 4:
		printf("salir\n");
	default:
		printf("Opcion no valida\n");
		break;
	}
	
	
}

void iniciarSesion(void)
{
	printf("\nINICIO DE SESIÓN\n=======================================\n");

	printf("Introducir Usuario: \n");
	printf("Introducir Contraseña: \n");
}

void registrarUsuario(void)
{
	printf("\nREGISTRO DE SESIÓN\n=======================================");

	printf("Introducir Nombre: \n");
	printf("Introducir Apellido: \n");
	printf("Introducir DNI: \n");
	printf("Introducir email: \n");
	printf("Introducir Nº Tarjeta: \n");
	printf("Introducir Género(H/M): \n");
	printf("Introducir Año Nacimiento(XXXX): \n");
	printf("Introducir Mes Nacimiento(XX): \n");
	printf("Introducir Día Nacimiento(XX): \n");
	printf("Introducir Usuario: \n");
	printf("Introducir Contraseña: \n");
}

void contrasenyaOlvidada(void)
{
	printf("\nCONTRASEÑA OLVIDADA\n=======================================\n");

	printf("Introducir DNI: \n");
	printf("Introducir Contraseña Nueva: \n");
}


void menu(void)
{
	printf("\nBIENVENIDO AL MENÚ PRINCIPAL\n=======================================");

	printf("1.Alquilar película\n2.Extender alquiler\n3.Datos de usuario\n4.Datos de alquiler\n5.CerrarSession");

}

void extender(void)
{
	printf("\nLISTA ALQUILERES\n=======================================");

	printf("1.Accion\n2.Drama\n3.Ciencia Ficcion\n4.Clásicas\n5.Comedia\n6.Terror\n7.Románticas");

}

void datosUsuario(void)
{
	printf("");
}

void datosAlquiler(void)
{

}
