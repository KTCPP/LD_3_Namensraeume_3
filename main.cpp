#include "modul.hpp"
#include <iostream>

// Funktioniert, da j nur in modul.cpp deklariert ist
int j = 1;
// Durch extern wird das globale i auch in dieser Datei bekannt
extern int i;

int main() {
	i = 0;
	std::cout << erhoehenInNamespace();
	std::cout << erhoehenInGlobal();
	// Nun kann auch i direkt ausgegeben werden.
	std::cout << i;
}
