#include <GL/glut.h>
void DrawBox(float TengahX, float TengahY, float Ukuran)

{
    float SetengahUK = Ukuran / 2.0f;
    glBegin(GL_QUADS);
    glVertex2f(TengahX - SetengahUK, TengahY - SetengahUK);
    glVertex2f(TengahX + SetengahUK, TengahY - SetengahUK);
    glVertex2f(TengahX + SetengahUK, TengahY + SetengahUK);
    glVertex2f(TengahX - SetengahUK, TengahY + SetengahUK);
    glEnd();
}

void Kubus(float TengahX, float TengahY, float Ukuran)
{
    float SetengahUK = Ukuran / 2.0f;
    glBegin(GL_LINE_LOOP);
    glVertex2f(TengahX - SetengahUK, TengahY - SetengahUK);
    glVertex2f(TengahX + SetengahUK, TengahY - SetengahUK);
    glVertex2f(TengahX + SetengahUK, TengahY + SetengahUK);
    glVertex2f(TengahX - SetengahUK, TengahY + SetengahUK);
    glEnd();
}

void DisplayTugas(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    float Ukuran = 0.3f;
    float Offset = 0.3f; 

    glColor3f(0.6f, 0.3f, 0.7f); 

    DrawBox(0.0f, 0.0f, Ukuran);
    DrawBox(0.0f, Offset, Ukuran);
    
    DrawBox(-Offset, -Offset, Ukuran);
    DrawBox(-Offset, 0.0f, Ukuran);
    DrawBox(-Offset, 2.0f * Offset, Ukuran);

    DrawBox(Offset, -Offset, Ukuran);
    DrawBox(Offset, 0.0f, Ukuran);
    DrawBox(Offset, 2.0f * Offset, Ukuran);

    glColor3f(0.0f, 0.0f, 0.0f); 
    glLineWidth(2.0f);

    Kubus(0.0f, 0.0f, Ukuran);
    Kubus(0.0f, Offset, Ukuran);
    
    Kubus(-Offset, -Offset, Ukuran);
    Kubus(-Offset, 0.0f, Ukuran);
    Kubus(-Offset, 2.0f * Offset, Ukuran);

    Kubus(Offset, -Offset, Ukuran);
    Kubus(Offset, 0.0f, Ukuran);
    Kubus(Offset, 2.0f * Offset, Ukuran);

    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.9f, 0.9f);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.7f, 0.9f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.8f, 0.6f);
    glVertex2f(-0.9f, 0.5f);
    glVertex2f(-0.7f, 0.5f);
    glVertex2f(-0.6f, 0.6f);
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(-0.9f, 0.3f);
    glVertex2f(-0.8f, 0.2f);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.6f, 0.2f);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glVertex2f(0.7f, 0.9f);
    glVertex2f(0.7f, 0.8f);
    glVertex2f(0.8f, 0.9f);
    glVertex2f(0.8f, 0.8f);
    glVertex2f(0.9f, 0.9f);
    glVertex2f(0.9f, 0.8f);
    glEnd();

    glFlush();
}

int main(int Argc, char* Argv[]) {
    glutInit(&Argc, Argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Tugas");
    glutDisplayFunc(DisplayTugas); 
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
