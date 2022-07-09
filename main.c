#include<GL/glut.h>
#include<stdio.h>
#include<math.h>

int rFlag = 0;
void display();
void reshape(int, int);
void timer(int);
void MyInit() {
    //glClearColor(0.9,1,0.8,1);
	glClearColor(0.9,0.9,1,0.4); // BG color
	glColor3f(1,1,1);
}
void cloud()
{
	float x, t, y, z;
	int i, j;

		int b = 0.001, c = 0.600;
		t = b + 0.001 * cos(0);
		z = c + 0.055 * sin(0);
		glColor3f(1.0, 0.9, 0); // SUN
		glBegin(GL_POLYGON);
		for (i = 1; i <= 360; i++)
		{
			x = i * 3.142 / 180;
			glVertex2f(-0.901 + 0.040 * cos(x), 0.690 + 0.050 * sin(x));
		}
		glEnd();

		glColor3f(1, 1, 1);
		// 1st cloud
		glBegin(GL_POLYGON);//first circle
		t = 0.600 + 0.050 * cos(0 * 3.142 / 180);
		z = 0.750 + 0.050 * sin(0 * 3.142 / 180);
		for (i = 0; i <= 360; i++)
		{
			x = i * 3.142 / 180;
			y = i * 3.142 / 180;
			glVertex2f(0.600 + 0.050 * cos(x), 0.750 + 0.050 * sin(y));
		}
		glEnd();
		glBegin(GL_POLYGON);//second circle
		for (int j = 0; j <= 360; j++)
		{
			x = j * 3.142 / 180;
			y = j * 3.142 / 180;
			glVertex2f(t + 0.080 * cos(x), z + 0.080 * sin(y));
		}
		glEnd();
		glBegin(GL_POLYGON);//third circle
		t = t + 0.070 * cos(0 * 3.142 / 180);
		z = z + 0.070 * sin(0 * 3.142 / 180);
		for (int k = 0; k <= 360; k++)
		{
			x = k * 3.142 / 180;
			y = k * 3.142 / 180;
			glVertex2f(t + 0.050 * cos(x), z + 0.050 * sin(y));
		}
		glEnd();

		//second cloud
		glBegin(GL_POLYGON);//first circle
		t = -0.600 + 0.050 * cos(0 * 3.142 / 180);
		z = 0.550 + 0.050 * sin(0 * 3.142 / 180);
		for (i = 0; i <= 360; i++)
		{
			x = i * 3.142 / 180;
			y = i * 3.142 / 180;
			glVertex2f(-0.600 + 0.050 * cos(x), 0.550 + 0.050 * sin(y));
		}
		glEnd();
		glBegin(GL_POLYGON);//second circle
		for (int j = 0; j <= 360; j++)
		{
			x = j * 3.142 / 180;
			y = j * 3.142 / 180;
			glVertex2f(t + 0.080 * cos(x), z + 0.080 * sin(y));
		}
		glEnd();
		glBegin(GL_POLYGON);//third circle
		t = t + 0.070 * cos(0 * 3.142 / 180);
		z = z + 0.070 * sin(0 * 3.142 / 180);
		for (int k = 0; k <= 360; k++)
		{
			x = k * 3.142 / 180;
			y = k * 3.142 / 180;
			glVertex2f(t + 0.050 * cos(x), z + 0.050 * sin(y));
		}
		glEnd();

		//third cloud
		glBegin(GL_POLYGON);//first circle
		t = -0.200 + 0.050 * cos(0 * 3.142 / 180);
		z = 0.750 + 0.050 * sin(0 * 3.142 / 180);
		for (i = 0; i <= 360; i++)
		{
			x = i * 3.142 / 180;
			y = i * 3.142 / 180;
			glVertex2f(-0.200 + 0.050 * cos(x), 0.750 + 0.050 * sin(y));
		}
		glEnd();
		glBegin(GL_POLYGON);//second circle
		for (int j = 0; j <= 360; j++)
		{
			x = j * 3.142 / 180;
			y = j * 3.142 / 180;
			glVertex2f(t + 0.080 * cos(x), z + 0.080 * sin(y));
		}
		glEnd();
		glBegin(GL_POLYGON);//third circle
		t = t + 0.070 * cos(0 * 3.142 / 180);
		z = z + 0.070 * sin(0 * 3.142 / 180);
		for (int k = 0; k <= 360; k++)
		{
			x = k * 3.142 / 180;
			y = k * 3.142 / 180;
			glVertex2f(t + 0.050 * cos(x), z + 0.050 * sin(y));
		}
		glEnd();
		glFlush();
		b = b + 0.300;
		c = c + 0.450;
	}

