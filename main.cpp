#include <iostream>
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

GLint plane_position = 0;
GLint boat_position = 0;
GLint boat_far_position = 0;
GLint sun_position = 0;

GLint cloud1_position = 0;
GLint cloud2_position = 0;
GLint cloud3_position = 0;

GLint boat_speed = 6;
GLint boat_far_speed = 2;
GLint plane_speed = 10;

float _rain = 0.0f;
bool rainday = false;
bool night = false;

void circle(float x, float y, float radius, float height)
{
    int triangleAmount = 360;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i <= 360; i++)
        glVertex2f(x + (radius * cos(i * 2 * 3.1416 / triangleAmount)), y + (height * sin(i * 2 * 3.1416 / triangleAmount)));
    glEnd();
}

void fire(float Tx = 0, float Ty = 0)
{
    glColor3ub(255, 140, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(Tx + 70, Ty + 70);
    glVertex2f(Tx + 35, Ty + 0);
    glVertex2f(Tx + 105, Ty + 0);

    glVertex2f(Tx + 42, Ty + 52.5);
    glVertex2f(Tx + 7, Ty + 0);
    glVertex2f(Tx + 77, Ty + 0);

    glVertex2f(Tx + 112, Ty + 52.5);
    glVertex2f(Tx + 77, Ty + 0);
    glVertex2f(Tx + 147, Ty + 0);

    glColor3ub(240, 240, 0);
    glVertex2f(Tx + 43.75, Ty + 26.25);
    glVertex2f(Tx + 17.5, Ty + 0);
    glVertex2f(Tx + 52.5, Ty + 0);

    glVertex2f(Tx + 78.75,Ty + 26.25);
    glVertex2f(Tx + 52.5,Ty + 0);
    glVertex2f(Tx + 87.5,Ty + 0);

    glVertex2f(Tx + 113.75, Ty + 26.25);
    glVertex2f(Tx + 87.5,Ty + 0);
    glVertex2f(Tx + 122.5,Ty + 0);

    glEnd();
    glFlush();

}


void sky()
{
    if(night)
    {
        glBegin(GL_QUADS);
        glColor3ub(41, 40, 40);
        glVertex2f(0, 660);
        glVertex2f(1920, 660);

        //sky top
        glColor3ub(20, 20, 20);
        glVertex2f(1920, 1080);
        glVertex2f(0, 1080);
        glEnd();
    }
    else
    {
        //sky bottom
        glBegin(GL_QUADS);
        glColor3ub(250, 245, 217);
        glVertex2f(0, 660);
        glVertex2f(1920, 660);

        //sky top
        glColor3ub(154, 242, 255);
        glVertex2f(1920, 1080);
        glVertex2f(0, 1080);
        glEnd();
    }
}


void ground()
{
    //far ground
    glBegin(GL_POLYGON);
    if(!night)glColor3ub(23, 173, 30);
    else glColor3ub(10,59,13);
    glVertex2f(0, 500);
    glVertex2f(1920, 500);
    glVertex2f(1920, 400);
    glVertex2f(0, 400);
    glEnd();

    //near ground
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(1920, 0);
    glVertex2f(1920, 400);
    glVertex2f(0, 400);
    glEnd();
}

void ground_marks()
{
    //ground marks
    glBegin(GL_POLYGON);
    if(!night)glColor3ub(104, 186, 63);
    else glColor3ub(33,57,21);
    glVertex2f(299, 75);
    glVertex2f(299, 71);
    glVertex2f(390, 67);
    glVertex2f(340, 60);
    glVertex2f(300, 59);
    glVertex2f(227, 60);
    glVertex2f(235, 66);
    glVertex2f(221, 73);
    glVertex2f(188, 76);
    glVertex2f(189, 85);
    glVertex2f(302, 86);
    glVertex2f(413, 81);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(474, 10);
    glVertex2f(502, 1);
    glVertex2f(359, 1);
    glVertex2f(325, 6);
    glVertex2f(362, 9);
    glVertex2f(442, 14);
    glVertex2f(408, 17);
    glVertex2f(296, 21);
    glVertex2f(461, 31);
    glVertex2f(549, 28);
    glVertex2f(576, 24);
    glVertex2f(543, 17);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(807, 49);
    glVertex2f(828, 48);
    glVertex2f(863, 46);
    glVertex2f(886, 44);
    glVertex2f(859, 39);
    glVertex2f(835, 38);
    glVertex2f(805, 38);
    glVertex2f(763, 39);
    glVertex2f(782, 46);
    glVertex2f(750, 50);
    glVertex2f(730, 53);
    glVertex2f(713, 56);
    glVertex2f(730, 59);
    glVertex2f(777, 61);
    glVertex2f(809, 61);
    glVertex2f(892, 56);
    glVertex2f(909, 55);
    glVertex2f(886, 53);
    glVertex2f(829, 52);
    glVertex2f(813, 51);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1305, 125);
    glVertex2f(1372, 122);
    glVertex2f(1401, 118);
    glVertex2f(1339, 111);
    glVertex2f(1247, 113);
    glVertex2f(1275, 122);
    glVertex2f(1214, 129);
    glVertex2f(1186, 134);
    glVertex2f(1213, 138);
    glVertex2f(1293, 140);
    glVertex2f(1431, 133);
    glVertex2f(1396, 129);
    glVertex2f(1316, 127);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1272, 69);
    glVertex2f(1287, 64);
    glVertex2f(1302, 59);
    glVertex2f(1220, 56);
    glVertex2f(1157, 60);
    glVertex2f(1122, 65);
    glVertex2f(1161, 69);
    glVertex2f(1239, 73);
    glVertex2f(1226, 75);
    glVertex2f(1129, 78);
    glVertex2f(1093, 82);
    glVertex2f(1251, 90);
    glVertex2f(1341, 88);
    glVertex2f(1373, 83);
    glVertex2f(1314, 73);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(170, 470);
    glVertex2f(225, 470);
    glVertex2f(235, 435);
    glVertex2f(160, 434);
    glEnd();
}

