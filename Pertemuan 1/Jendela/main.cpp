#include <GL/glut.h>

void DisplayJendela()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

int main(int Argc, char* Argv[])
{
    glutInit(&Argc, Argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Window");
    glutDisplayFunc(DisplayJendela); 
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