float x_position = -1.0; float x1_position = 1.0;
float y_position = -0.9; float y1_position = 0.9;
int state = 1;//right side

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
	cloud();
	glBegin(GL_POLYGON);
	glColor3f(0.9, 0, 0.5);
	glVertex3f(x_position - 0.22, y_position + 0, 0.1);
	glVertex3f(x_position - 0.21, y_position + 0.1, 0.1);
	glVertex3f(x_position - 0.19, y_position + 0.13, 0.1);
	glColor3f(0.9, -0.6,0);
	glVertex3f(x_position - 0.09, y_position + 0.17, 0.1);
	glVertex3f(x_position + 0.09, y_position + 0.17, 0.1);
	glColor3f(1, 0.9, 0.5);
	glVertex3f(x_position + 0.19, y_position + 0.13, 0.1);
	glVertex3f(x_position + 0.21, y_position + 0.1, 0.1);
	glVertex3f(x_position + 0.22, y_position + 0, 0.1);
	glColor3f(1, 0.5, 0);
	glVertex3f(x_position + 0.05, y_position + -0.4, 0.1);
	glVertex3f(x_position + -0.05, y_position + -0.4, 0.1);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(x_position - 0.05, y_position - 0.67, 0.1);
	glVertex3f(x_position + 0.05, y_position - 0.67, 0.1);
	glVertex3f(x_position + 0.05, y_position - 0.78, 0.1);
	glVertex3f(x_position + 0.04, y_position - 0.8, 0.1);
	glVertex3f(x_position - 0.04, y_position - 0.8, 0.1);
	glVertex3f(x_position - 0.05, y_position - 0.78, 0.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex3f(x_position + 0.05, y_position - 0.4, 0.1);
	glVertex3f(x_position + 0.05, y_position - 0.67, 0.1);
	glVertex3f(x_position - 0.05, y_position - 0.4, 0.1);
	glVertex3f(x_position - 0.05, y_position - 0.67, 0.1);
	glVertex3f(x_position + 0.03, y_position - 0.4, 0.1);
	glVertex3f(x_position + 0.03, y_position - 0.67, 0.1);
	glVertex3f(x_position - 0.03, y_position - 0.4, 0.1);
	glVertex3f(x_position - 0.03, y_position - 0.67, 0.1);
	glEnd();
    glutSwapBuffers();
    glFlush();
}
void AnimateMenu(int option)
{
	if (option == 1)
		rFlag = 1;
	if (option == 2)
		rFlag = 2;
	if (option == 3)
		rFlag = 3;
    if (option == 12)
		rFlag = 12;
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutCreateWindow("Parachute");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutTimerFunc(2, timer, 1);
	MyInit();
	glutCreateMenu(AnimateMenu);
    glutAddMenuEntry(">>>MENU",0);
	glutAddMenuEntry("Vertical & Horizontal Move", 1);
	glutAddMenuEntry("Horizontal Move", 2);
	glutAddMenuEntry("Vertical Move", 3);
	glutAddMenuEntry("Stop", 12);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
}
void reshape(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-0, 0, -0, 0);
	glMatrixMode(GL_MODELVIEW);
}
void timer(int) {
	glutPostRedisplay();
	glutTimerFunc(800 / 100, timer, 2);

	//para clrs
	if (rFlag == 1) {
		switch (state) {
		case 1:
			if (x_position < 0.9 || y_position < 0.2) {
				x_position += 0.002;
				y_position += 0.002;
			}
			else
				state = 2;
			break;
		case 2:
			if (x_position > -1 || y_position > -0.3) {
				x_position -= 0.002;
				y_position -= 0.002;
			}
			else
				state = 1;
			break;
		}
	}
	if (rFlag == 2) {
		switch (state) {
		case 1:
			if (x_position < 0.9) {
				x_position += 0.002;
			}
			else
				state = 2;
			break;
		case 2:
			if (x_position > -1) {
				x_position -= 0.002;
			}
			else
				state = 1;
			break;
		}
	}
	if (rFlag == 3) {
		switch (state) {
		case 1:
			if (y_position < 1.0) {
				y_position += 0.002;
			}
			else
				state = 2;
			break;
		case 2:
			if (y_position > -1.0) {
				y_position -= 0.002;
			}
			else
				state = 1;
			break;
		}
	}
	}
