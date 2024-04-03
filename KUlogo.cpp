#include<GL/glut.h>
#include<iostream>
#include<cmath>
void display(){
   
    glClearColor(1.0, 1.0, 1.0, 1.0); // background color white 
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen with the clear color

    glLineWidth(10.0);  // Width of the lines


    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity();          // Reset

    double aspect_ratio = glutGet(GLUT_WINDOW_WIDTH) / (double)glutGet(GLUT_WINDOW_HEIGHT); //aspect ratio same garxa
    glOrtho(-aspect_ratio, aspect_ratio, -1, 1, -1, 1); // Set up orthographic projection matrix
  
    // circle of radius 1 units
   glColor3f(0.972549, 0.0117647, 0.0);
   glBegin(GL_POLYGON);
    float x;
    for (int i = 0; i < 360; i++)
    {
        x = i * 3.14159 / 180;
        glVertex2f(1* cos(x), 1 * sin(x));
    }
    glEnd();


   // circle of radius 0.85 units
   glColor3f(0.705882, 0.807843, 0.905882);
   glBegin(GL_POLYGON);
    float b;
    for (int i = 0; i < 360; i++)
    {
        b = i * 3.14159 / 180;
        glVertex2f(0.85* cos(b), 0.85 * sin(b));
    }
    glEnd();
   
    // circle of radius 0.7 units
    glColor3f(1.0, 1.0, 0.5);
    glBegin(GL_POLYGON);
    float an;
    for (int i = 0; i < 360; i++)
    {
        an = i * 3.14159 / 180;
        glVertex2f(0.7* cos(an), 0.7 * sin(an));
    }
    glEnd();

    // First upside down traingle
    glColor3f(1.0, 0.721569, 0.721569);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.6, 0.4);
    glVertex2f(0.6, 0.4);
    glVertex2f(0, -0.7);
    glEnd();


    //second straight triangle
    glColor3f(1.0, 0.721569, 0.721569);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.6, -0.4);
    glVertex2f(0.6, -0.4);
    glVertex2f(0, 0.7);
    glEnd();
 
    // Drawing straight line
    glColor3f(0.0, 0.0, 0.1); 
    glBegin(GL_LINES); 
    glVertex2f(-0.3, 0.27); 
    glVertex2f(-0.3, -0.27); 
    glEnd();

    //for letter U
    glColor3f(0.0, 0.0, 0.1); 
    //rotate to -45degree z axis
    glTranslatef(0, 0, 0);
    glRotatef(-45, 0, 0, 1);

   //left line
    glColor3f(0.0, 0.0, 0.1); 
    glBegin(GL_LINES); 
    glVertex2f(-0.15,0.2);
    glVertex2f(-0.15,-0.2);     
    glEnd();

    //middle
    glColor3f(0.0, 0.0, 0.1); 
    glBegin(GL_LINES);
    glVertex2f(-0.15,-0.2);
    glVertex2f(0.15,-0.2);     
    glEnd();
  
    //right
    glColor3f(0.0, 0.0, 0.1); 
    glBegin(GL_LINES);
    glVertex2f(0.15,0.2);
    glVertex2f(0.15,-0.2);     
    glEnd();

    glFlush();

}

    //void reshape(int width, int height) {
      //      std::cout << "Screen Resolution: " << width << "x" << height << std::endl;   //to find the resolution
//}

int main(int argc,char **argv){
    glutInit(&argc,argv);
    glutCreateWindow("hi");
    glutDisplayFunc(display);
  //  glutReshapeFunc(reshape);//  Register the reshape function
    glutMainLoop();
    return 0;
}

// screeen resolution is 300x300