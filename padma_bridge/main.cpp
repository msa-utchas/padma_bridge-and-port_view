#include <windows.h>
#include <GL/glut.h>
#include<math.h>
# define PI    3.14159265358979323846

void day();
void night();
void rain();



GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed = 0.1f;
GLfloat speed1 = 0.03f;


GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat speed2 = 0.05f;
GLfloat speed3 = 0.03f;
GLfloat position4 = 0.0f;
GLfloat speed4 = 0.1f;
GLfloat speedr = 0.5f;

GLfloat positionr = 0.0f;
void updater(int value) {

    if(positionr <-1.0)
        positionr = 1.0f;

    positionr -= speedr; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, updater, 0);
}

void update(int value) {

    if(position >1.0)
        position = -1.0f;

    position += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void update1(int value) {

    if(position1 <-1.0)
        position1 = 1.0f;

    position1 -= speed1; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void update2(int value) {

    if(position2 >1.0)
        position2 = -1.0f;

    position2 += speed2; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}


void update3(int value) {

    if(position3 <-1.0)
        position3 = 1.0f;

    position3 -= speed3; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}

void update4(int value) {

    if(position4 >1.0)
        position4 = -1.0f;

    position4 += speed4; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update4, 0);
}

GLfloat h = 0.0f;
GLfloat m = 0.0f;
GLfloat s = 0.0f;
GLfloat j = 0.0f;
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}


void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 's':
    speed = 0.0f;
    break;
case 'w':
    speed = 0.02f;
    break;
case 'd':
    glutDisplayFunc(day);
    break;
case 'n':
    glutDisplayFunc(night);
    break;
glutPostRedisplay();
	}
}
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			glutDisplayFunc(rain);
			}
    if (button == GLUT_RIGHT_BUTTON){
            glutDisplayFunc(day);
			}
	glutPostRedisplay();
}

void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
speed+=.05;
break;
case GLUT_KEY_DOWN:
speed-=.01;
break;
case GLUT_KEY_LEFT:
speed1 += 0.01f;
break;
case GLUT_KEY_RIGHT:
speed1 -= 0.01f;
break;}
glutPostRedisplay();
}
//--------------------------------

void day_demo(int a)
{
    glutDisplayFunc(day);
}
void night_demo(int a)
{
    glutDisplayFunc(night);
}
void rain_demo(int a)
{
    glutDisplayFunc(rain);
}
//--------------------------------


void day()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(1);

    //-----------------------------------------

//sky start
glBegin(GL_QUADS);
	glColor3ub(176, 233, 254);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glEnd();
//sky end

//land start
glBegin(GL_QUADS);
	glColor3ub(59, 63, 75);
	glVertex2f(1.0f, -0.0f);
	glVertex2f(-1.0f, -0.0f);
	glVertex2f(-1.0f, -0.1f);
	glVertex2f(1.0f, -0.1f);
	glEnd();
//land end

//water start
glBegin(GL_QUADS);
	glColor3ub(18, 190, 252);
	glVertex2f(1.0f, -0.1f);
	glVertex2f(-1.0f, -0.1f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.f);
	glEnd();
//water end

//sun start

//circle start
//2
   GLfloat x=-0.85f;GLfloat y=0.85f;  GLfloat radius =0.1f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(251, 252, 170);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
\
//circle end
//sun end

//---------------------------------------

//cloud start

//cloud start
glPushMatrix();
glTranslatef(position1,0,0);
//circle start
//1
    x=0.1f; y=0.8f;   radius =0.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end

//circle start
//2
    x=0.25f; y=0.85f;   radius =0.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end

//circle start
//3
    x=0.4f; y=0.85f;   radius =0.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end
glPopMatrix();
//cloud end
//cloud end
glTranslatef(0.3f,-0.1f,0.0f);
glTranslatef(position1,0,0);

glScalef(1.2,1,0);
//circle start
//1
    x=0.1f; y=0.8f;   radius =0.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end

//circle start
//2
    x=0.25f; y=0.85f;   radius =0.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end

//circle start
//3
    x=0.4f; y=0.85f;   radius =0.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end
glPopMatrix();
glLoadIdentity();

//cloud copy end

//--------------------------------------------
glPushMatrix();
glTranslatef(position3,0,0);
glScalef(0.7,0.7,0);
//ship 2
//triangle start
//2
glBegin(GL_TRIANGLES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.9f, -0.3f);
	glVertex2f(0.7f, -0.4f);
	glVertex2f(0.8f, -0.4f);
	glEnd();
//triangle end

//quads start
//3
glBegin(GL_QUADS);
	glColor3ub(41, 84, 44);
	glVertex2f(0.6f, -0.3f);
	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.5f, -0.4f);
	glVertex2f(0.6f, -0.4f);
	glEnd();
//quads end

//quads start
//4
glBegin(GL_QUADS);
	glColor3ub(22, 29, 111);
	glVertex2f(0.6f, -0.2f);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.6f, -0.3f);
	glEnd();
//quads end

//quads start
//5
glBegin(GL_QUADS);
	glColor3ub(152, 158, 38);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.4f, -0.3f);
	glVertex2f(0.5f, -0.3f);
	glEnd();
//quads end

//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(0, 120, 255);
	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.4f, -0.3f);
	glVertex2f(0.4f, -0.4f);
	glVertex2f(0.5f, -0.4f);
	glEnd();
//quads end

//quads start
//7
glBegin(GL_QUADS);
	glColor3ub(0, 0, 255);
	glVertex2f(0.4f, -0.3f);
	glVertex2f(0.2f, -0.3f);
	glVertex2f(0.2f, -0.4f);
	glVertex2f(0.4f, -0.4f);
	glEnd();
//quads end

//quads start
//8
glBegin(GL_QUADS);
	glColor3ub(0, 0, 255);
	glVertex2f(0.2f, -0.3f);
	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(0.2f, -0.4f);
	glEnd();
//quads end

//triangle start
//9
glBegin(GL_TRIANGLES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.3f, -0.3f);
	glEnd();
//triangle end

//triangle start
//10
glBegin(GL_TRIANGLES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(-0.1f, -0.3f);
	glVertex2f(0.0f, -0.4f);
	glEnd();
//triangle end

//polygon began
//3
glBegin(GL_POLYGON);

	glColor3ub(102, 0, 0);
	glVertex2f(0.8f, -0.4f);
	glVertex2f(0.0f, -0.4f);
	glVertex2f(0.1f, -0.5f);
	glVertex2f(0.7f, -0.5f);
	glEnd();
//polygon end
glPopMatrix();
glLoadIdentity();
//ship2 end

//----------------------------------

//car

//circle start

glPushMatrix();
glTranslatef(position,0,0);
//1
//polygon began
glBegin(GL_POLYGON);

	glColor3ub(102, 0, 0);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.1f, 0.15f);
	glVertex2f(-0.35f, 0.15f);
	glVertex2f(-0.35f, 0.05f);

	glEnd();
//polygon end

//1
 x=-0.2f;
  y=0.05f;
  radius =0.05f;
 triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(18, 16, 19);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end

//circle start
//2
    x=0.0f; y=.05f;   radius =.05f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(18, 16, 19);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end





//polygon began
//4
glBegin(GL_POLYGON);

	glColor3ub(189, 216, 249);
	glVertex2f(0.1f, 0.15f);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.0f, 0.2f);
	glVertex2f(0.0f, 0.15f);

	glEnd();
//polygon end


//triangle start
//5
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(0.0f, 0.2f);
	glEnd();
//triangle end

//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(102, 0, 0);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(-0.05f, 0.25f);
	glVertex2f(-0.05f, 0.15f);
	glVertex2f(0.0f, 0.15f);
	glEnd();
//quads end



//quads start
//7
glBegin(GL_QUADS);
	glColor3ub(41, 84, 44);
	glVertex2f(-0.05f, 0.2f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.15f, 0.15f);
	glVertex2f(-0.05f, 0.15f);
	glEnd();
//quads end
//quads start
//10
glBegin(GL_QUADS);
	glColor3ub(-0, 120, 255);
	glVertex2f(-0.1f, 0.3f);
	glVertex2f(-0.2f, 0.3f);
	glVertex2f(-0.2f, 0.2f);
	glVertex2f(-0.1f, 0.2f);
	glEnd();
//quads end

