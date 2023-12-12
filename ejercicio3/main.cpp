#include <iostream>
#include <cstring>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

Estudiante copiarEstudiante(Estudiante est) {
    Estudiante nuevoEst;
    std::strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}

int main() {
    Estudiante est1;
    std::strcpy(est1.nombre, "Jose Carlos");
    est1.edad = 21;
    est1.promedio = 9.5;

    Estudiante est2 = copiarEstudiante(est1);

    std::cout << "Original Estudiante: " << est1.nombre << ", " << est1.edad << ", " << est1.promedio << std::endl;
    std::cout << "Copied Estudiante: " << est2.nombre << ", " << est2.edad << ", " << est2.promedio << std::endl;

    return 0;
}
