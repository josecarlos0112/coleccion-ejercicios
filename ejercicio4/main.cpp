#include <cstring>

typedef struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

int main() {
    Estudiante estudiante3;
    std::strcpy(estudiante3.nombre, "Pedro");
    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;

    return 0;
}