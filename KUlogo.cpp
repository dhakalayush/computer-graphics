#include<GL/glut.h>
void display(){
    glClear(GL_COLOR_BUFFER_BIT); // Clear The Screen And The Depth Buffer
    glColor3f(1,0,0);

    glMatrixMode(GL_MODELVIEW); 
    glLoadIdentity();          // Reset

    glBegin(GL_LINES); //str line
    glVertex2f(-0.29,0.3);
    glVertex2f(-0.29,-0.3);     
    glEnd();

    //for U
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