/*
 * Main.cpp
 *
 *  Created on: 2 oct 2024
 *      Author: alvarof
 */

#include <iostream>
#include "Cuenta.h"
using namespace std;

bool transferir(Cuenta &origen, Cuenta &destino, double monto);

int main()
{
	Cuenta cuenta1(12345, 123456789, 500.0);
	Cuenta cuenta2(67890, 987654321, 300.0);

	cout << "Saldo inicial de cuenta 1: " << cuenta1.getSaldo() << endl;
	cout << "Saldo inicial de cuenta 2: " << cuenta2.getSaldo() << endl;

	if (transferir(cuenta1, cuenta2, 100.0))
	{
		cout << "Transferencia exitosa!" << endl;
	}
	else
	{
		cout << "Transferencia fallida!" << endl;
	}

	cout << "Saldo final de cuenta 1: " << cuenta1.getSaldo() << endl;
	cout << "Saldo final de cuenta 2: " << cuenta2.getSaldo() << endl;
	return 0;
}

bool transferir(Cuenta &origen, Cuenta &destino, double monto)
{
	if (monto > 0 && origen.extraer(monto))
	{
		destino.depositar(monto);
		return true;
	}
	return false;
}
