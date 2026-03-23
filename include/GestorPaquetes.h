#pragma once
#include "Paquete.h"
#include <queue>
#include <stack>
#include <vector>
#include <string>

class GestorPaquetes {
private:
    std::queue<Paquete> colaPendientes;

    std::stack<Paquete> pilaUrgentes;

    std::vector<std::string> colaCircular;
    int capacidadCircular;
    int frente;
    int fin;
    int conteoCircular;

public:
    GestorPaquetes(int capacidadCircular = 5);

    void agregarPendiente(const Paquete& p);
    void procesarPendiente();

    void agregarUrgente(const Paquete& p);
    void procesarUrgente();

    void cargarPuntoControl(const std::string& punto);
    void simularDesplazamiento();
    void mostrarPosicionActual() const;

    void mostrarResumen() const;
};
