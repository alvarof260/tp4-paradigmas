/*
 * Cuenta.cpp
 *
 *  Created on: 2 oct 2024
 *      Author: alvarof
 */
#include <iostream>
#include "Cuenta.h"
using namespace std;

Cuenta::Cuenta(int numero, long int dniTitular, double saldo = 0.0)
{
	this->numero = numero;
	this->dniTitular = dniTitular;
	this->saldo = saldo > 0 ? saldo : 0;
};

bool Cuenta::depositar(double monto)
{
	if (monto > 0)
	{
		this->saldo += monto;
		return true;
	}
	return false;
}

bool Cuenta::extraer(double monto)
{
	if (monto >= 0 && this->saldo - monto >= 0)
	{
		this->saldo -= monto;
		return true;
	}
	return false;
}

double Cuenta::getSaldo()
{
	return this->saldo;
}

void Cuenta::mostrarInformacion()
{
	cout << "\t\tInformacion de usuario" << endl;
	cout << "Numero: " << this->numero << endl;
	cout << "DNI: " << this->dniTitular << endl;
	cout << "Saldo: $" << this->saldo << endl;
}
