#include<GL/glut.h>
#include<math.h>
void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,0,0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity(); // Reset the modelview matrix  

    //str line
    glBegin(GL_LINES); //str line
    glVertex2f(-0.34,0.38);
    glVertex2f(-0.34,-0.40);
    glEnd();

    glTranslatef(0, 0, 0);
    glRotatef(-30, 0, 0, 1);
   
    // lettter u

    glBegin(GL_LINES); // left str line
    glVertex2f(-0.25,0.20);
    glVertex2f(-0.25,-0.25);
    glEnd();

    glBegin(GL_LINES); // hori str line
    glVertex2f(-0.25,-0.25);
    glVertex2f(0.10,-0.35);
    glEnd();

    glBegin(GL_LINES); //right str line
    glVertex2f(0.15,0.15);
    glVertex2f(0.10,-0.35);
    glEnd();
    
    glFlush();

}

    int main(int argc, char **argv){
        glutInit(&argc,argv);
        glutCreateWindow("Line");
        glutDisplayFunc(display);
        glutMainLoop();
        return 0;
}