//quads start
//8
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.15f, 0.15f);
	glVertex2f(-0.15f, 0.25f);
	glVertex2f(-0.25f, 0.25f);
	glVertex2f(-0.25f, 0.15f);
	glEnd();
//quads end
//quads start
//9
glBegin(GL_QUADS);
	glColor3ub(-0, 0, 255);
	glVertex2f(-0.25f, 0.15f);
	glVertex2f(-0.25f, 0.2f);
	glVertex2f(-0.3f, 0.2f);
	glVertex2f(-0.3f, 0.15f);
	glEnd();
//quads end
glPopMatrix();
glLoadIdentity();
//car end

//------------------------------------------------

//house began
//quads start
//1
glBegin(GL_QUADS);
	glColor3ub(14, 0, 255);
	glVertex2f(0.85f, 0.15f);
	glVertex2f(0.6f, 0.15f);
	glVertex2f(0.6f, 0.0f);
	glVertex2f(0.85f, 0.0f);
	glEnd();
//quads end


//quads start
//2
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.75f, 0.1f);
	glVertex2f(0.7f, 0.1f);
	glVertex2f(0.7f, 0.0f);
	glVertex2f(0.75f, 0.0f);
	glEnd();
//quads end



//quads start
//3
glBegin(GL_QUADS);
	glColor3ub(41, 84, 44);
	glVertex2f(0.85f, 0.3f);
	glVertex2f(0.6f, 0.3f);
	glVertex2f(0.6f, 0.15f);
	glVertex2f(0.85f, 0.15f);
	glEnd();
//quads end



//quads start
//4
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.7f, 0.25f);
	glVertex2f(0.65f, 0.25f);
	glVertex2f(0.65f, 0.2f);
	glVertex2f(0.7f, 0.2f);
	glEnd();
//quads end



//quads start
//5
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.8f, 0.25f);
	glVertex2f(0.75f, 0.25f);
	glVertex2f(0.75f, 0.2f);
	glVertex2f(0.8f, 0.2f);
	glEnd();
//quads end



//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(0, 170, 255);
	glVertex2f(0.85f, 0.45f);
	glVertex2f(0.6f, 0.45f);
	glVertex2f(0.6f, 0.3f);
	glVertex2f(0.85f, 0.3f);
	glEnd();
//quads end



//quads start
//7
glBegin(GL_QUADS);
	glColor3ub(0, 0, 255);
	glVertex2f(0.8f, 0.4f);
	glVertex2f(0.75f, 0.4f);
	glVertex2f(0.75f, 0.35f);
	glVertex2f(0.8f, 0.35f);
	glEnd();
//quads end



//quads start
//8
glBegin(GL_QUADS);
	glColor3ub(0, 0, 255);
	glVertex2f(0.85f, 0.55f);
	glVertex2f(0.75f, 0.55f);
	glVertex2f(0.75f, 0.45f);
	glVertex2f(0.85f, 0.45f);
	glEnd();
//quads end



//triangle start
//9
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.85f, 0.55f);
	glVertex2f(0.75f, 0.55f);
	glVertex2f(0.8f, 0.6f);
	glEnd();
//triangle end

//house end;


//----------------------------------------------------

//ship 3 start

glPushMatrix();
glTranslatef(position4,0,0);
glScalef(0.7,0.7,0);
glTranslatef(0,-0.2,0);
//polygon began
//1
glBegin(GL_POLYGON);

	glColor3ub(0, 0, 0);
	glVertex2f(-0.3f, -0.65f);
	glVertex2f(-0.9f, -0.65f);
	glVertex2f(-0.8f, -0.7f);
	glVertex2f(-0.4f, -0.7f);

	glEnd();
//polygon end

//polygon began
//2
glBegin(GL_POLYGON);

	glColor3ub(102, 0, 0);
	glVertex2f(-0.2f, -0.6f);
	glVertex2f(-1.0f, -0.6f);
	glVertex2f(-0.9f, -0.65f);
	glVertex2f(-0.3f, -0.65);

	glEnd();
//polygon end


//quads start
//3
glBegin(GL_QUADS);
	glColor3ub(22, 29, 111);
	glVertex2f(-0.4f, -0.55f);
	glVertex2f(-0.8f, -0.55f);
	glVertex2f(-0.8f, -0.6f);
	glVertex2f(-0.4f, -0.6f);
	glEnd();
//quads end
//quads start
//4
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.7f, -0.4f);
	glVertex2f(-0.75f, -0.4f);
	glVertex2f(-0.75f, -0.55f);
	glVertex2f(-0.7f, -0.55f);
	glEnd();
//quads end

//quads start
//5
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.55f, -0.4f);
	glVertex2f(-0.65f, -0.4f);
	glVertex2f(-0.65f, -0.55f);
	glVertex2f(-0.55f, -0.55f);
	glEnd();
//quads end

//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45f, -0.4f);
	glVertex2f(-0.5f, -0.4f);
	glVertex2f(-0.5f, -0.55f);
	glVertex2f(-0.45f, -0.55f);
	glEnd();
//quads end

glPopMatrix();
glLoadIdentity();
//ship 3 end


//------------------------------------------------------

//krain 2 start


//quads start
//1
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.45f, 0.05f);
	glVertex2f(-0.6f, 0.05f);
	glVertex2f(-0.6f, 0.0f);
	glVertex2f(-0.45f, 0.0f);
	glEnd();
	//glFlush();
//quads end

//quads start
//2
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.5f, 0.05f);
	glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.55f, 0.6f);
	glVertex2f(-0.55f, 0.05f);
	glEnd();
	//glFlush();
//quads end


//triangle start
//3
glBegin(GL_TRIANGLES);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.35f, 0.85f);
	glVertex2f(-0.55f, 0.6f);
	glEnd();
//triangle end

//lines start
//4
glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.35f, 0.85f);
    glVertex2f(-0.4f, 0.45f);
    glEnd();
//lines end


//lines start
//5
glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.35f, 0.85f);
    glVertex2f(-0.35f, 0.45f);
    glEnd();
//lines end




//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(22, 29, 111);
	glVertex2f(-0.3f, 0.45f);
	glVertex2f(-0.45f, 0.45f);
	glVertex2f(-0.45f, 0.35f);
	glVertex2f(-0.3f, 0.35f);
	glEnd();
//quads end

//krain 2 end
//-----------------------------------------------------------




//windmill start
glTranslatef(0.8, 0.6,0);
glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
glRotatef(j,0.0,0.0,1.0);



	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, 0.06f);
    glVertex2f( 0.07f, 0.14f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.13f, 0.09f);
    glVertex2f( -0.15f, -0.01f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);

  glVertex2f( 0.02f, -0.15f);
    glVertex2f( 0.13f, -0.12f);
    glEnd();

j+=0.1f;

glPopMatrix();
glLoadIdentity();
//windmill end

//-------------------------------------------------

//clock start
//quads start
//1
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.7f, 0.05f);
	glVertex2f(-0.85f, 0.05f);
	glVertex2f(-0.85f, 0.0f);
	glVertex2f(-0.7f, 0.0f);
	glEnd();

//quads end

//quads start
//2
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.75f, 0.05f);
	glVertex2f(-0.8f, 0.05f);
	glVertex2f(-0.8f, 0.5f);
	glVertex2f(-0.75f, 0.5f);
	glEnd();
//quads end


//triangle start
//3
glBegin(GL_TRIANGLES);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.774f, 0.556f);
	glVertex2f(-0.8f, 0.5f);
	glVertex2f(-0.75f, 0.5f);
	glEnd();


glLoadIdentity();
glTranslatef(-0.774, 0.556,0);
glScalef(.2,.2,0);

//outer circle start
    x=0.0f; y=0.0f;   radius =0.8f;
	triangleAmount = 40;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(25, 121, 86);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//circle end


//polygon hour began
    glPushMatrix();
    glRotatef(h,0.0,0.0,1.0);
glBegin(GL_POLYGON);

	glColor3ub(255, 0, 14);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.05f, 0.35f);
	glVertex2f(0.0f, 0.425f);
	glVertex2f(-0.05f, 0.35f);

	glEnd();
	h-=0.00000046;
glPopMatrix();

//polygon end


//polygon minute began
    glPushMatrix();
    glRotatef(m,0.0,0.0,1.0);
