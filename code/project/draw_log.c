#include "draw_log.h"
#include "draw_figure_extemsion.h"//��ͼ����include�������ĸ�����һ������д�ģ�����������lib��
#include "graphics.h"
#include "imgui.h"
#include "extgraph.h"
#include "main.h"
#include <string.h>
#include "genlib.h"

static char Log[2000][50];
static int log_row_num = 0;

void add_log(char * s) {
	strcpy(Log[log_row_num], s);
	log_row_num++;
	return;
}



void draw_log() {

	double fh = 1.5*GetFontHeight();
	SetPenColor("Green");
	drawRectangle(10, 0, 3, GetWindowHeight() - menu_height, 1);
	SetPenColor("Red");
	for (int i = log_row_num - 1; i >= 0; i--) {
		drawLabel(10.1, 0.3 + fh * (log_row_num - i - 1), Log[i]);
	}

	return;
}
