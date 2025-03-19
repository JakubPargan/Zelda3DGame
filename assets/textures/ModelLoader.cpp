#include <iostream>
#include <vector>
#include <tiny_obj_loader.h>

void loadModel(const char* filename) {
    tinyobj::attrib_t attrib;
    std::vector<tinyobj::shape_t> shapes;
    std::vector<tinyobj::material_t> materials;
    std::string warn, err;

    if (!tinyobj::LoadObj(&attrib, &shapes, &materials, &warn, &err, filename)) {
        std::cerr << "Fehler beim Laden des Modells: " << err << std::endl;
        return;
    }

    std::cout << "Modell erfolgreich geladen: " << filename << std::endl;
}