glBegin(GL_POLYGON);

	glColor3ub(125, 0, 255);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.025f, 0.425f);
	glVertex2f(0.0f, 0.55f);
	glVertex2f(-0.025f, 0.425f);

	glEnd();

	  m-=.0000277;
      glPopMatrix();

//polygon end
//polygon second began
    glPushMatrix();
    glRotatef(s,0.0,0.0,1.0);
    glBegin(GL_POLYGON);

	glColor3ub(124, 1, 14);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.025f, 0.525f);
	glVertex2f(0.0f, 0.7f);
	glVertex2f(-0.025f, 0.525f);

	glEnd();
	s-=0.001666f;
    glPopMatrix();


    //t12
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.0f, 0.725f);
    glVertex2f( 0.0251f, 0.775f);
    glVertex2f( -0.025f, 0.775f);
    glEnd();


//t1
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.375f, 0.625f);
    glVertex2f( 0.425f, 0.65f);
    glVertex2f( 0.375f, 0.675f);
    glEnd();


//t2
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.65f, 0.325f);
    glVertex2f( 0.7f, 0.325f);
    glVertex2f( 0.675f, 0.375f);
    glEnd();


//t3
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.725f, 0.0f);
    glVertex2f(0.775f, -0.025f);
    glVertex2f(0.775f, 0.025f);
    glEnd();


//t4
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.675f, -0.375f);
    glVertex2f(0.7f, -0.325f);
    glVertex2f(0.65f, -0.325f);
    glEnd();

    //t5
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.4f, -0.6f);
    glVertex2f(0.4f, -0.65f);
    glVertex2f(0.455f, -0.625f);
    glEnd();


    //t6
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.025f, -0.775f);
    glVertex2f(-0.025f, -0.775f);
    glVertex2f( 0.0f, -0.725f);
    glEnd();

      //t7
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.375f, -0.675f);
    glVertex2f( -0.37551f, -0.625f);
    glVertex2f( -0.425f, -0.65f);
    glEnd();

      //t8
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.675f, -0.375f);
    glVertex2f( -0.65f, -0.325f);
    glVertex2f( -0.7f, -0.325f);
    glEnd();


      //t9
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.775f, -0.025f);
    glVertex2f( -0.725f, 0.0f);
    glVertex2f( -0.7755f, 0.025f);
    glEnd();

      //t10
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.65f, 0.325f);
    glVertex2f( -0.675f, 0.375f);
    glVertex2f( -0.7f, 0.325f);
    glEnd();

      //t11
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.4f, 0.6f);
    glVertex2f( -0.41f, 0.65f);
    glVertex2f( -0.45f, 0.625f);
    glEnd();
glLoadIdentity();
//polygon end

//clock end


//-------------------------------------------------------------------------

//car copy start
//car

glPushMatrix();
glTranslatef(position2,0,0);
//polygon began
//3
glTranslatef(0.4f,0.0f,0.0f);
glScalef(0.7,0.7,0);

//polygon end

//circle start


//1
//polygon began
glBegin(GL_POLYGON);

	glColor3ub(102, 0, 0);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.1f, 0.15f);
	glVertex2f(-0.35f, 0.15f);
	glVertex2f(-0.35f, 0.05f);

	glEnd();
	//glFlush();
//polygon end

//1
x=-0.2f;
y=0.05f;
radius =0.05f;
triangleAmount = 20;
twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(18, 16, 19);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//glFlush();

//circle end

//circle start
//2
    x=0.0f; y=.05f;   radius =.05f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(18, 16, 19);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//glFlush();

//circle end





//polygon began
//4
glBegin(GL_POLYGON);

	glColor3ub(189, 216, 249);
	glVertex2f(0.1f, 0.15f);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.0f, 0.2f);
	glVertex2f(0.0f, 0.15f);

	glEnd();
	//glFlush();
//polygon end


//triangle start
//5
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(0.0f, 0.2f);
	glEnd();
	//glFlush();
//triangle end

//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(102, 0, 0);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(-0.05f, 0.25f);
	glVertex2f(-0.05f, 0.15f);
	glVertex2f(0.0f, 0.15f);
	glEnd();
	//glFlush();
//quads end



//quads start
//7
glBegin(GL_QUADS);
	glColor3ub(41, 84, 44);
	glVertex2f(-0.05f, 0.2f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.15f, 0.15f);
	glVertex2f(-0.05f, 0.15f);
	glEnd();
	//glFlush();
//quads end
//quads start
//10
glBegin(GL_QUADS);
	glColor3ub(-0, 120, 255);
	glVertex2f(-0.1f, 0.3f);
	glVertex2f(-0.2f, 0.3f);
	glVertex2f(-0.2f, 0.2f);
	glVertex2f(-0.1f, 0.2f);
	glEnd();
	//glFlush();
//quads end

//quads start
//8
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.15f, 0.15f);
	glVertex2f(-0.15f, 0.25f);
	glVertex2f(-0.25f, 0.25f);
	glVertex2f(-0.25f, 0.15f);
	glEnd();
//quads end
//quads start
//9
glBegin(GL_QUADS);
	glColor3ub(-0, 0, 255);
	glVertex2f(-0.25f, 0.15f);
	glVertex2f(-0.25f, 0.2f);
	glVertex2f(-0.3f, 0.2f);
	glVertex2f(-0.3f, 0.15f);
	glEnd();
//quads end
glPopMatrix();
glLoadIdentity();
//car copy end
//------------------------------------------
 //ship 3
 glTranslatef(position1,0,0);
glTranslatef(0.4,-0.4,0);
glScalef(0.8,0.8,0);
 glBegin(GL_POLYGON);

    glColor3ub(118, 2, 2);
    glVertex2f(0.6f, -0.4f);    // ship 2 main body
	glVertex2f(0.0f, -0.4f);
	glVertex2f(0.0f, -0.43f);
	glVertex2f(0.06f, -0.5f);
	glVertex2f(0.54f, -0.5f);
	glVertex2f(0.6f, -0.43f);
    glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(0, 160, 56);
    glVertex2f(0.54f, -0.37f);    // ship 2 container 1
	glVertex2f(0.06f, -0.37f);
	glVertex2f(0.06f, -0.4f);
	glVertex2f(0.54f, -0.4f);
    glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(0.53f, -0.34f);    // ship 2 container 2
	glVertex2f(0.07f, -0.34f);
	glVertex2f(0.07f, -0.37f);
	glVertex2f(0.53f, -0.37f);
    glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(30, 30, 30);
    glVertex2f(0.14f, -0.24f);    // ship 2 smoke pipe left
	glVertex2f(0.11f, -0.24f);
	glVertex2f(0.11f, -0.34f);
	glVertex2f(0.14f, -0.34f);
    glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(30, 30, 30);
    glVertex2f(0.34f, -0.24f);    // ship 2 smoke pipe mid
	glVertex2f(0.26f, -0.24f);
	glVertex2f(0.26f, -0.34f);
	glVertex2f(0.34f, -0.34f);
    glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(30, 30, 30);
    glVertex2f(0.49f, -0.24f);    // ship 2 smoke pipe right
	glVertex2f(0.46f, -0.24f);
	glVertex2f(0.46f, -0.34f);
	glVertex2f(0.49f, -0.34f);
    glEnd();

    glLoadIdentity();

 //ship 3 end
//------------------------------------------------------------
glutTimerFunc(3000,rain_demo,9);
glFlush();



}

void night()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(1);

    //-----------------------------------------

//sky start
glBegin(GL_QUADS);
	glColor3ub(10, 16, 43);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glEnd();
//sky end

//land start
glBegin(GL_QUADS);
	glColor3ub(59, 63, 75);
	glVertex2f(1.0f, -0.0f);
	glVertex2f(-1.0f, -0.0f);
	glVertex2f(-1.0f, -0.1f);
	glVertex2f(1.0f, -0.1f);
	glEnd();
//land end

//water start
glBegin(GL_QUADS);
	glColor3ub(2, 41, 107);
	glVertex2f(1.0f, -0.1f);
	glVertex2f(-1.0f, -0.1f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.f);
	glEnd();
//water end


//circle end


//---------------------------------------

GLfloat x=.8f; GLfloat y=.8f; GLfloat radius =.09f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
    glColor3ub(254,252,215);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),       // The bright full moon
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//--------------------------------------------
glPushMatrix();
glTranslatef(position3,0,0);
glScalef(0.7,0.7,0);
//ship 2
//triangle start
//2
glBegin(GL_TRIANGLES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.9f, -0.3f);
	glVertex2f(0.7f, -0.4f);
	glVertex2f(0.8f, -0.4f);
	glEnd();
