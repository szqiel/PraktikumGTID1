#include <GL/glut.h>
void SegiEmpat(void)

{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1.0f, 1.0f, 0.0f, 1.0f);
    glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
    glFlush();
}

int main(int Argc, char* Argv[]) {
    glutInit(&Argc, Argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("SegiEmpat");
    glutDisplayFunc(SegiEmpat); 
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