void river()
{
    //river
    glBegin(GL_POLYGON);
    if(!night)glColor3ub(154, 242, 255);
    else glColor3ub(36,54,57);
    glVertex2f(0, 430);
    glVertex2f(300, 420);
    glVertex2f(800, 450);
    glVertex2f(1300, 440);
    glVertex2f(1650, 437);
    glVertex2f(1920, 430);
    glVertex2f(1920, 250);
    glVertex2f(1500, 220);
    glVertex2f(300, 240);
    glVertex2f(0, 250);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1300, 400);
    glVertex2f(1400, 400);
    glVertex2f(1445, 500);
    glVertex2f(1451, 500);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1445, 500);
    glVertex2f(1451, 500);
    glVertex2f(1450, 550);
    glEnd();
}


void house1(float Tx = 0, float Ty = 0, int m = 1)
{

    //House Wall Shadowed
    glBegin(GL_POLYGON);
    glColor3ub(163, 173, 167);
    glVertex2f(Tx + m * 0, Ty + m * 0);
    glVertex2f(Tx + m * 40, Ty + m * -0.01);
    glVertex2f(Tx + m * 40, Ty + m * 26);
    glVertex2f(Tx + m * 19, Ty + m * 48);
    glVertex2f(Tx + m * -0.04, Ty + m * 26);
    glEnd();

    //side wall
    glBegin(GL_QUADS);
    glColor3ub(201, 214, 206);
    glVertex2f(Tx + m * 40, Ty + m * -0.01);
    glVertex2f(Tx + m * 87, Ty + m * -0.01);
    glVertex2f(Tx + m * 87, Ty + m * 26);
    glVertex2f(Tx + m * 40, Ty + m * 26);

    //roof
    glBegin(GL_QUADS);
    glColor3ub(216, 230, 221);
    glVertex2f(Tx + m * 19, Ty + m * 48);
    glVertex2f(Tx + m * 40, Ty + m * 26);
    glVertex2f(Tx + m * 87, Ty + m * 26);
    glVertex2f(Tx + m * 67, Ty + m * 47);

    //door
    glBegin(GL_QUADS);
    glColor3ub(46, 46, 46);
    glVertex2f(Tx + m * 67, Ty + m * 0);
    glVertex2f(Tx + m * 60, Ty + m * 0);
    glVertex2f(Tx + m * 60, Ty + m * 20);
    glVertex2f(Tx + m * 67, Ty + m * 20);

    //windows
    glBegin(GL_QUADS);
    glColor3ub(5, 19, 26);
    glVertex2f(Tx + m * 6, Ty + m * 7);
    glVertex2f(Tx + m * 10, Ty + m * 7);
    glVertex2f(Tx + m * 10, Ty + m * 19);
    glVertex2f(Tx + m * 6, Ty + m * 19);
    glVertex2f(Tx + m * 17, Ty + m * 7);
    glVertex2f(Tx + m * 22, Ty + m * 7);
    glVertex2f(Tx + m * 22, Ty + m * 19);
    glVertex2f(Tx + m * 17, Ty + m * 19);
    glVertex2f(Tx + m * 29, Ty + m * 7);
    glVertex2f(Tx + m * 33, Ty + m * 7);
    glVertex2f(Tx + m * 33, Ty + m * 19);
    glVertex2f(Tx + m * 29, Ty + m * 19);
    glVertex2f(Tx + m * 46, Ty + m * 6);
    glVertex2f(Tx + m * 50, Ty + m * 6);
    glVertex2f(Tx + m * 50, Ty + m * 18);
    glVertex2f(Tx + m * 46, Ty + m * 18);

    glVertex2f(Tx + m * 76, Ty + m * 7);
    glVertex2f(Tx + m * 81, Ty + m * 7);
    glVertex2f(Tx + m * 81, Ty + m * 19);
    glVertex2f(Tx + m * 76, Ty + m * 19);
    glEnd();
}

