#include<windows.h>
#include <GL/glut.h>

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 1200.0, 0.0, 1200.0);
}

void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);


    glColor3f(0.0, 0.0, 0.2);

    glPointSize(5.0);


    glColor3f(0.0, 0.0, 4.0);

    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2i(600, 600);
    glVertex2i(800,800);
    glVertex2i(1000,600);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.1);
    glVertex2f(600, 600);
    glVertex2f(1000,600);
    glVertex2f(1000, 200);
    glVertex2f(600,200);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2i(700, 200);
    glVertex2i(700,400);
    glVertex2i(800, 400);
    glVertex2i(800,200);


    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2i(700, 420);
    glVertex2i(700,427);
    glVertex2i(800, 427);
    glVertex2i(800,420);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2i(840, 218);
    glVertex2i(840, 298);
    glVertex2i(940, 298);
    glVertex2i(940, 221);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2i(841, 320);
    glVertex2i(841, 330);
    glVertex2i(938, 329);
    glVertex2i(939, 320);


    glEnd();


    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

    glutInitWindowPosition(400, 800);
    glutInitWindowSize(800, 600);
    glutCreateWindow("2D house");

    init();
    glutDisplayFunc(drawShapes);
    glutMainLoop();

    return 0;
}