//triangle end

//quads start
//3
glBegin(GL_QUADS);
	glColor3ub(41, 84, 44);
	glVertex2f(0.6f, -0.3f);
	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.5f, -0.4f);
	glVertex2f(0.6f, -0.4f);
	glEnd();
//quads end

//quads start
//4
glBegin(GL_QUADS);
	glColor3ub(22, 29, 111);
	glVertex2f(0.6f, -0.2f);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.6f, -0.3f);
	glEnd();
//quads end

//quads start
//5
glBegin(GL_QUADS);
	glColor3ub(152, 158, 38);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.4f, -0.3f);
	glVertex2f(0.5f, -0.3f);
	glEnd();
//quads end

//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(0, 120, 255);
	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.4f, -0.3f);
	glVertex2f(0.4f, -0.4f);
	glVertex2f(0.5f, -0.4f);
	glEnd();
//quads end

//quads start
//7
glBegin(GL_QUADS);
	glColor3ub(0, 0, 255);
	glVertex2f(0.4f, -0.3f);
	glVertex2f(0.2f, -0.3f);
	glVertex2f(0.2f, -0.4f);
	glVertex2f(0.4f, -0.4f);
	glEnd();
//quads end

//quads start
//8
glBegin(GL_QUADS);
	glColor3ub(0, 0, 255);
	glVertex2f(0.2f, -0.3f);
	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(0.2f, -0.4f);
	glEnd();
//quads end

//triangle start
//9
glBegin(GL_TRIANGLES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.3f, -0.3f);
	glEnd();
//triangle end

//triangle start
//10
glBegin(GL_TRIANGLES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(-0.1f, -0.3f);
	glVertex2f(0.0f, -0.4f);
	glEnd();
//triangle end

//polygon began
//3
glBegin(GL_POLYGON);

	glColor3ub(102, 0, 0);
	glVertex2f(0.8f, -0.4f);
	glVertex2f(0.0f, -0.4f);
	glVertex2f(0.1f, -0.5f);
	glVertex2f(0.7f, -0.5f);
	glEnd();
//polygon end
glPopMatrix();
glLoadIdentity();
//ship2 end

//----------------------------------

//car

//circle start

//glPushMatrix();
//glTranslatef(position,0,0);
//1
//polygon began
glBegin(GL_POLYGON);

	glColor3ub(102, 0, 0);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.1f, 0.15f);
	glVertex2f(-0.35f, 0.15f);
	glVertex2f(-0.35f, 0.05f);

	glEnd();
//polygon end

//1
x=-0.2f;
y=0.05f;
radius =0.05f;
triangleAmount = 20;
twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(18, 16, 19);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end

//circle start
//2
    x=0.0f; y=.05f;   radius =.05f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(18, 16, 19);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end





//polygon began
//4
glBegin(GL_POLYGON);

	glColor3ub(189, 216, 249);
	glVertex2f(0.1f, 0.15f);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.0f, 0.2f);
	glVertex2f(0.0f, 0.15f);

	glEnd();
//polygon end


//triangle start
//5
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(0.0f, 0.2f);
	glEnd();
//triangle end

//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(102, 0, 0);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(-0.05f, 0.25f);
	glVertex2f(-0.05f, 0.15f);
	glVertex2f(0.0f, 0.15f);
	glEnd();
//quads end



//quads start
//7
glBegin(GL_QUADS);
	glColor3ub(41, 84, 44);
	glVertex2f(-0.05f, 0.2f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.15f, 0.15f);
	glVertex2f(-0.05f, 0.15f);
	glEnd();
//quads end
//quads start
//10
glBegin(GL_QUADS);
	glColor3ub(-0, 120, 255);
	glVertex2f(-0.1f, 0.3f);
	glVertex2f(-0.2f, 0.3f);
	glVertex2f(-0.2f, 0.2f);
	glVertex2f(-0.1f, 0.2f);
	glEnd();
//quads end

//quads start
//8
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.15f, 0.15f);
	glVertex2f(-0.15f, 0.25f);
	glVertex2f(-0.25f, 0.25f);
	glVertex2f(-0.25f, 0.15f);
	glEnd();
//quads end
//quads start
//9
glBegin(GL_QUADS);
	glColor3ub(-0, 0, 255);
	glVertex2f(-0.25f, 0.15f);
	glVertex2f(-0.25f, 0.2f);
	glVertex2f(-0.3f, 0.2f);
	glVertex2f(-0.3f, 0.15f);
	glEnd();
//quads end
//glPopMatrix();
//glLoadIdentity();
//car end

//------------------------------------------------

//house began
//quads start
//1
glBegin(GL_QUADS);
	glColor3ub(14, 0, 255);
	glVertex2f(0.85f, 0.15f);
	glVertex2f(0.6f, 0.15f);
	glVertex2f(0.6f, 0.0f);
	glVertex2f(0.85f, 0.0f);
	glEnd();
//quads end


//quads start
//2
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.75f, 0.1f);
	glVertex2f(0.7f, 0.1f);
	glVertex2f(0.7f, 0.0f);
	glVertex2f(0.75f, 0.0f);
	glEnd();
//quads end



//quads start
//3
glBegin(GL_QUADS);
	glColor3ub(41, 84, 44);
	glVertex2f(0.85f, 0.3f);
	glVertex2f(0.6f, 0.3f);
	glVertex2f(0.6f, 0.15f);
	glVertex2f(0.85f, 0.15f);
	glEnd();
//quads end



//quads start
//4
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.7f, 0.25f);
	glVertex2f(0.65f, 0.25f);
	glVertex2f(0.65f, 0.2f);
	glVertex2f(0.7f, 0.2f);
	glEnd();
//quads end



//quads start
//5
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.8f, 0.25f);
	glVertex2f(0.75f, 0.25f);
	glVertex2f(0.75f, 0.2f);
	glVertex2f(0.8f, 0.2f);
	glEnd();
//quads end



//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(0, 170, 255);
	glVertex2f(0.85f, 0.45f);
	glVertex2f(0.6f, 0.45f);
	glVertex2f(0.6f, 0.3f);
	glVertex2f(0.85f, 0.3f);
	glEnd();
//quads end



//quads start
//7
glBegin(GL_QUADS);
	glColor3ub(0, 0, 255);
	glVertex2f(0.8f, 0.4f);
	glVertex2f(0.75f, 0.4f);
	glVertex2f(0.75f, 0.35f);
	glVertex2f(0.8f, 0.35f);
	glEnd();
//quads end



//quads start
//8
glBegin(GL_QUADS);
	glColor3ub(0, 0, 255);
	glVertex2f(0.85f, 0.55f);
	glVertex2f(0.75f, 0.55f);
	glVertex2f(0.75f, 0.45f);
	glVertex2f(0.85f, 0.45f);
	glEnd();
//quads end



//triangle start
//9
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.85f, 0.55f);
	glVertex2f(0.75f, 0.55f);
	glVertex2f(0.8f, 0.6f);
	glEnd();
//triangle end

//house end;


//----------------------------------------------------

//ship 3 start

glPushMatrix();
glTranslatef(position4,0,0);
glScalef(0.7,0.7,0);
glTranslatef(0,-0.2,0);
//polygon began
//1
glBegin(GL_POLYGON);

	glColor3ub(0, 0, 0);
	glVertex2f(-0.3f, -0.65f);
	glVertex2f(-0.9f, -0.65f);
	glVertex2f(-0.8f, -0.7f);
	glVertex2f(-0.4f, -0.7f);

	glEnd();
//polygon end

//polygon began
//2
glBegin(GL_POLYGON);

	glColor3ub(102, 0, 0);
	glVertex2f(-0.2f, -0.6f);
	glVertex2f(-1.0f, -0.6f);
	glVertex2f(-0.9f, -0.65f);
	glVertex2f(-0.3f, -0.65);

	glEnd();
//polygon end


//quads start
//3
glBegin(GL_QUADS);
	glColor3ub(22, 29, 111);
	glVertex2f(-0.4f, -0.55f);
	glVertex2f(-0.8f, -0.55f);
	glVertex2f(-0.8f, -0.6f);
	glVertex2f(-0.4f, -0.6f);
	glEnd();