void house2(float Tx = 0, float Ty = 0, int m = 1)
{
    //House Wall Shadowed
    glBegin(GL_POLYGON);
    glColor3ub(120, 115, 116);
    glVertex2f(Tx + m * 0, Ty + 0);
    glVertex2f(Tx + m * 40, Ty + 0);
    glVertex2f(Tx + m * 40, Ty + 26.27);
    glVertex2f(Tx + m * 20, Ty + 48);
    glVertex2f(Tx + m * -0.04, Ty + 26);
    glEnd();

    //Side Wall
    glBegin(GL_QUADS);
    glColor3ub(186, 177, 178);
    glVertex2f(Tx + m * 40, Ty + 0);
    glVertex2f(Tx + m * 141, Ty + 0);
    glVertex2f(Tx + m * 141, Ty + 26);
    glVertex2f(Tx + m * 40, Ty + 26);

    //roof
    glBegin(GL_QUADS);
    glColor3ub(207, 202, 203);
    glVertex2f(Tx + m * 20, Ty + 48);
    glVertex2f(Tx + m * 40, Ty + 26);
    glVertex2f(Tx + m * 141, Ty + 26);
    glVertex2f(Tx + m * 121, Ty + 48);

    //door
    glBegin(GL_QUADS);
    glColor3ub(163, 126, 133);
    glVertex2f(Tx + m * 95, Ty + m * 0);
    glVertex2f(Tx + m * 85, Ty + m * 0);
    glVertex2f(Tx + m * 85, Ty + m * 20);
    glVertex2f(Tx + m * 95, Ty + m * 20);

    //window
    glBegin(GL_QUADS);
    glColor3ub(5, 19, 26);
    glVertex2f(Tx + m * 7, Ty + 7);
    glVertex2f(Tx + m * 11, Ty + 7);
    glVertex2f(Tx + m * 11, Ty + 19);
    glVertex2f(Tx + m * 7, Ty + 19);
    glVertex2f(Tx + m * 18, Ty + 7);
    glVertex2f(Tx + m * 22, Ty + 7);
    glVertex2f(Tx + m * 22, Ty + 19);
    glVertex2f(Tx + m * 18, Ty + 19);
    glVertex2f(Tx + m * 29, Ty + 7);
    glVertex2f(Tx + m * 33, Ty + 7);
    glVertex2f(Tx + m * 33, Ty + 19);
    glVertex2f(Tx + m * 29, Ty + 19);
    glVertex2f(Tx + m * 46, Ty + 12);
    glVertex2f(Tx + m * 51, Ty + 12);
    glVertex2f(Tx + m * 51, Ty + 19);
    glVertex2f(Tx + m * 46, Ty + 19);
    glVertex2f(Tx + m * 60, Ty + 12);
    glVertex2f(Tx + m * 65, Ty + 12);
    glVertex2f(Tx + m * 65, Ty + 19);
    glVertex2f(Tx + m * 60, Ty + 19);
    glVertex2f(Tx + m * 74, Ty + 12);
    glVertex2f(Tx + m * 79, Ty + 12);
    glVertex2f(Tx + m * 79, Ty + 19);
    glVertex2f(Tx + m * 74, Ty + 19);
    glVertex2f(Tx + m * 102, Ty + 12);
    glVertex2f(Tx + m * 107, Ty + 12);
    glVertex2f(Tx + m * 107, Ty + 19);
    glVertex2f(Tx + m * 102, Ty + 19);
    glVertex2f(Tx + m * 116, Ty + 12);
    glVertex2f(Tx + m * 121, Ty + 12);
    glVertex2f(Tx + m * 121, Ty + 19);
    glVertex2f(Tx + m * 116, Ty + 19);
    glVertex2f(Tx + m * 130, Ty + 12);
    glVertex2f(Tx + m * 135, Ty + 12);
    glVertex2f(Tx + m * 135, Ty + 19);
    glVertex2f(Tx + m * 130, Ty + 19);
    glEnd();
}

