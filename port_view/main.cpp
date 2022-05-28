#include <windows.h>
#include <GL/glut.h>
#include<math.h>
# define PI    3.14159265358979323846

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(1);


//sky start
glBegin(GL_QUADS);
	glColor3ub(176, 233, 254);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glEnd();
	glFlush();
//quads end




//land start

//quads start
//1
glBegin(GL_QUADS);
	glColor3ub(59, 63, 75);
	glVertex2f(1.0f, -0.0f);
	glVertex2f(-1.0f, -0.0f);
	glVertex2f(-1.0f, -0.1f);
	glVertex2f(1.0f, -0.1f);
	glEnd();
	glFlush();
//quads end
//land end



//water start
//quads start
//1
glBegin(GL_QUADS);
	glColor3ub(18, 190, 252);
	glVertex2f(1.0f, -0.1f);
	glVertex2f(-1.0f, -0.1f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.f);
	glEnd();
	glFlush();
//quads end
//water end



// ship 1
//1
//polygon began
glBegin(GL_POLYGON);

	glColor3ub(0, 0, 14);
	glVertex2f(1.0f, -0.8f);
	glVertex2f(0.6f, -0.8f);
	glVertex2f(0.5f, -0.9f);
	glVertex2f(1.0f, -0.9f);

	glEnd();
	glFlush();
//polygon end





//quads start
//2
glBegin(GL_QUADS);
	glColor3ub(53, 11, 64);
	glVertex2f(1.0f, -0.4f);
	glVertex2f(0.9f, -0.4f);
	glVertex2f(0.9f, -0.8f);
	glVertex2f(1.0f, -0.8f);
	glEnd();
	glFlush();
//quads end


//quads start
//3
glBegin(GL_QUADS);
	glColor3ub(152, 158, 38);
	glVertex2f(0.9f, -0.6f);
	glVertex2f(0.7f, -0.6f);
	glVertex2f(0.7f, -0.8f);
	glVertex2f(0.9f, -0.8f);
	glEnd();
	glFlush();
//quads end

//quads start
//4
glBegin(GL_QUADS);
	glColor3ub(22, 29, 111);
	glVertex2f(0.7f, -0.7f);
	glVertex2f(0.6f, -0.7f);
	glVertex2f(0.6f, -0.8f);
	glVertex2f(0.7f, -0.8f);
	glEnd();
	glFlush();
//quads end


//polygon began
//5
glBegin(GL_POLYGON);

	glColor3ub(100, 208, 204);
	glVertex2f(0.6f, -0.7f);
	glVertex2f(0.5f, -0.7f);
	glVertex2f(0.5f, -0.8f);
	glVertex2f(0.6f, -0.8f);

	glEnd();
	glFlush();
//polygon end

//lines start
//6
glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.7f, -0.6f);
    glVertex2f(0.9f, -0.8f);
    glEnd();
    glFlush();
//lines end

//lines start
//7
glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.9f, -0.6f);
    glVertex2f(0.7f, -0.8f);
    glEnd();
    glFlush();
//lines en

//triangle start
//6
glBegin(GL_TRIANGLES);
	glColor3ub(0, 0, 14);
	glVertex2f(0.6f, -0.8f);
	glVertex2f(0.1f, -0.7f);
	glVertex2f(0.5f, -0.9f);
	glEnd();
	glFlush();
//triangle end


//ship 2

//1
//polygon began
glBegin(GL_POLYGON);

	glColor3ub(37, 31, 29);
	glVertex2f(0.8f, -0.4f);
	glVertex2f(0.0f, -0.4f);
	glVertex2f(0.1f, -0.5f);
	glVertex2f(0.7f, -0.5f);

	glEnd();
	glFlush();
//polygon end

//triangle start
//2
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.9f, -0.3f);
	glVertex2f(0.7f, -0.4f);
	glVertex2f(0.8f, -0.4f);
	glEnd();
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
//quads end

//triangle start
//9
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.3f, -0.3f);
	glEnd();
	glFlush();
//triangle end

//triangle start
//10
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(-0.1f, -0.3f);
	glVertex2f(0.0f, -0.4f);
	glEnd();
	glFlush();
//triangle end








//car


//polygon began
//3
glBegin(GL_POLYGON);

	glColor3ub(102, 0, 0);
	glVertex2f(0.8f, -0.4f);
	glVertex2f(0.0f, -0.4f);
	glVertex2f(0.1f, -0.5f);
	glVertex2f(0.7f, -0.5f);

	glEnd();
	glFlush();
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
	glFlush();
//polygon end

