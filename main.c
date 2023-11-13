#include <GL/freeglut.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 100

int arr[SIZE][SIZE];
int arr1[SIZE][SIZE];
int menuFlag = 0;


void DrawGlider() {
    arr[3][1] = 1;
    arr[1][2] = 1;
    arr[3][2] = 1;
    arr[2][3] = 1;
    arr[3][3] = 1;
}

void DrawGun() {
    arr[2][6] = 1;
    arr[2][7] = 1;
    arr[3][6] = 1;
    arr[3][7] = 1;

    arr[12][6] = 1;
    arr[12][7] = 1;
    arr[12][8] = 1;

    arr[13][5] = 1;
    arr[13][9] = 1;

    arr[14][4] = 1;
    arr[15][4] = 1;
    arr[14][10] = 1;
    arr[15][10] = 1;

    arr[16][7] = 1;
    arr[17][5] = 1;
    arr[17][9] = 1;

    arr[18][6] = 1;
    arr[18][7] = 1;
    arr[18][8] = 1;
    arr[19][7] = 1;

    arr[22][6] = 1;
    arr[22][5] = 1;
    arr[22][4] = 1;
    arr[23][6] = 1;
    arr[23][5] = 1;
    arr[23][4] = 1;

    arr[24][3] = 1;
    arr[24][7] = 1;

    arr[26][3] = 1;
    arr[26][7] = 1;
    arr[26][2] = 1;
    arr[26][8] = 1;

    arr[36][4] = 1;
    arr[36][5] = 1;
    arr[37][4] = 1;
    arr[37][5] = 1;
}

void DrawRandom() {
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr[i][j] = rand() % 2;
        }
    }
}

void drawMainMenu() {
    glColor3f(1.0, 1.0, 1.0);

    glBegin(GL_QUADS);
    glVertex2f(40, 60);
    glVertex2f(60, 60);
    glVertex2f(60, 70);
    glVertex2f(40, 70);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(40, 30);
    glVertex2f(60, 30);
    glVertex2f(60, 40);
    glVertex2f(40, 40);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(40, 45);
    glVertex2f(60, 45);
    glVertex2f(60, 55);
    glVertex2f(40, 55);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(45, 65);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'S');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 't');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'a');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'r');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 't');

    glRasterPos2f(45, 35);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'E');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'x');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'i');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 't');


    glRasterPos2f(45, 50);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'I');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'n');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'f');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'o');

}

void drawGameMode() {
    glColor3f(1.0, 1.0, 1.0);

    glBegin(GL_QUADS);
    glVertex2f(10, 60);
    glVertex2f(30, 60);
    glVertex2f(30, 70);
    glVertex2f(10, 70);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(40, 60);
    glVertex2f(60, 60);
    glVertex2f(60, 70);
    glVertex2f(40, 70);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(70, 60);
    glVertex2f(90, 60);
    glVertex2f(90, 70);
    glVertex2f(70, 70);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(45, 65);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'G');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'l');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'i');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'd');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'e');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'r');

    glRasterPos2f(15, 65);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'G');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'u');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'n');

    glRasterPos2f(75, 65);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'R');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'a');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'n');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'd');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'o');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'm');

}

void drawInfo() {
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos2f(45, 65);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'G');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'r');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'y');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'a');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'z');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'n');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'o');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'v');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, ' ');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'M');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'a');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'k');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 's');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'i');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'm');

}


void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    if (menuFlag == 0) {
        drawMainMenu();
    }
    else if (menuFlag == 2) {
        glColor3f(1.0, 1.0, 1.0);

        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (arr[i][j] == 1) {
                    glBegin(GL_QUADS);
                    glVertex2f(i, j);
                    glVertex2f(i + 1, j);
                    glVertex2f(i + 1, j + 1);
                    glVertex2f(i, j + 1);
                    glEnd();
                }
            }
        }
    }
    else if (menuFlag == 1) {
        drawGameMode();
    }
    else if (menuFlag == 3) {
        drawInfo();
    }
    glFlush();
}

void timer(int value) {
    if (menuFlag == 2) {
        int counter = 0;
        for (int i = 1; i < SIZE - 1; i++) {
            for (int j = 1; j < SIZE - 1; j++) {
                if (arr[i + 1][j])
                    counter++;
                if (arr[i + 1][j + 1])
                    counter++;
                if (arr[i][j + 1])
                    counter++;
                if (arr[i - 1][j + 1])
                    counter++;
                if (arr[i - 1][j])
                    counter++;
                if (arr[i - 1][j - 1])
                    counter++;
                if (arr[i][j - 1])
                    counter++;
                if (arr[i + 1][j - 1])
                    counter++;
                if (counter == 3) {
                    arr1[i][j] = 1;
                }
                else if (counter == 2 && arr[i][j] == 1) {
                    arr1[i][j] = 1;
                }
                else
                    arr1[i][j] = 0;
                counter = 0;
            }
        }
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                arr[i][j] = arr1[i][j];
            }
        }
    }

    glutPostRedisplay();
    glutTimerFunc(50, timer, 0);
}

void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        if (menuFlag == 0) {
            if (x >= 400 && x <= 600 && y >= 300 && y <= 400) {
                menuFlag = 1;
            }
            else if (x >= 400 && x <= 600 && y >= 600 && y <= 700) {
                exit(0);
            }
            else if (x >= 400 && x <= 600 && y >= 450 && y <= 550) {
                menuFlag = 3;
            }
        }
        else if (menuFlag == 1) {
            if (x >= 400 && x <= 600 && y >= 300 && y <= 400) {
                DrawGlider();
                menuFlag = 2;
            }
            if (x >= 100 && x <= 300 && y >= 300 && y <= 400) {
                DrawGun();
                menuFlag = 2;
            }
            if (x >= 700 && x <= 900 && y >= 300 && y <= 400) {
                DrawRandom();
                menuFlag = 2;
            }
        }
    }
}
void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 27: // ASCII код клавиши Esc
        if (menuFlag != 0) {
            if (menuFlag == 3) {
                menuFlag = 0;
                break;
            }
            menuFlag = menuFlag--; // Переключение состояния игры
            memset(arr, 0, sizeof(arr[0][0]) * SIZE * SIZE);

        }
        else exit(0);
        break;
    }
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, SIZE, 0.0, SIZE);
}

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Rus");
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);

    glutTimerFunc(0, timer, 0);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return 0;
}