void house3(float Tx = 0, float Ty = 0, float m = 1)
{
    //Wall Shadowed
    glBegin(GL_POLYGON);
    glColor3ub(62, 44, 145);
    glVertex2f(Tx + m * 0, Ty + m * 0);
    glVertex2f(Tx + m * 40, Ty + m * 0);
    glVertex2f(Tx + m * 40, Ty + m * 52);
    glVertex2f(Tx + m * 20, Ty + m * 74);
    glVertex2f(Tx + m * 0.26, Ty + m * 45);
    glEnd();

    //side wall
    glBegin(GL_QUADS);
    glColor3ub(103, 71, 245);
    glVertex2f(Tx + m * 40, Ty + m * 0);
    glVertex2f(Tx + m * 101, Ty + m * 0);
    glVertex2f(Tx + m * 101, Ty + m * 45);
    glVertex2f(Tx + m * 40, Ty + m * 45);

    //roof
    glBegin(GL_QUADS);
    glColor3ub(140, 115, 255);
    glVertex2f(Tx + m * 20, Ty + m * 74);
    glVertex2f(Tx + m * 40, Ty + m * 45);
    glVertex2f(Tx + m * 101, Ty + m * 45);
    glVertex2f(Tx + m * 81, Ty + m * 74);

    //windows
    glBegin(GL_QUADS);
    glColor3ub(12, 4, 51);
    glVertex2f(Tx + m * 13, Ty + m * 10);
    glVertex2f(Tx + m * 27, Ty + m * 10);
    glVertex2f(Tx + m * 27, Ty + m * 35);
    glVertex2f(Tx + m * 13, Ty + m * 35);

    glBegin(GL_QUADS);
    glColor3ub(5, 19, 26);
    glVertex2f(Tx + m * 45, Ty + m * 13);
    glVertex2f(Tx + m * 55, Ty + m * 13);
    glVertex2f(Tx + m * 55, Ty + m * 27);
    glVertex2f(Tx + m * 45, Ty + m * 27);
    glVertex2f(Tx + m * 85, Ty + m * 13);
    glVertex2f(Tx + m * 95, Ty + m * 13);
    glVertex2f(Tx + m * 95, Ty + m * 27);
    glVertex2f(Tx + m * 85, Ty + m * 27);

    //door
    glBegin(GL_QUADS);
    glColor3ub(12, 4, 51);
    glVertex2f(Tx + m * 80, Ty + m * 0);
    glVertex2f(Tx + m * 60, Ty + m * 0);
    glVertex2f(Tx + m * 60, Ty + m * 35);
    glVertex2f(Tx + m * 80, Ty + m * 35);

    //chimney left
    glBegin(GL_QUADS);
    glColor3ub(39, 7, 94);
    glVertex2f(Tx + m * 44, Ty + m * 66);
    glVertex2f(Tx + m * 48, Ty + m * 61);
    glVertex2f(Tx + m * 48, Ty + m * 78);
    glVertex2f(Tx + m * 44, Ty + m * 78);

    //chimney front
    glBegin(GL_QUADS);
    glColor3ub(92, 14, 227);
    glVertex2f(Tx + m * 48, Ty + m * 61);
    glVertex2f(Tx + m * 55, Ty + m * 61);
    glVertex2f(Tx + m * 55, Ty + m * 78);
    glVertex2f(Tx + m * 48, Ty + m * 78);
    glEnd();
}

