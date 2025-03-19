#include <GL/glut.h>
#include <SOIL/SOIL.h> // Library für Texturladen

GLuint loadTexture(const char* filename) {
    GLuint texture;
    texture = SOIL_load_OGL_texture(
        filename,
        SOIL_LOAD_AUTO,
        SOIL_CREATE_NEW_ID,
        SOIL_FLAG_INVERT_Y
    );

    if (texture == 0) {
        std::cout << "Fehler beim Laden der Textur: " << filename << std::endl;
    }
    return texture;
}
