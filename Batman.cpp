#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
void body(){
    glColor3ub (0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(420, 140);
    glVertex2i(420, 340);
    glVertex2i(220, 340);
    glVertex2i(220, 140);
    glEnd();
    glFlush ();
public class welcome
{
	public static void main(String[] args)
	{
		System.out.println("Name:"+" "+"HABIBUR RAHMAN MASUM");
		System.out.println("ID: "+"22-46555-1");
		System.out.println("Course: "+"Object Oriented Pogramming 1");
		System.out.println("Section: "+"B");
		
	}
}
    glColor3ub (128, 128, 128);
    glBegin(GL_POLYGON);
    glVertex2i(380, 140);
    glVertex2i(380, 320);
    glVertex2i(260, 320);
    glVertex2i(260, 140);
    glEnd();
    glFlush ();
}

void belt(){
    glColor3ub (255, 255, 0);
    glBegin(GL_POLYGON);
    glVertex2i(380, 180);
    glVertex2i(380, 200);
    glVertex2i(260, 200);
    glVertex2i(260, 180);
    glEnd();
    glFlush ();
}

void pant(){
    glColor3ub (0, 0, 100);
    glBegin(GL_POLYGON);
    glVertex2i(380, 180);
    glVertex2i(340, 140);
    glVertex2i(300, 140);
    glVertex2i(260, 180);
    glEnd();
    glFlush ();
}

void bat(){
    glColor3ub (0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(335, 280);
    glVertex2i(335, 260);
    glVertex2i(305, 260);
    glVertex2i(305, 280);
    glEnd();
    glFlush ();
}

void leg(){
    glColor3ub (128, 128, 128);
    glBegin(GL_POLYGON);
    glVertex2i(300, 80);
    glVertex2i(300, 140);
    glVertex2i(260, 140);
    glVertex2i(260, 80);
    glEnd();
    glFlush ();

    glColor3ub (0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(300, 60);
    glVertex2i(300, 80);
    glVertex2i(260, 80);
    glVertex2i(260, 60);
    glEnd();
    glFlush ();

    glColor3ub (128, 128, 128);
    glBegin(GL_POLYGON);
    glVertex2i(380, 80);
    glVertex2i(380, 140);
    glVertex2i(340, 140);
    glVertex2i(340, 80);
    glEnd();
    glFlush ();

    glColor3ub (0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(380, 60);
    glVertex2i(380, 80);
    glVertex2i(340, 80);
    glVertex2i(340, 60);
    glEnd();
    glFlush ();
}

void neck(){
    glColor3ub (0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(380, 340);
    glVertex2i(380, 360);
    glVertex2i(260, 360);
    glVertex2i(260, 340);
    glEnd();
    glFlush ();
}

void head(){
    glColor3ub (0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(360, 360);
    glVertex2i(360, 410);
    glVertex2i(280, 410);
    glVertex2i(280, 360);
    glEnd();
    glFlush ();

    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2i(350, 400);
    glVertex2i(350, 410);
    glVertex2i(290, 410);
    glVertex2i(290, 400);
    glEnd();
    glFlush ();
}

void mouth(){
    glColor3ub (255, 195, 170);
    glBegin(GL_POLYGON);
    glVertex2i(345, 360);
    glVertex2i(345, 375);
    glVertex2i(295, 375);
    glVertex2i(295, 360);
    glEnd();
    glFlush ();
}

void myDisplay(void){
glClear (GL_COLOR_BUFFER_BIT);
glPointSize(1);
    body();
    leg();
    neck();
    head();
    mouth();
    belt();
    bat();
    pant();
}

void myInit (void)
{
glClearColor(255, 255, 255, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