void handleResize(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

int angle = 0;

void tower(float Tx = 0, float Ty = 0)
{
    //main body
    glBegin(GL_QUADS);
    glColor3ub(167, 173, 166);
    glVertex2f(Tx + 0, Ty + 0);
    glVertex2f(Tx + 56, Ty + 0);
    glVertex2f(Tx + 51, Ty + 70);
    glVertex2f(Tx + 4, Ty + 70);

    //throat
    glBegin(GL_QUADS);
    glColor3ub(125, 130, 100);
    glVertex2f(Tx + 7, Ty + 70);
    glVertex2f(Tx + 49, Ty + 70);
    glVertex2f(Tx + 49, Ty + 76);
    glVertex2f(Tx + 7, Ty + 76);

    //door
    glBegin(GL_QUADS);
    glColor3ub(19, 65, 71);
    glVertex2f(Tx + 22, Ty + 0);
    glVertex2f(Tx + 33, Ty + 0);
    glVertex2f(Tx + 33, Ty + 19);
    glVertex2f(Tx + 22, Ty + 19);

    //window
    glBegin(GL_QUADS);
    glColor3ub(5, 19, 26);
    glVertex2f(Tx + 25, Ty + 29);
    glVertex2f(Tx + 31, Ty + 29);
    glVertex2f(Tx + 31, Ty + 40);
    glVertex2f(Tx + 25, Ty + 40);
    glVertex2f(Tx + 25, Ty + 51);
    glVertex2f(Tx + 31, Ty + 51);
    glVertex2f(Tx + 31, Ty + 62);
    glVertex2f(Tx + 25, Ty + 62);
    glEnd();

    //roof
    glBegin(GL_TRIANGLES);
    glColor3ub(199, 107, 107);
    glVertex2f(Tx + 0, Ty + 76);
    glVertex2f(Tx + 57, Ty + 76);
    glVertex2f(Tx + 28, Ty + 91);
    glEnd();
}


void tent(float Tx = 0, float Ty = 0, float m = 3)
{
    //Top
    if(night) glColor3ub (171, 94, 58); ///if night is true then color will change in night mode, repeat for boat
    else  glColor3ub (247,114,53); ///if night is false then color will be the same in day
    glBegin(GL_POLYGON);
    //glColor3ub (247,114,53);
    glVertex2f(Tx + m * 100, Ty + m * 110);
    glVertex2f(Tx + m * 160, Ty + m * 100);
    glVertex2f(Tx + m * 200, Ty + m * 170);
    glVertex2f(Tx + m * 135, Ty + m * 170);
    glEnd();

    //triangle
    if(night) glColor3ub (158, 102, 43); ///if night is true then color will change in night mode, repeat for boat
    else  glColor3ub (255,180,100); ///if night is false then color will be the same in day
    glBegin(GL_POLYGON);
    //glColor3ub (255,180,100);
    glVertex2f(Tx + m * 165, Ty + m * 99);
    glVertex2f(Tx + m * 220, Ty + m * 108);
    glVertex2f(Tx + m * 200, Ty + m * 170);
    glEnd();

    //Rope
    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 147, Ty + m * 175);
    glVertex2f(Tx + m * 104, Ty + m * 105);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 200, Ty + m * 175);
    glVertex2f(Tx + m * 150, Ty + m * 95);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 200, Ty + m * 170);
    glVertex2f(Tx + m * 200, Ty + m * 180);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 150, Ty + m * 90);
    glVertex2f(Tx + m * 150, Ty + m * 100);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 104, Ty + m * 100);
    glVertex2f(Tx + m * 104, Ty + m * 110);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 147, Ty + m * 170);
    glVertex2f(Tx + m * 147, Ty + m * 180);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 200, Ty + m * 175);
    glVertex2f(Tx + m * 235, Ty + m * 115);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 235, Ty + m * 110);
    glVertex2f(Tx + m * 235, Ty + m * 120);
    glEnd();

    //Shade
    glBegin(GL_POLYGON);
    glColor3ub (204, 143, 80);
    glVertex2f(Tx + m * 169, Ty + m * 104);
    glVertex2f(Tx + m * 200, Ty + m * 150);
    glVertex2f(Tx + m * 200, Ty + m * 160);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (204, 143, 80);
    glVertex2f(Tx + m * 200, Ty + m * 170);
    glVertex2f(Tx + m * 200, Ty + m * 150);
    glVertex2f(Tx + m * 221, Ty + m * 107);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (97, 68, 37);
    glVertex2f(Tx + m * 220, Ty + m * 108);
    glVertex2f(Tx + m * 227, Ty + m * 108);
    glVertex2f(Tx + m * 206, Ty + m * 165);
    glVertex2f(Tx + m * 203, Ty + m * 160);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (179, 126, 70);
    glVertex2f(Tx + m * 167, Ty + m * 99);
    glVertex2f(Tx + m * 227, Ty + m * 108);
    glVertex2f(Tx + m * 219, Ty + m * 112);
    glVertex2f(Tx + m * 169, Ty + m * 104);
    glEnd();



    //middle
    if(night) glColor3ub (158, 102, 43); ///if night is true then color will change in night mode, repeat for boat
    else  glColor3ub (255,180,100); ///if night is false then color will be the same in day
    glBegin(GL_POLYGON);
    //glColor3ub (94,57,31);
    glVertex2f(Tx + m * 200, Ty + m * 180);
    glVertex2f(Tx + m * 200, Ty + m * 110);
    glVertex2f(Tx + m * 201, Ty + m * 110);
    glVertex2f(Tx + m * 201, Ty + m * 110);
    glEnd();

    //Front
    if(night) glColor3ub (158, 102, 43); ///if night is true then color will change in night mode, repeat for boat
    else  glColor3ub (255,180,100); ///if night is false then color will be the same in day
    glBegin(GL_POLYGON);
    //glColor3ub (255,180,100);
    glVertex2f(Tx + m * 200, Ty + m * 170);
    glVertex2f(Tx + m * 160, Ty + m * 100);
    glVertex2f(Tx + m * 167, Ty + m * 99);
    glVertex2f(Tx + m * 206, Ty + m * 165);
    glEnd();
}


