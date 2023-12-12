#include <iostream>

class Estudiante {
private:
    std::string nombre;
    int edad;
    float promedio;

public:
    Estudiante(std::string n, int e, float p) : nombre(n), edad(e), promedio(p) {}

    void imprimir() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << ", Promedio: " << promedio << std::endl;
    }

    void modificarEdad(int nuevaEdad) {
        edad = nuevaEdad;
    }
};

int main() {
    Estudiante estudiante1("Jose", 20, 95.5);
    estudiante1.imprimir();

    estudiante1.modificarEdad(40);
    estudiante1.imprimir();

    return 0;
}