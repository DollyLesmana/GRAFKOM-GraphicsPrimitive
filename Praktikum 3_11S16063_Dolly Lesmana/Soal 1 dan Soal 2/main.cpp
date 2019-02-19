/*PRAKTIKUM 3*/
/*11S16063*/
/*DOLLY LESMANA*/



#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <GL/glut.h>
#include <math.h>

#include <stdlib.h> //Load library
#include <glut.h>   //Load library glut
#include <math.h>   //Load library aritmatik

void lingkar (int posx, int posy, int r)
{
    glBegin(GL_POLYGON);
    for (int i=0;i<360 ;i++)
    {
        float sudut=i*(2*3.14/360);
        float x=posx+r*cos(sudut);
        float y=posy+r*sin(sudut);
        glVertex2f(x,y);
    }

    glEnd();
    glFlush();
}

void renderScene ()
{
    glClear(GL_COLOR_BUFFER_BIT);
    /* ....*/
    glColor3f(0.,0.,1.);
    lingkar(-70,20,50);//kiri-kanan,atas-bawah,besar-kecil
    glColor3f(1.,1.,0.);
    lingkar(300,250,100);
    glColor3f(0.,1.,1.);
    lingkar(170,120,80);
    glColor3f(1.,0.,1.);
    lingkar(-170,120,105);
    glColor3f(0.,1.,0.);
    lingkar(190,-110,180);
    glColor3f(1.,0.,0.);
    lingkar(50,-60,50);
}

void main (int argc, char **argv)
{
    glutInit (&argc, argv);
    /* ... */
    glutInitDisplayMode (GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(150,150);
    glutInitWindowSize(640,440);
    glutCreateWindow("Ananda Putri Syaviri");
        gluOrtho2D(-640.,640.,-440.,440.);
    glutDisplayFunc(renderScene);
    glutMainLoop();