void tree(float Tx, float Ty, float m = 1, float n = 1.2)
{
    //tree
    glBegin(GL_QUADS);
    glColor3ub(48, 16, 16);
    glVertex2f(Tx + m * 107, Ty + m * n * 120);
    glVertex2f(Tx + m * 123, Ty + m * n * 120);
    glVertex2f(Tx + m * 123, Ty + m * n * 150);
    glVertex2f(Tx + m * 107, Ty + m * n * 150);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(4, 66, 20);
    glVertex2f(Tx + m * 65, Ty + m * n * 150);
    glVertex2f(Tx + m * 165, Ty + m * n * 150);
    glVertex2f(Tx + m * 115, Ty + m * n * 250);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(4, 87, 26);
    glVertex2f(Tx + m * 75, Ty + m * n * 190);
    glVertex2f(Tx + m * 155, Ty + m * n * 190);
    glVertex2f(Tx + m * 115, Ty + m * n * 255);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(4, 117, 34);
    glVertex2f(Tx + m * 90, Ty + m * n * 230);
    glVertex2f(Tx + m * 140, Ty + m * n * 230);
    glVertex2f(Tx + m * 115, Ty + m * n * 275);
    glEnd();
}

void far_forest(float Tx = 0, float Ty = 0, float m = 1)
{
    tree(Tx + 15, Ty + 25, 0.36 * m);
    tree(Tx + -25, Ty + 25, 0.4 * m);
    tree(Tx + 0, Ty + 20, 0.3 * m);
    tree(Tx + 50, Ty + 20, 0.35 * m);
    tree(Tx + 40, Ty + 10, 0.3 * m);
    tree(Tx + 25, Ty + 15, 0.22 * m);
    tree(Tx + -60, Ty + 30, 0.33 * m);
    tree(Tx + -40, Ty + 20, 0.3 * m);
    tree(Tx + -20, Ty + 15, 0.26 * m);
    tree(Tx + -60, Ty + 10, 0.28 * m);
    tree(Tx + -35, Ty + 7, 0.22 * m);
    tree(Tx + 0, Ty + 10, 0.22 * m);
    tree(Tx + 65, Ty + 4, 0.27 * m);
}