//quads end
//quads start
//4
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.7f, -0.4f);
	glVertex2f(-0.75f, -0.4f);
	glVertex2f(-0.75f, -0.55f);
	glVertex2f(-0.7f, -0.55f);
	glEnd();
//quads end

//quads start
//5
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.55f, -0.4f);
	glVertex2f(-0.65f, -0.4f);
	glVertex2f(-0.65f, -0.55f);
	glVertex2f(-0.55f, -0.55f);
	glEnd();
//quads end

//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45f, -0.4f);
	glVertex2f(-0.5f, -0.4f);
	glVertex2f(-0.5f, -0.55f);
	glVertex2f(-0.45f, -0.55f);
	glEnd();
//quads end

glPopMatrix();
glLoadIdentity();
//ship 3 end


//------------------------------------------------------

//krain 2 start


//quads start
//1
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.45f, 0.05f);
	glVertex2f(-0.6f, 0.05f);
	glVertex2f(-0.6f, 0.0f);
	glVertex2f(-0.45f, 0.0f);
	glEnd();
	//glFlush();
//quads end

//quads start
//2
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.5f, 0.05f);
	glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.55f, 0.6f);
	glVertex2f(-0.55f, 0.05f);
	glEnd();
	//glFlush();
//quads end


//triangle start
//3
glBegin(GL_TRIANGLES);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.35f, 0.85f);
	glVertex2f(-0.55f, 0.6f);
	glEnd();
//triangle end

//lines start
//4
glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.35f, 0.85f);
    glVertex2f(-0.4f, 0.45f);
    glEnd();
//lines end


//lines start
//5
glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.35f, 0.85f);
    glVertex2f(-0.35f, 0.45f);
    glEnd();
//lines end




//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(22, 29, 111);
	glVertex2f(-0.3f, 0.45f);
	glVertex2f(-0.45f, 0.45f);
	glVertex2f(-0.45f, 0.35f);
	glVertex2f(-0.3f, 0.35f);
	glEnd();
//quads end

//krain 2 end
//-----------------------------------------------------------




//windmill start
glTranslatef(0.8, 0.6,0);
glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
glRotatef(j,0.0,0.0,1.0);



	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, 0.06f);
    glVertex2f( 0.07f, 0.14f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.13f, 0.09f);
    glVertex2f( -0.15f, -0.01f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);

  glVertex2f( 0.02f, -0.15f);
    glVertex2f( 0.13f, -0.12f);
    glEnd();

j+=0.1f;

glPopMatrix();
glLoadIdentity();
//windmill end

//-------------------------------------------------

//clock start
//quads start
//1
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.7f, 0.05f);
	glVertex2f(-0.85f, 0.05f);
	glVertex2f(-0.85f, 0.0f);
	glVertex2f(-0.7f, 0.0f);
	glEnd();

//quads end

//quads start
//2
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.75f, 0.05f);
	glVertex2f(-0.8f, 0.05f);
	glVertex2f(-0.8f, 0.5f);
	glVertex2f(-0.75f, 0.5f);
	glEnd();
//quads end


//triangle start
//3
glBegin(GL_TRIANGLES);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.774f, 0.556f);
	glVertex2f(-0.8f, 0.5f);
	glVertex2f(-0.75f, 0.5f);
	glEnd();


glLoadIdentity();
glTranslatef(-0.774, 0.556,0);
glScalef(.2,.2,0);

//outer circle start
    x=0.0f; y=0.0f;   radius =0.8f;
	triangleAmount = 40;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(25, 121, 86);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//circle end


//polygon hour began
    glPushMatrix();
    glRotatef(h,0.0,0.0,1.0);
glBegin(GL_POLYGON);

	glColor3ub(255, 0, 14);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.05f, 0.35f);
	glVertex2f(0.0f, 0.425f);
	glVertex2f(-0.05f, 0.35f);

	glEnd();
	h-=0.00000046;
glPopMatrix();

//polygon end


//polygon minute began
    glPushMatrix();
    glRotatef(m,0.0,0.0,1.0);
glBegin(GL_POLYGON);

	glColor3ub(125, 0, 255);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.025f, 0.425f);
	glVertex2f(0.0f, 0.55f);
	glVertex2f(-0.025f, 0.425f);

	glEnd();

	  m-=.0000277;
      glPopMatrix();

//polygon end
//polygon second began
    glPushMatrix();
    glRotatef(s,0.0,0.0,1.0);
    glBegin(GL_POLYGON);

	glColor3ub(124, 1, 14);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.025f, 0.525f);
	glVertex2f(0.0f, 0.7f);
	glVertex2f(-0.025f, 0.525f);

	glEnd();
	s-=0.001666f;
    glPopMatrix();


    //t12
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.0f, 0.725f);
    glVertex2f( 0.0251f, 0.775f);
    glVertex2f( -0.025f, 0.775f);
    glEnd();


//t1
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.375f, 0.625f);
    glVertex2f( 0.425f, 0.65f);
    glVertex2f( 0.375f, 0.675f);
    glEnd();


//t2
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.65f, 0.325f);
    glVertex2f( 0.7f, 0.325f);
    glVertex2f( 0.675f, 0.375f);
    glEnd();


//t3
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.725f, 0.0f);
    glVertex2f(0.775f, -0.025f);
    glVertex2f(0.775f, 0.025f);
    glEnd();


//t4
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.675f, -0.375f);
    glVertex2f(0.7f, -0.325f);
    glVertex2f(0.65f, -0.325f);
    glEnd();

    //t5
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.4f, -0.6f);
    glVertex2f(0.4f, -0.65f);
    glVertex2f(0.455f, -0.625f);
    glEnd();


    //t6
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.025f, -0.775f);
    glVertex2f(-0.025f, -0.775f);
    glVertex2f( 0.0f, -0.725f);
    glEnd();

      //t7
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.375f, -0.675f);
    glVertex2f( -0.37551f, -0.625f);
    glVertex2f( -0.425f, -0.65f);
    glEnd();

      //t8
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.675f, -0.375f);
    glVertex2f( -0.65f, -0.325f);
    glVertex2f( -0.7f, -0.325f);
    glEnd();


      //t9
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.775f, -0.025f);
    glVertex2f( -0.725f, 0.0f);
    glVertex2f( -0.7755f, 0.025f);
    glEnd();

      //t10
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.65f, 0.325f);
    glVertex2f( -0.675f, 0.375f);
    glVertex2f( -0.7f, 0.325f);
    glEnd();

      //t11
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.4f, 0.6f);
    glVertex2f( -0.41f, 0.65f);
    glVertex2f( -0.45f, 0.625f);
    glEnd();
glLoadIdentity();
//polygon end

//clock end


//-------------------------------------------------------------------------

//car copy start
//car

glPushMatrix();
glTranslatef(position2,0,0);
//polygon began
//3
glTranslatef(0.4f,0.0f,0.0f);
glScalef(0.7,0.7,0);

//polygon end

//circle start


//1
//polygon began
glBegin(GL_POLYGON);

	glColor3ub(102, 0, 0);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.1f, 0.15f);
	glVertex2f(-0.35f, 0.15f);
	glVertex2f(-0.35f, 0.05f);

	glEnd();
	//glFlush();
//polygon end

//1
x=-0.2f;
y=0.05f;
radius =0.05f;
triangleAmount = 20;
twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(18, 16, 19);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//glFlush();

//circle end

//circle start
//2
    x=0.0f; y=.05f;   radius =.05f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(18, 16, 19);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//glFlush();

//circle end





//polygon began
//4
glBegin(GL_POLYGON);

	glColor3ub(189, 216, 249);
	glVertex2f(0.1f, 0.15f);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.0f, 0.2f);
	glVertex2f(0.0f, 0.15f);

	glEnd();
	//glFlush();
//polygon end


//triangle start
//5
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(0.0f, 0.2f);
	glEnd();
	//glFlush();
//triangle end

//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(102, 0, 0);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(-0.05f, 0.25f);
	glVertex2f(-0.05f, 0.15f);
	glVertex2f(0.0f, 0.15f);
	glEnd();
	//glFlush();
//quads end



//quads start
//7
glBegin(GL_QUADS);
	glColor3ub(41, 84, 44);
	glVertex2f(-0.05f, 0.2f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.15f, 0.15f);
	glVertex2f(-0.05f, 0.15f);
	glEnd();
	//glFlush();
