#include <GL/glut.h>
#include <windows.h>
#include <GL/gl.h>

void init (void) {
	glClearColor (1.0, 1.0, 1.0, 0.0);
	glLineWidth (1.0);
	glColor3f (1.0, 0.0, 0.0);
	glOrtho (-6,6, -6,6, -6,6);
}

void Display (void) {
	glClear (GL_COLOR_BUFFER_BIT);
	glBegin (GL_LINES);
	glVertex2f (-5.5, 0.0);
	glColor3f (1.0, 0.0, 0.0);
	glVertex2f (5.5, 0.0);
	glEnd ();
	glBegin (GL_LINES);
	glVertex2f (0.0, -5.5);
	glColor3f (1.0, 0.0, 0.0);
	glVertex2f (0.0, 5.5);
	glEnd ();
	glBegin (GL_TRIANGLES);
	glColor3f (1.0, 0.0, 0.0);
	glVertex2f (1.0, 1.0);
	glColor3f (0.0, 0.0, 1.0);
	glVertex2f (4.0, 1.0);
	glColor3f (0.0, 1.0, 0.0);
	glVertex2f (1.0, 5.0);
	glEnd ();
	
	glBegin (GL_POLYGON);
	glColor3f (0.0, 1.0, 0.0);
	glVertex2f (-1.0, -1.0);
	glColor3f (0.0, 0.0, 1.0);
	glVertex2f (-1.0, -5.0);
	glColor3f (1.0, 0.0, 0.0);
	glVertex2f (-4.0, -5.0);
	glColor3f (1.0, 0.43, 0.78);
	glVertex2f (-4.0, -1.0);
	glEnd ();
	
	glBegin (GL_POLYGON);
	glColor3f (1.0, 0.43, 0.78);
	glVertex2f (1.0, -1.0);
	glColor3f (0.0, 1.0, 1.0);
	glVertex2f (1.0, -5.0);
	glColor3f (1.0, 0.43, 0.78);
	glVertex2f (4.0, -5.0);
	glColor3f (1.0, 1.0, 0.0);
	glVertex2f (4.0, -1.0);
	glEnd ();

	glBegin (GL_TRIANGLES);
	glColor3f (0.0, 1.0, 1.0);
	glVertex2f (-1.0, 1.0);
	glColor3f (1.0, 0.43, 0.78);
	glVertex2f (-4.0, 1.0);
	glColor3f (1.0, 1.0, 0.0);
	glVertex2f (-1.0, 5.0);
	glEnd ();
	
	glutSwapBuffers ();
}
int main (int argc, char** argv) {
	glutInit (&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowPosition (0, 0);
	glutInitWindowSize (1500, 1500);
	glutCreateWindow ("bangun dasar grafik");
	init ();
	
	
	glutDisplayFunc (Display);
	glutMainLoop ();
	return 0;
}