/*void cloud1(float Tx, float Ty, float m=1)
{
    ///if night is true then day else colour change at night
    ///repeat for other clouds
    if(night) glColor3ub(69, 69, 69);
    else glColor3ub(255,255,255);

    glPushMatrix();
    //cloud
    circle(Tx + m * 16, Ty + m * 20, 15, 15);
    circle(Tx + m * 29, Ty + m * 31, 9, 9);
    circle(Tx + m * 58, Ty + m * 30, 27, 27);
    circle(Tx + m * 85, Ty + m * 21, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2f(Tx+m*17, Ty+m*23);
    glVertex2f(Tx+m*85, Ty+m*23);
    glVertex2f(Tx+m*85, Ty+m*1);
    glVertex2f(Tx+m*17, Ty+m*5);
    glEnd();
    glPopMatrix();
}*/


void cloud2(float Tx, float Ty, float m=1)
{
    if(night) glColor3ub(46, 46, 46);
    else glColor3ub(255,255,255);

    glPushMatrix();
    //cloud
    circle(Tx + m * 13, Ty + m * 16, 7, 7);
    circle(Tx + m * 24, Ty + m * 24, 9, 9);
    circle(Tx + m * 40, Ty + m * 32, 12, 12);
    circle(Tx + m * 54, Ty + m * 36, 7, 7);
    circle(Tx + m * 74, Ty + m * 40, 16, 16);
    circle(Tx + m * 95, Ty + m * 40, 10, 10);
    circle(Tx + m * 108, Ty + m * 34, 6, 6);
    circle(Tx + m * 122, Ty + m * 31, 10, 10);
    circle(Tx + m * 132, Ty + m * 25, 10, 10);
    circle(Tx + m * 144, Ty + m * 16, 6, 6);
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_QUADS);
    //glColor3ub(255,255,255);
    glVertex2f(Tx+m*12, Ty+m*18);
    glVertex2f(Tx+m*146, Ty+m*18);
    glVertex2f(Tx+m*146, Ty+m*11);
    glVertex2f(Tx+m*11, Ty+m*10);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2f(Tx+m*20, Ty+m*32);
    glVertex2f(Tx+m*138, Ty+m*32);
    glVertex2f(Tx+m*138, Ty+m*17);
    glVertex2f(Tx+m*20, Ty+m*17);
    glEnd();
    glPopMatrix();

}

void cloud3(float Tx, float Ty, float m=1)
{

    circle(Tx + m * 23, Ty + m * 33, 21, 21);
    circle(Tx + m * 50, Ty + m * 49, 20, 20);
    circle(Tx + m * 80, Ty + m * 43, 14, 14);
    circle(Tx + m * 90, Ty + m * 32, 17, 17);
    circle(Tx + m * 68, Ty + m * 23, 21, 21);
    circle(Tx + m * 43, Ty + m * 17, 17, 17);
    circle(Tx + m * 23, Ty + m * 33, 22, 22);
}

