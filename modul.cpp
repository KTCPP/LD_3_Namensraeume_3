#include "modul.hpp"

static int j = 0;
int i = 0;

int erhoehenInNamespace() { return ++i; }
int erhoehenInGlobal() { return ++j; }