//quads end
//quads start
//10
glBegin(GL_QUADS);
	glColor3ub(-0, 120, 255);
	glVertex2f(-0.1f, 0.3f);
	glVertex2f(-0.2f, 0.3f);
	glVertex2f(-0.2f, 0.2f);
	glVertex2f(-0.1f, 0.2f);
	glEnd();
	//glFlush();
//quads end

//quads start
//8
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.15f, 0.15f);
	glVertex2f(-0.15f, 0.25f);
	glVertex2f(-0.25f, 0.25f);
	glVertex2f(-0.25f, 0.15f);
	glEnd();
	//glFlush();
//quads end
//quads start
//9
glBegin(GL_QUADS);
	glColor3ub(-0, 0, 255);
	glVertex2f(-0.25f, 0.15f);
	glVertex2f(-0.25f, 0.2f);
	glVertex2f(-0.3f, 0.2f);
	glVertex2f(-0.3f, 0.15f);
	glEnd();
	//glFlush();
//quads end
glPopMatrix();
glLoadIdentity();
//car copy end


//------------------------------------------------------------
glutTimerFunc(3000,day_demo,9);
glFlush();


}


void rain()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(4);

    //-----------------------------------------

//sky start
glBegin(GL_QUADS);
	glColor3ub(176, 233, 254);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glEnd();
//sky end

//land start
glBegin(GL_QUADS);
	glColor3ub(59, 63, 75);
	glVertex2f(1.0f, -0.0f);
	glVertex2f(-1.0f, -0.0f);
	glVertex2f(-1.0f, -0.1f);
	glVertex2f(1.0f, -0.1f);
	glEnd();
//land end

//water start
glBegin(GL_QUADS);
	glColor3ub(18, 190, 252);
	glVertex2f(1.0f, -0.1f);
	glVertex2f(-1.0f, -0.1f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.f);
	glEnd();
//water end

//sun start

//circle start
//2
   GLfloat x=-0.85f;GLfloat y=0.85f;  GLfloat radius =0.1f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(251, 252, 170);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
\
//circle end
//sun end

//---------------------------------------

//cloud start

//cloud start
glPushMatrix();
glTranslatef(position1,0,0);
//circle start
//1
    x=0.1f; y=0.8f;   radius =0.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end

//circle start
//2
    x=0.25f; y=0.85f;   radius =0.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end

//circle start
//3
    x=0.4f; y=0.85f;   radius =0.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end
glPopMatrix();
//cloud end
//cloud end
glTranslatef(0.3f,-0.1f,0.0f);
glTranslatef(position1,0,0);

glScalef(1.2,1,0);
//circle start
//1
    x=0.1f; y=0.8f;   radius =0.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end

//circle start
//2
    x=0.25f; y=0.85f;   radius =0.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end

//circle start
//3
    x=0.4f; y=0.85f;   radius =0.08f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end
glPopMatrix();
glLoadIdentity();

//cloud copy end

//--------------------------------------------
glPushMatrix();
glTranslatef(position3,0,0);
glScalef(0.7,0.7,0);
//ship 2
//triangle start
//2
glBegin(GL_TRIANGLES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.9f, -0.3f);
	glVertex2f(0.7f, -0.4f);
	glVertex2f(0.8f, -0.4f);
	glEnd();
//triangle end

//quads start
//3
glBegin(GL_QUADS);
	glColor3ub(41, 84, 44);
	glVertex2f(0.6f, -0.3f);
	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.5f, -0.4f);
	glVertex2f(0.6f, -0.4f);
	glEnd();
//quads end

//quads start
//4
glBegin(GL_QUADS);
	glColor3ub(22, 29, 111);
	glVertex2f(0.6f, -0.2f);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.6f, -0.3f);
	glEnd();
//quads end

//quads start
//5
glBegin(GL_QUADS);
	glColor3ub(152, 158, 38);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.4f, -0.3f);
	glVertex2f(0.5f, -0.3f);
	glEnd();
//quads end

//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(0, 120, 255);
	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.4f, -0.3f);
	glVertex2f(0.4f, -0.4f);
	glVertex2f(0.5f, -0.4f);
	glEnd();
//quads end

//quads start
//7
glBegin(GL_QUADS);
	glColor3ub(0, 0, 255);
	glVertex2f(0.4f, -0.3f);
	glVertex2f(0.2f, -0.3f);
	glVertex2f(0.2f, -0.4f);
	glVertex2f(0.4f, -0.4f);
	glEnd();
//quads end

//quads start
//8
glBegin(GL_QUADS);
	glColor3ub(0, 0, 255);
	glVertex2f(0.2f, -0.3f);
	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(0.2f, -0.4f);
	glEnd();
//quads end

//triangle start
//9
glBegin(GL_TRIANGLES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.3f, -0.3f);
	glEnd();
//triangle end

//triangle start
//10
glBegin(GL_TRIANGLES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(-0.1f, -0.3f);
	glVertex2f(0.0f, -0.4f);
	glEnd();
//triangle end

//polygon began
//3
glBegin(GL_POLYGON);

	glColor3ub(102, 0, 0);
	glVertex2f(0.8f, -0.4f);
	glVertex2f(0.0f, -0.4f);
	glVertex2f(0.1f, -0.5f);
	glVertex2f(0.7f, -0.5f);
	glEnd();
//polygon end
glPopMatrix();
glLoadIdentity();
//ship2 end

//----------------------------------

//car

//circle start

glPushMatrix();
glTranslatef(position,0,0);
//1
//polygon began
glBegin(GL_POLYGON);

	glColor3ub(102, 0, 0);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.1f, 0.15f);
	glVertex2f(-0.35f, 0.15f);
	glVertex2f(-0.35f, 0.05f);

	glEnd();
//polygon end

//1
 x=-0.2f;
  y=0.05f;
  radius =0.05f;
 triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(18, 16, 19);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end

//circle start
//2
    x=0.0f; y=.05f;   radius =.05f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(18, 16, 19);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//circle end





//polygon began
//4
glBegin(GL_POLYGON);

	glColor3ub(189, 216, 249);
	glVertex2f(0.1f, 0.15f);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.0f, 0.2f);
	glVertex2f(0.0f, 0.15f);

	glEnd();
//polygon end


//triangle start
//5
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(0.0f, 0.2f);
	glEnd();
//triangle end

//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(102, 0, 0);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(-0.05f, 0.25f);
	glVertex2f(-0.05f, 0.15f);
	glVertex2f(0.0f, 0.15f);
	glEnd();
//quads end



//quads start
//7
glBegin(GL_QUADS);
	glColor3ub(41, 84, 44);
	glVertex2f(-0.05f, 0.2f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.15f, 0.15f);
	glVertex2f(-0.05f, 0.15f);
	glEnd();
//quads end
//quads start
//10
glBegin(GL_QUADS);
	glColor3ub(-0, 120, 255);
	glVertex2f(-0.1f, 0.3f);
	glVertex2f(-0.2f, 0.3f);
	glVertex2f(-0.2f, 0.2f);
	glVertex2f(-0.1f, 0.2f);
	glEnd();
//quads end

//quads start
//8
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.15f, 0.15f);
	glVertex2f(-0.15f, 0.25f);
	glVertex2f(-0.25f, 0.25f);
	glVertex2f(-0.25f, 0.15f);
	glEnd();
//quads end
//quads start
//9
glBegin(GL_QUADS);
	glColor3ub(-0, 0, 255);
	glVertex2f(-0.25f, 0.15f);
	glVertex2f(-0.25f, 0.2f);
	glVertex2f(-0.3f, 0.2f);
	glVertex2f(-0.3f, 0.15f);
	glEnd();
//quads end
glPopMatrix();
glLoadIdentity();
//car end

//------------------------------------------------

//house began
//quads start
//1
glBegin(GL_QUADS);
	glColor3ub(14, 0, 255);
	glVertex2f(0.85f, 0.15f);
	glVertex2f(0.6f, 0.15f);
	glVertex2f(0.6f, 0.0f);
	glVertex2f(0.85f, 0.0f);
	glEnd();
//quads end


//quads start
//2
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.75f, 0.1f);
	glVertex2f(0.7f, 0.1f);
	glVertex2f(0.7f, 0.0f);
	glVertex2f(0.75f, 0.0f);
	glEnd();
