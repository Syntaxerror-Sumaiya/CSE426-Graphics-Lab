#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.14159265

float r = 0.5;


void display(){

    //National Flag

    glBegin(GL_POLYGON); //Using polygon fills the circle. //GL_POINTS
    glColor3f(0,1,0);
    glVertex2f(1,0.6);//W:H=5:3=1:0.6
    glVertex2f(1,-0.6);
    glVertex2f(-1,-0.6);
    glVertex2f(-1,0.6);
    glEnd();


    glBegin(GL_POLYGON); //Using polygon fills the circle. //GL_POINTS
    for (float theta=0; theta<360; theta+=0.001){ //to make the points more clear we do theta+=0.01 instead of theta++
        float x = r * cos((theta*2*pi)/360);
        float y = r * sin((theta*2*pi)/360);
        glColor3f(1,0,0);
        glVertex2f(x,y);
    }
    glEnd();


    glFlush();


 }

int main(int argc, char **argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(300,300);
    glutCreateWindow("Sumaiya");
    glutDisplayFunc(display);
    //glutDisplayFunc(display2);
    glutMainLoop();
    return 0;

 }