//1
GLfloat x=-0.2f;
 GLfloat y=0.05f;
 GLfloat radius =0.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
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
	glFlush();

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
	glFlush();

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
	glFlush();
//polygon end


//triangle start
//5
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(0.0f, 0.2f);
	glEnd();
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
//quads end

//car end


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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
//quads end



//triangle start
//9
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.85f, 0.55f);
	glVertex2f(0.75f, 0.55f);
	glVertex2f(0.8f, 0.6f);
	glEnd();
	glFlush();
//triangle end

//house end;


//ship 3 start
glTranslatef(0.3f,-0.1f,0.0f);
glScalef(1.2,1,0);
//polygon began
//1
glBegin(GL_POLYGON);

	glColor3ub(0, 0, 0);
	glVertex2f(-0.3f, -0.65f);
	glVertex2f(-0.9f, -0.65f);
	glVertex2f(-0.8f, -0.7f);
	glVertex2f(-0.4f, -0.7f);

	glEnd();
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
//quads end
glLoadIdentity();
//ship 3 end


//krain 1 start


//quads start
//1
glBegin(GL_QUADS);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.7f, 0.05f);
	glVertex2f(-0.85f, 0.05f);
	glVertex2f(-0.85f, 0.0f);
	glVertex2f(-0.7f, 0.0f);
	glEnd();
	glFlush();
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
	glFlush();
//quads end


//triangle start
//3
glBegin(GL_TRIANGLES);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.65f, 0.75f);
	glVertex2f(-0.8f, 0.5f);
	glEnd();
	glFlush();
//triangle end

//lines start
//4
glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.65f, 0.75f);
    glVertex2f(-0.65f, 0.35f);
    glEnd();
    glFlush();
//lines end


//lines start
//5
glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.65f, 0.35f);
    glVertex2f(-0.7f, 0.25f);
    glEnd();
    glFlush();
//lines end

//lines start
//6
glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.65f, 0.35f);
    glVertex2f(-0.65f, 0.3f);
    glEnd();
    glFlush();
//lines end


//lines start
//7
glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.65f, 0.35f);
    glVertex2f(-0.6f, 0.25f);
    glEnd();
    glFlush();
//lines end



//polygon began
//8
glBegin(GL_POLYGON);

	glColor3ub(0, 0, 0);
	glVertex2f(-0.65f, 0.3f);
	glVertex2f(-0.7f, 0.255f);
	glVertex2f(-0.65f, 0.2f);
	glVertex2f(-0.6f, 0.25f);

	glEnd();
	glFlush();
//polygon end

//krain 1 end


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
	glFlush();
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
	glFlush();
//quads end


//triangle start
//3
glBegin(GL_TRIANGLES);
	glColor3ub(18, 16, 19);
	glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.35f, 0.85f);
	glVertex2f(-0.55f, 0.6f);
	glEnd();
	glFlush();
//triangle end

//lines start
//4
glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.35f, 0.85f);
    glVertex2f(-0.4f, 0.45f);
    glEnd();
    glFlush();
//lines end


//lines start
//5
glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.35f, 0.85f);
    glVertex2f(-0.35f, 0.45f);
    glEnd();
    glFlush();
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
	glFlush();
//quads end



//sun start

//circle start
//2
    x=-0.85f; y=0.85f;   radius =0.1f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
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
	glFlush();

//circle end
//sun end


//cloud start

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
	glFlush();

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
	glFlush();

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
	glFlush();

//circle end
//cloud end


//ship3 copy start

glTranslatef(-0.25f,0.1f,0.0f);
glScalef(.7,.7,0);
//polygon began
//1
glBegin(GL_POLYGON);

	glColor3ub(0, 0, 0);
	glVertex2f(-0.3f, -0.65f);
	glVertex2f(-0.9f, -0.65f);
	glVertex2f(-0.8f, -0.7f);
	glVertex2f(-0.4f, -0.7f);

	glEnd();
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
//quads end

//ship3 copy end

glLoadIdentity();

//cloud copy start
glTranslatef(0.3f,-0.1f,0.0f);
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
	glFlush();

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
	glFlush();

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
	glFlush();

//circle end
glLoadIdentity();
//cloud copy end



//car copy start
//car


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
	glFlush();
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
	glFlush();

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
	glFlush();

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
	glFlush();
//polygon end


//triangle start
//5
glBegin(GL_TRIANGLES);
	glColor3ub(102, 0, 0);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.0f, 0.25f);
	glVertex2f(0.0f, 0.2f);
	glEnd();
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
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
	glFlush();
//quads end
glLoadIdentity();
//car copy end

}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Setup");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