//quads end



//quads start
//3
glBegin(GL_QUADS);
	glColor3ub(41, 84, 44);
	glVertex2f(0.85f, 0.3f);
	glVertex2f(0.6f, 0.3f);
	glVertex2f(0.6f, 0.15f);
	glVertex2f(0.85f, 0.15f);
	glEnd();
//quads end



//quads start
//4
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.7f, 0.25f);
	glVertex2f(0.65f, 0.25f);
	glVertex2f(0.65f, 0.2f);
	glVertex2f(0.7f, 0.2f);
	glEnd();
//quads end



//quads start
//5
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.8f, 0.25f);
	glVertex2f(0.75f, 0.25f);
	glVertex2f(0.75f, 0.2f);
	glVertex2f(0.8f, 0.2f);
	glEnd();
//quads end



//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(0, 170, 255);
	glVertex2f(0.85f, 0.45f);
	glVertex2f(0.6f, 0.45f);
	glVertex2f(0.6f, 0.3f);
	glVertex2f(0.85f, 0.3f);
	glEnd();
//quads end



//quads start
//7
glBegin(GL_QUADS);
	glColor3ub(0, 0, 255);
	glVertex2f(0.8f, 0.4f);
	glVertex2f(0.75f, 0.4f);
	glVertex2f(0.75f, 0.35f);
	glVertex2f(0.8f, 0.35f);
	glEnd();
//quads end



//quads start
//8
glBegin(GL_QUADS);
	glColor3ub(0, 0, 255);
	glVertex2f(0.85f, 0.55f);
	glVertex2f(0.75f, 0.55f);
	glVertex2f(0.75f, 0.45f);
	glVertex2f(0.85f, 0.45f);
	glEnd();
//quads end



//triangle start
//9
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.85f, 0.55f);
	glVertex2f(0.75f, 0.55f);
	glVertex2f(0.8f, 0.6f);
	glEnd();
//triangle end

//house end;


//----------------------------------------------------

//ship 3 start

glPushMatrix();
glTranslatef(position4,0,0);
glScalef(0.7,0.7,0);
glTranslatef(0,-0.2,0);
//polygon began
//1
glBegin(GL_POLYGON);

	glColor3ub(0, 0, 0);
	glVertex2f(-0.3f, -0.65f);
	glVertex2f(-0.9f, -0.65f);
	glVertex2f(-0.8f, -0.7f);
	glVertex2f(-0.4f, -0.7f);

	glEnd();
//polygon end

//polygon began
//2
glBegin(GL_POLYGON);

	glColor3ub(102, 0, 0);
	glVertex2f(-0.2f, -0.6f);
	glVertex2f(-1.0f, -0.6f);
	glVertex2f(-0.9f, -0.65f);
	glVertex2f(-0.3f, -0.65);

	glEnd();
//polygon end


//quads start
//3
glBegin(GL_QUADS);
	glColor3ub(22, 29, 111);
	glVertex2f(-0.4f, -0.55f);
	glVertex2f(-0.8f, -0.55f);
	glVertex2f(-0.8f, -0.6f);
	glVertex2f(-0.4f, -0.6f);
	glEnd();
//quads end
//quads start
//4
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.7f, -0.4f);
	glVertex2f(-0.75f, -0.4f);
	glVertex2f(-0.75f, -0.55f);
	glVertex2f(-0.7f, -0.55f);
	glEnd();
//quads end

//quads start
//5
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.55f, -0.4f);
	glVertex2f(-0.65f, -0.4f);
	glVertex2f(-0.65f, -0.55f);
	glVertex2f(-0.55f, -0.55f);
	glEnd();
//quads end

//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.45f, -0.4f);
	glVertex2f(-0.5f, -0.4f);
	glVertex2f(-0.5f, -0.55f);
	glVertex2f(-0.45f, -0.55f);
	glEnd();
//quads end

glPopMatrix();
glLoadIdentity();
//ship 3 end


//------------------------------------------------------

//krain 2 start


//quads start
//1
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.45f, 0.05f);
	glVertex2f(-0.6f, 0.05f);
	glVertex2f(-0.6f, 0.0f);
	glVertex2f(-0.45f, 0.0f);
	glEnd();
	//glFlush();
//quads end

//quads start
//2
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.5f, 0.05f);
	glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.55f, 0.6f);
	glVertex2f(-0.55f, 0.05f);
	glEnd();
	//glFlush();
//quads end


//triangle start
//3
glBegin(GL_TRIANGLES);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.35f, 0.85f);
	glVertex2f(-0.55f, 0.6f);
	glEnd();
//triangle end

//lines start
//4
glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.35f, 0.85f);
    glVertex2f(-0.4f, 0.45f);
    glEnd();
//lines end


//lines start
//5
glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.35f, 0.85f);
    glVertex2f(-0.35f, 0.45f);
    glEnd();
//lines end




//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(22, 29, 111);
	glVertex2f(-0.3f, 0.45f);
	glVertex2f(-0.45f, 0.45f);
	glVertex2f(-0.45f, 0.35f);
	glVertex2f(-0.3f, 0.35f);
	glEnd();
//quads end

//krain 2 end
//-----------------------------------------------------------




//windmill start
glTranslatef(0.8, 0.6,0);
glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
glRotatef(j,0.0,0.0,1.0);



	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, 0.06f);
    glVertex2f( 0.07f, 0.14f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.13f, 0.09f);
    glVertex2f( -0.15f, -0.01f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);

  glVertex2f( 0.02f, -0.15f);
    glVertex2f( 0.13f, -0.12f);
    glEnd();

j+=0.1f;

glPopMatrix();
glLoadIdentity();
//windmill end

//-------------------------------------------------

//clock start
//quads start
//1
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.7f, 0.05f);
	glVertex2f(-0.85f, 0.05f);
	glVertex2f(-0.85f, 0.0f);
	glVertex2f(-0.7f, 0.0f);
	glEnd();

//quads end

//quads start
//2
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.75f, 0.05f);
	glVertex2f(-0.8f, 0.05f);
	glVertex2f(-0.8f, 0.5f);
	glVertex2f(-0.75f, 0.5f);
	glEnd();
//quads end


//triangle start
//3
glBegin(GL_TRIANGLES);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.774f, 0.556f);
	glVertex2f(-0.8f, 0.5f);
	glVertex2f(-0.75f, 0.5f);
	glEnd();


glLoadIdentity();
glTranslatef(-0.774, 0.556,0);
glScalef(.2,.2,0);

//outer circle start
    x=0.0f; y=0.0f;   radius =0.8f;
	triangleAmount = 40;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(25, 121, 86);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//circle end


//polygon hour began
    glPushMatrix();
    glRotatef(h,0.0,0.0,1.0);
glBegin(GL_POLYGON);

	glColor3ub(255, 0, 14);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.05f, 0.35f);
	glVertex2f(0.0f, 0.425f);
	glVertex2f(-0.05f, 0.35f);

	glEnd();
	h-=0.00000046;
glPopMatrix();

//polygon end


//polygon minute began
    glPushMatrix();
    glRotatef(m,0.0,0.0,1.0);
glBegin(GL_POLYGON);

	glColor3ub(125, 0, 255);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.025f, 0.425f);
	glVertex2f(0.0f, 0.55f);
	glVertex2f(-0.025f, 0.425f);

	glEnd();

	  m-=.0000277;
      glPopMatrix();

//polygon end
//polygon second began
    glPushMatrix();
    glRotatef(s,0.0,0.0,1.0);
    glBegin(GL_POLYGON);

	glColor3ub(124, 1, 14);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.025f, 0.525f);
	glVertex2f(0.0f, 0.7f);
	glVertex2f(-0.025f, 0.525f);

	glEnd();
	s-=0.001666f;
    glPopMatrix();


    //t12
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.0f, 0.725f);
    glVertex2f( 0.0251f, 0.775f);
    glVertex2f( -0.025f, 0.775f);
    glEnd();


//t1
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.375f, 0.625f);
    glVertex2f( 0.425f, 0.65f);
    glVertex2f( 0.375f, 0.675f);
    glEnd();


//t2
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.65f, 0.325f);
    glVertex2f( 0.7f, 0.325f);
    glVertex2f( 0.675f, 0.375f);
    glEnd();


