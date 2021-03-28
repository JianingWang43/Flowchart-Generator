#pragma once
#include "link.h"
#include "genlib.h"

extern bool is_exec;
extern Link current_exec;
extern bool is_create_circle;//�ȴ�����Բ��ģʽ
extern bool is_draw_circle;//�Ƿ����ڻ�Բ
extern bool is_create_rectangle;
extern bool is_draw_rectangle;
extern bool is_create_triangle;
extern bool is_draw_triangle;
extern bool is_create_parallelogram;
extern bool is_draw_parallelogram;
extern bool is_create_diamond;
extern bool is_draw_diamond;
extern bool is_move_figure;//�Ƿ������ƶ�ͼ��
extern bool is_add_figure;//ȷ���û���ͼ֮ǰ�Ƿ����Ӻţ�û�㲻�ܻ�
extern double circle1x, circle1y, circle2x, circle2y;//circle1���û���Բʱ������Ͻǣ�circle2�����½�figure
extern double rectangle1x, rectangle1y, rectangle2x, rectangle2y;
extern double triangle1x, triangle1y, triangle2x, triangle2y;
extern double parallelogram1x, parallelogram1y, parallelogram2x, parallelogram2y;
extern double diamond1x, diamond1y, diamond2x, diamond2y;
extern int variable_num;
struct variable {
	char name[30];
	int num;
};
extern struct variable input_data[100];
void read_sentence(Link p);
void MouseEventProcess(int x, int y, int button, int event);
bool is_in_a_figure(Link head, double x, double y);
bool in_box(double x0, double y0, double x1, double x2, double y1, double y2);

void CharEventProcess(char ch);
void KeyboardEventProcess(int key, int event);
void TimerEventProcess(int timerID);