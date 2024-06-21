#include <windows.h>//for MS windows
#include <GL/glut.h>// GLUT, include glu.h and gl.h

void display() {
    glClearColor(1.0f,1.0f,1.0f,1.0f);// Set background color to
    glClear(GL_COLOR_BUFFER_BIT);//Clear the color buffer (background)


     glBegin(GL_LINES);
     glColor3f(1.0f,0.0f,0.0f);
     glVertex2f(1.0f,0.0f);
      glVertex2f(-1.0f,0.0f);
     glVertex2f(0.0f,1.0f);
      glVertex2f(0.0f,-1.0f);
      glEnd();



     glBegin(GL_POLYGON);
     glColor3f(0.0f,1.0f,0.0f);

    glVertex2f(-0.4f,0.2f);
    glVertex2f(-0.4f,0.3f);
    glVertex2f(0.4f,0.3f);
    glVertex2f(0.4f,0.2f);
    glVertex2f(0.5f,0.2f);
    glVertex2f(0.5f,0.1f);
    glVertex2f(0.4f,0.1f);
    glVertex2f(0.4f,0.0f);
    glVertex2f(-0.4f,0.0f);
    glVertex2f(-0.4f,0.1f);
    glVertex2f(-0.5f,0.1f);
    glVertex2f(-0.5f,0.2f);
      glEnd();

       glBegin(GL_POLYGON);
     glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.25f,0.2f);
    glVertex2f(0.25f,0.2f);
    glVertex2f(0.25f,0.1f);
    glVertex2f(-0.25f,0.1f);
     glEnd();

       glBegin(GL_POLYGON);
     glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.5f,0.1f);
    glVertex2f(-0.4f,0.1f);
    glVertex2f(-0.4f,0.0f);
    glVertex2f(-0.5f,0.0f);
     glEnd();

         glBegin(GL_POLYGON);
     glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(0.5f,0.1f);
    glVertex2f(0.4f,0.1f);
    glVertex2f(0.4f,0.0f);
    glVertex2f(0.5f,0.0f);
     glEnd();

         glBegin(GL_POLYGON);
     glColor3f(0.0f,1.0f,1.0f);
    glVertex2f(-0.25f,0.4f);
    glVertex2f(-0.1f,0.4f);
    glVertex2f(-0.1f,0.3f);
    glVertex2f(-0.25f,0.3f);
     glEnd();

      glBegin(GL_POLYGON);
     glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(-0.1f,0.4f);
    glVertex2f(0.25f,0.4f);
    glVertex2f(0.25f,0.3f);
    glVertex2f(-0.1f,0.3f);
     glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.25f,0.9f);
    glVertex2f(-0.1f,0.9f);
    glVertex2f(-0.1f,0.4f);
    glVertex2f(-0.25f,0.4f);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.0f,1.0f,1.0f);

    glVertex2f(0.1f,0.75f);
    glVertex2f(0.1f,0.9f);
    glVertex2f(0.25f,0.9f);
    glVertex2f(0.25f,0.4f);
    glVertex2f(-0.1f,0.4f);
     glVertex2f(-0.1f,0.75f);
     glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.4f,0.0f);
    glVertex2f(0.4f,0.0f);
    glVertex2f(0.4f,-0.1f);
    glVertex2f(-0.4f,-0.1f);
     glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.5f,0.0f);
    glVertex2f(-0.4f,0.0f);
    glVertex2f(-0.4f,-0.4f);
    glVertex2f(-0.5f,-0.4f);
     glEnd();

       glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.5f,0.0f);
    glVertex2f(0.4f,0.0f);
    glVertex2f(0.4f,-0.4f);
    glVertex2f(0.5f,-0.4f);
     glEnd();

       glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,1.0f);

    glVertex2f(-0.2f,-0.3f);
    glVertex2f(0.2f,-0.3f);
    glVertex2f(0.2f,-0.2f);
    glVertex2f(0.4f,-0.2f);
    glVertex2f(0.4f,-0.1f);
    glVertex2f(-0.2f,-0.1f);
     glEnd();

        glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(-0.4f,-0.2f);
    glVertex2f(-0.4f,-0.1f);
    glVertex2f(-0.2f,-0.1f);
    glVertex2f(-0.2f,-0.2f);
     glEnd();


       glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,1.0f);
    glVertex2f(-0.4f,-0.2f);
    glVertex2f(-0.25f,-0.2f);
    glVertex2f(-0.25f,-0.5f);
    glVertex2f(-0.4f,-0.5f);
     glEnd();

         glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,1.0f);
    glVertex2f(0.4f,-0.2f);
    glVertex2f(0.25f,-0.2f);
    glVertex2f(0.25f,-0.5f);
    glVertex2f(0.4f,-0.5f);
     glEnd();

      glBegin(GL_POLYGON);
     glColor3f(0.0f,1.0f,0.0f);

    glVertex2f(-0.2f,-0.3f);
    glVertex2f(-0.1f,-0.3f);
    glVertex2f(-0.1f,-0.5f);
    glVertex2f(-0.25f,-0.5f);
     glVertex2f(-0.25f,-0.2f);
     glVertex2f(-0.2f,-0.2f);
     glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,1.0f,0.0f);
    glVertex2f(0.2f,-0.3f);
    glVertex2f(0.1f,-0.3f);
    glVertex2f(0.1f,-0.5f);
    glVertex2f(0.25f,-0.5f);
     glVertex2f(0.25f,-0.2f);
       glVertex2f(0.2f,-0.2f);
     glEnd();


             glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.4f,-0.6f);
    glVertex2f(-0.4f,-0.5f);
    glVertex2f(-0.25f,-0.5f);
    glVertex2f(-0.25f,-0.6f);
     glEnd();

         glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(-0.25f,-0.6f);
    glVertex2f(-0.25f,-0.5f);
    glVertex2f(-0.1f,-0.5f);
    glVertex2f(-0.1f,-0.6f);
     glEnd();


          glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(0.4f,-0.6f);
    glVertex2f(0.4f,-0.5f);
    glVertex2f(0.25f,-0.5f);
    glVertex2f(0.25f,-0.6f);
     glEnd();

         glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.25f,-0.6f);
    glVertex2f(0.25f,-0.5f);
    glVertex2f(0.1f,-0.5f);
    glVertex2f(0.1f,-0.6f);
     glEnd();

    glFlush();


}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1080, 720);//(640,480);
    glutInitWindowPosition(180, 80);//
    glutCreateWindow("OpenGL Setup Test");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
