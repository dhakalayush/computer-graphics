#include<GL/glut.h>
void display(){
    glClear(GL_COLOR_BUFFER_BIT); // Clear The  xtra Screen And The Depth Buffer
    glColor3f(1,1,1);

    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity();          // Reset
       double aspect_ratio = glutGet(GLUT_WINDOW_WIDTH) / (double)glutGet(GLUT_WINDOW_HEIGHT);
    glOrtho(-aspect_ratio, aspect_ratio, -1, 1, -1, 1); // Set up orthographic projection matrix

    glBegin(GL_LINES); //str line
    glVertex2f(-0.32,0.3);
    glVertex2f(-0.32,-0.3);     
    glEnd();

    

    //for letter U

    //rotate to -45degree z axis
    glTranslatef(0, 0, 0);
    glRotatef(-45, 0, 0, 1);

     glBegin(GL_LINES); //left line
    glVertex2f(-0.2,0.2);
    glVertex2f(-0.2,-0.2);     
    glEnd();

   

     glBegin(GL_LINES);//middle
    glVertex2f(-0.2,-0.2);
    glVertex2f(0.2,-0.2);     
    glEnd();

     glBegin(GL_LINES);//right
    glVertex2f(0.2,0.2);
    glVertex2f(0.2,-0.2);     
    glEnd();

    glFlush();

}
int main(int argc,char **argv){
    glutInit(&argc,argv);
    glutCreateWindow("hi");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

// screeen resolution is 300x300