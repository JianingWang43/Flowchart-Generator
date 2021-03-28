#include "draw_button.h"
#include "genlib.h"
#include "main.h"
#include "draw_figure_extemsion.h"//��ͼ����include�������ĸ�����һ������д�ģ�����������lib��
#include "graphics.h"
#include "imgui.h"
#include "extgraph.h"
#include "genlib.h"
#include "mousecallback.h"
void draw_button() {
	double x = 0;
	double y = window_height - menu_height - icon_height;

	SetPenColor("Blue");
	//����һ����ť
	drawRectangle(x, y, icon_width, icon_height, 0);
	MovePen(x + icon_width * 3 / 4, y + icon_height / 2);
	StartFilledRegion(1);
	DrawArc(icon_width / 4, 0, 360);
	EndFilledRegion();
	//���ڶ�����ť
	drawRectangle(x + icon_width, y, icon_width, icon_height, 0);

	drawRectangle(x + icon_width * 5 / 4, y + icon_height / 4, icon_width / 2, icon_height / 2, 1);
	//����������ť
	drawRectangle(x + icon_width * 2, y, icon_width, icon_height, 0);
	StartFilledRegion(1);
	drawTriangle(x + icon_width * 9 / 4, y + icon_height / 4, icon_width / 2, icon_height / 2);
	EndFilledRegion();
	//�����ĸ���ť
	drawRectangle(x + icon_width * 3, y, icon_width, icon_height, 0);
	drawParallelogram(x + icon_width * 25 / 8, y + icon_height * 3 / 4, x + icon_width * 31 / 8, y + icon_height / 4, 1);
	//�����
	drawRectangle(x + icon_width * 4, y, icon_width, icon_height, 0);
	drawDiamond(x + icon_width * 33 / 8, y + icon_height * 3 / 4, x + icon_width * 39 / 8, y + icon_height / 4, 1);
	//������
	if (button(GenUIID(0), 0, 3, 1, 1, is_exec?"end_exec":"start_exec")) {
		if (is_exec) { cancelTimer(2); current_exec = NULL; }
		else {
			startTimer(2, 500);
			current_exec = list;
			variable_num = 0;
		}
		is_exec = !is_exec;
	}
	return;
}