void wood(float Tx = 0, float Ty = 0)
{
    //Back wood
    glBegin(GL_POLYGON);
    glColor3ub(141, 103, 58);
    glVertex2f(Tx + 606, Ty + 50);
    glVertex2f(Tx + 694, Ty + 75);
    glVertex2f(Tx + 700, Ty + 74);
    glVertex2f(Tx + 702, Ty + 71);
    glVertex2f(Tx + 704, Ty + 65);
    glVertex2f(Tx + 701, Ty + 58);
    glVertex2f(Tx + 608, Ty + 29);
    glEnd();

    //Front wood
    glBegin(GL_POLYGON);
    glColor3ub(171, 123, 74);
    glVertex2f(Tx + 700, Ty + 50);
    glVertex2f(Tx + 610, Ty + 75);
    glVertex2f(Tx + 606, Ty + 75);
    glVertex2f(Tx + 601, Ty + 70);
    glVertex2f(Tx + 601, Ty + 63);
    glVertex2f(Tx + 606, Ty + 55);
    glVertex2f(Tx + 694, Ty + 29);
    glEnd();

    glColor3ub(141, 103, 58);
    circle(Tx + 697, Ty + 40, 5, 10);
    circle(Tx + 607, Ty + 40, 5, 10);
}

void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    ///------------------------------
    if(!night)
    {
        glPushMatrix();
        glTranslatef(0.0f, sun_position, 0.0f);
        glColor3ub(225, 255, 0);
        circle(1190, 610, 70, 70);
        glPopMatrix();
    }

    ///------------------------------
    glPushMatrix();
    glTranslatef(cloud1_position, 0.0f, 0.0f);
    glColor3ub(255, 255, 255);
//    cloud1(1920, 800);
    glPopMatrix();

    ///------------------------------
    glPushMatrix();
    glTranslatef(cloud2_position, 0.0f, 0.0f);
    cloud2(0, 900);
    glPopMatrix();

    ///------------------------------
    glPushMatrix();
    glTranslatef(cloud3_position, 0.0f, 0.0f);
    cloud3(1200, 1000);
    glPopMatrix();

    ///------------------------------
    glPushMatrix();
    glTranslatef(plane_position, 0.0f, 0.0f);

    glPopMatrix();
    ///------------------------------


    ground();
    river();
    ground_marks();
    tree(1065, 420, 0.4, 1);
    house3(1000, 465);
    tree(920, 420, 0.4, 1);
    tree(955, 410, 0.4, 1);
    house1(870, 465);
    house2(1150, 465);
    tree(1143, 415, 0.3, 1);
    tree(1270, 415, 0.45, 1);
    tree(1300, 415, 0.4, 1);
    tree(1330, 415, 0.45, 1);
    tree(1265, 420, 0.29, 1);
    tree(1100, 420, 0.29, 1);

    tower(170, 470);
    house2(550, 470);

    //Far Left
    far_forest(50, 400);
    far_forest(280, 410);
    far_forest(425, 415);
    far_forest(750, 420);

    //Far Right
    far_forest(1500, 405);
    far_forest(1645, 403);
    far_forest(1790, 401);
    far_forest(1935, 402);

    ///------------------------------
    glPushMatrix();
    glTranslatef(boat_far_position, 0.0f, 0.0f);

    glPopMatrix();
    ///------------------------------

    ///------------------------------
    glPushMatrix();
    glTranslatef(boat_position, 0.0f, 0.0f);

    glPopMatrix();
    ///------------------------------

    //Front Left
    tree(100, 0, 1.3);
    tree(-70, -40, 1.4);
    tree(-70, -95, 1);
    tree(10, -120, 1.3);
    tree(90, -140, 1.2);
    tree(30, -90, 0.7);
    tree(230, 00, 0.7);

    //Front Right
    tree(1530, 0, 1.3, 1);
    tree(1620, -140, 1.5, 1.3);
    tree(1400, -50, 1.2);
    tree(1600, -100, 1, 1.2);
    tree(1700, -180, 1.3, 1.3);
    tree(1500, -90, 1.1, 1.2);
    tree(1450, -100, 1, 1);
    tree(1580, -80, 0.7, 1);

    wood(350, 40);
    if(night)
    {
        fire(925, 90);
    }
    tent(150, -170);
    glFlush();
}

void myInit(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1920.0, 0.0, 1080.0);
}

int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1920, 1080);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Scenery of a Mountain");
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();
}
