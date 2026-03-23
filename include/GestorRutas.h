#pragma once
#include "Ruta.h"
#include <vector>
#include <string>
#include <map>

class GestorRutas {
private:
    Ruta ruta;

    std::vector<int> distancias1D;
    std::vector<std::string> etiquetas1D;

    std::vector<std::vector<int>> tiempos2D;
    std::vector<std::string> ciudades2D;

    std::map<std::pair<std::string,std::string>, int> matrizDispersa;

public:
    GestorRutas();

    void agregarCiudad(const std::string& nombre);
    void eliminarCiudadNombre(const std::string& nombre);
    void eliminarCiudadPosicion(int pos);
    void mostrarRuta() const;

    void cargarDistancias1D();
    void mostrarDistancias1D() const;

    void cargarTiempos2D();
    void mostrarTiempos2D() const;

    void agregarRutaPrioritaria(const std::string& origen, const std::string& destino, int prioridad);
    void mostrarMatrizDispersa() const;

    void mostrarResumen() const;
};