//t3
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.725f, 0.0f);
    glVertex2f(0.775f, -0.025f);
    glVertex2f(0.775f, 0.025f);
    glEnd();


//t4
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.675f, -0.375f);
    glVertex2f(0.7f, -0.325f);
    glVertex2f(0.65f, -0.325f);
    glEnd();

    //t5
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.4f, -0.6f);
    glVertex2f(0.4f, -0.65f);
    glVertex2f(0.455f, -0.625f);
    glEnd();


    //t6
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.025f, -0.775f);
    glVertex2f(-0.025f, -0.775f);
    glVertex2f( 0.0f, -0.725f);
    glEnd();

      //t7
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.375f, -0.675f);
    glVertex2f( -0.37551f, -0.625f);
    glVertex2f( -0.425f, -0.65f);
    glEnd();

      //t8
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.675f, -0.375f);
    glVertex2f( -0.65f, -0.325f);
    glVertex2f( -0.7f, -0.325f);
    glEnd();


      //t9
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.775f, -0.025f);
    glVertex2f( -0.725f, 0.0f);
    glVertex2f( -0.7755f, 0.025f);
    glEnd();

      //t10
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.65f, 0.325f);
    glVertex2f( -0.675f, 0.375f);
    glVertex2f( -0.7f, 0.325f);
    glEnd();

      //t11
glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.4f, 0.6f);
    glVertex2f( -0.41f, 0.65f);
    glVertex2f( -0.45f, 0.625f);
    glEnd();
glLoadIdentity();
//polygon end

//clock end


//-------------------------------------------------------------------------

//car copy start
//car

glPushMatrix();
glTranslatef(position2,0,0);
//polygon began
//3
glTranslatef(0.4f,0.0f,0.0f);
glScalef(0.7,0.7,0);

//polygon end

//circle start


//1
//polygon began
glBegin(GL_POLYGON);

	glColor3ub(102, 0, 0);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.1f, 0.15f);
	glVertex2f(-0.35f, 0.15f);
	glVertex2f(-0.35f, 0.05f);

	glEnd();
	//glFlush();
//polygon end

//1
x=-0.2f;
y=0.05f;
radius =0.05f;
triangleAmount = 20;
twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(18, 16, 19);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//glFlush();

//circle end

//circle start
//2
    x=0.0f; y=.05f;   radius =.05f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(18, 16, 19);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//glFlush();

//circle end





//polygon began
//4
glBegin(GL_POLYGON);

	glColor3ub(189, 216, 249);
	glVertex2f(0.1f, 0.15f);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.0f, 0.2f);
	glVertex2f(0.0f, 0.15f);

	glEnd();
	//glFlush();
//polygon end


//triangle start
//5
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(0.0f, 0.2f);
	glEnd();
	//glFlush();
//triangle end

//quads start
//6
glBegin(GL_QUADS);
	glColor3ub(102, 0, 0);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(-0.05f, 0.25f);
	glVertex2f(-0.05f, 0.15f);
	glVertex2f(0.0f, 0.15f);
	glEnd();
	//glFlush();
//quads end



//quads start
//7
glBegin(GL_QUADS);
	glColor3ub(41, 84, 44);
	glVertex2f(-0.05f, 0.2f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.15f, 0.15f);
	glVertex2f(-0.05f, 0.15f);
	glEnd();
	//glFlush();
//quads end
//quads start
//10
glBegin(GL_QUADS);
	glColor3ub(-0, 120, 255);
	glVertex2f(-0.1f, 0.3f);
	glVertex2f(-0.2f, 0.3f);
	glVertex2f(-0.2f, 0.2f);
	glVertex2f(-0.1f, 0.2f);
	glEnd();
	//glFlush();
//quads end

//quads start
//8
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.15f, 0.15f);
	glVertex2f(-0.15f, 0.25f);
	glVertex2f(-0.25f, 0.25f);
	glVertex2f(-0.25f, 0.15f);
	glEnd();
	//glFlush();
//quads end
//quads start
//9
glBegin(GL_QUADS);
	glColor3ub(-0, 0, 255);
	glVertex2f(-0.25f, 0.15f);
	glVertex2f(-0.25f, 0.2f);
	glVertex2f(-0.3f, 0.2f);
	glVertex2f(-0.3f, 0.15f);
	glEnd();
	//glFlush();
//quads end
glPopMatrix();
glLoadIdentity();
//car copy end

    glPushMatrix();
    glTranslatef(positionr,positionr,0);

	glScalef(1,1,0);
    glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(-0.96f,1.0f);             // 1st raindrop from left
	glVertex2f(-1.0f,0.9f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(-0.56f,1.0f);             // 2nd raindrop from left
	glVertex2f(-0.6f,0.9f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(-0.16f,1.0f);             // 3rd raindrop from left
	glVertex2f(-0.2f,0.9f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(0.2f,1.0f);             // 4th raindrop from left
	glVertex2f(0.16f,0.9f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(0.6f,1.0f);             // 5th raindrop from left
	glVertex2f(0.56f,0.9f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(1.0f,1.0f);             // 6th raindrop from left
	glVertex2f(0.96f,0.9f);
	glEnd();

	glPopMatrix();

    glLoadIdentity();



     glPushMatrix();
    glTranslatef(positionr,positionr,0);

    glTranslatef(-0.4,-0.4,0);

	glScalef(1,1,0);
    glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(-0.96f,1.0f);             // 1st raindrop from left
	glVertex2f(-1.0f,0.9f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(-0.56f,1.0f);             // 2nd raindrop from left
	glVertex2f(-0.6f,0.9f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(-0.16f,1.0f);             // 3rd raindrop from left
	glVertex2f(-0.2f,0.9f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(0.2f,1.0f);             // 4th raindrop from left
	glVertex2f(0.16f,0.9f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(0.6f,1.0f);             // 5th raindrop from left
	glVertex2f(0.56f,0.9f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(1.0f,1.0f);             // 6th raindrop from left
	glVertex2f(0.96f,0.9f);
	glEnd();

	glPopMatrix();

    glLoadIdentity();

    //------------------------------------------
 //ship 3
  //ship 3
 glTranslatef(position1,0,0);
glTranslatef(0.4,-0.4,0);
glScalef(0.8,0.8,0);
 glBegin(GL_POLYGON);

    glColor3ub(118, 2, 2);
    glVertex2f(0.6f, -0.4f);    // ship 2 main body
	glVertex2f(0.0f, -0.4f);
	glVertex2f(0.0f, -0.43f);
	glVertex2f(0.06f, -0.5f);
	glVertex2f(0.54f, -0.5f);
	glVertex2f(0.6f, -0.43f);
    glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(0, 160, 56);
    glVertex2f(0.54f, -0.37f);    // ship 2 container 1
	glVertex2f(0.06f, -0.37f);
	glVertex2f(0.06f, -0.4f);
	glVertex2f(0.54f, -0.4f);
    glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(0.53f, -0.34f);    // ship 2 container 2
	glVertex2f(0.07f, -0.34f);
	glVertex2f(0.07f, -0.37f);
	glVertex2f(0.53f, -0.37f);
    glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(30, 30, 30);
    glVertex2f(0.14f, -0.24f);    // ship 2 smoke pipe left
	glVertex2f(0.11f, -0.24f);
	glVertex2f(0.11f, -0.34f);
	glVertex2f(0.14f, -0.34f);
    glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(30, 30, 30);
    glVertex2f(0.34f, -0.24f);    // ship 2 smoke pipe mid
	glVertex2f(0.26f, -0.24f);
	glVertex2f(0.26f, -0.34f);
	glVertex2f(0.34f, -0.34f);
    glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(30, 30, 30);
    glVertex2f(0.49f, -0.24f);    // ship 2 smoke pipe right
	glVertex2f(0.46f, -0.24f);
	glVertex2f(0.46f, -0.34f);
	glVertex2f(0.49f, -0.34f);
    glEnd();

    glLoadIdentity();

 //ship 3 end
//------------------------------------------------------------

//------------------------------------------------------------
glutTimerFunc(3000,night_demo,9);

glFlush();


}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(day);//
    glutIdleFunc(Idle);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);
    glutTimerFunc(100, update4, 0);
    glutTimerFunc(100, updater, 0);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutSpecialFunc(SpecialInput);


    glutIdleFunc(Idle);
    glutMainLoop();
    return 0;
}
