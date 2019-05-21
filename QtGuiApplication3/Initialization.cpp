#include<fstream>
#include<iostream>
#include<algorithm>

#include "LineWidget.h"
#include "matgraph.h"
#include "DigitalMapForWHU.h"


#define maxn 20								//每种类型建筑的最大值
#define slen 50								//sidelength,每个图标所占的边长（单位为像素）

using namespace std;

extern DigitalMapForWHU w;

inline double dist(int srcx, int srcy, int dstx, int dsty)
{
	return sqrt((srcx - dstx)*(srcx - dstx) + (srcy - dsty) * (srcy - dsty));
}

void InitializeGraph(matgraph& graph)		//初始化图
{
	ifstream is;
	is.open("H:\\文档\\Visual Studio 2017\\Projects\\QtGuiApplication3\\QtGuiApplication3\\Resources\\information.txt");
	is >> graph;//读取文件
	for (int i = 0; i < graph.n; i++)
		for (int j = 0; j < graph.n; j++)
		{
			if (graph.edges[i][j] == 1)
				graph.edges[i][j] = dist(graph.vexs[i].x, graph.vexs[i].y, graph.vexs[j].x, graph.vexs[j].y);
		}
	Floyd(graph);//计算并输出a和path数组
	is.close();
}

void Visualize(const matgraph& graph, DigitalMapForWHU&w)					//对图做可视化处理：改变图的顶点和边的位置（相对qt初始创建的窗口）
{
	QPaintEvent* event;

	size_t dorm[maxn] = { 0 }, canteen[maxn] = { 0 },
		teaching[maxn] = { 0 }, office[maxn] = { 0 };		//存放对应的点的编号
	size_t dormcnt = 0, canteencnt = 0, teachingcnt = 0, officecnt = 0;
	for (int i = 0; i < graph.n; i++)						//设置各个位置的图标
	{
		if (graph.vexs[i].type == "dorm")
		{
			dorm[dormcnt] = graph.vexs[i].id;				//第dormcnt个宿舍的顶点编号为i
			//注意dormcnt数组从0开始，qt中按钮从1开始
			dormcnt++;
			switch (dormcnt)
			{
			case 1:w.ui.dorm_1->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 2:w.ui.dorm_2->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 3:w.ui.dorm_3->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 4:w.ui.dorm_4->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 5:w.ui.dorm_5->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 6:w.ui.dorm_6->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 7:w.ui.dorm_7->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 8:w.ui.dorm_8->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 9:w.ui.dorm_9->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 10:w.ui.dorm_10->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 11:w.ui.dorm_11->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 12:w.ui.dorm_12->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 13:w.ui.dorm_13->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 14:w.ui.dorm_14->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 15:w.ui.dorm_15->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 16:w.ui.dorm_16->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 17:w.ui.dorm_17->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 18:w.ui.dorm_18->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 19:w.ui.dorm_19->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 20:w.ui.dorm_20->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			}
			
		}
		else if (graph.vexs[i].type == "canteen")
		{
			canteen[canteencnt] = graph.vexs[i].id;				//第canteencnt个宿舍的顶点编号为i
																//注意canteencnt数组从0开始，qt中按钮从1开始
			canteencnt++;
			switch (canteencnt)
			{
			case 1:w.ui.canteen_1->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 2:w.ui.canteen_2->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 3:w.ui.canteen_3->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 4:w.ui.canteen_4->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 5:w.ui.canteen_5->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 6:w.ui.canteen_6->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 7:w.ui.canteen_7->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 8:w.ui.canteen_8->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 9:w.ui.canteen_9->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 10:w.ui.canteen_10->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 11:w.ui.canteen_11->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 12:w.ui.canteen_12->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 13:w.ui.canteen_13->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 14:w.ui.canteen_14->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 15:w.ui.canteen_15->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 16:w.ui.canteen_16->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 17:w.ui.canteen_17->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 18:w.ui.canteen_18->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 19:w.ui.canteen_19->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 20:w.ui.canteen_20->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			}
		}
		else if (graph.vexs[i].type == "teaching")
		{
			teaching[teachingcnt] = graph.vexs[i].id;				//第teachingcnt个宿舍的顶点编号为i
																	//注意teachingcnt数组从0开始，qt中按钮从1开始
			teachingcnt++;
			switch (teachingcnt)
			{
			case 1:w.ui.teaching_1->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 2:w.ui.teaching_2->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 3:w.ui.teaching_3->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 4:w.ui.teaching_4->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 5:w.ui.teaching_5->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 6:w.ui.teaching_6->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 7:w.ui.teaching_7->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 8:w.ui.teaching_8->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 9:w.ui.teaching_9->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 10:w.ui.teaching_10->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 11:w.ui.teaching_11->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 12:w.ui.teaching_12->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 13:w.ui.teaching_13->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 14:w.ui.teaching_14->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 15:w.ui.teaching_15->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 16:w.ui.teaching_16->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 17:w.ui.teaching_17->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 18:w.ui.teaching_18->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 19:w.ui.teaching_19->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 20:w.ui.teaching_20->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			}
		}
		else if (graph.vexs[i].type == "office")
		{
			office[officecnt] = graph.vexs[i].id;				//第officecnt个宿舍的顶点编号为i
																//注意officecnt数组从0开始，qt中按钮从1开始
			officecnt++;
			switch (officecnt)
			{
			case 1:w.ui.office_1->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 2:w.ui.office_2->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 3:w.ui.office_3->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 4:w.ui.office_4->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 5:w.ui.office_5->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 6:w.ui.office_6->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 7:w.ui.office_7->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 8:w.ui.office_8->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 9:w.ui.office_9->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 10:w.ui.office_10->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 11:w.ui.office_11->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 12:w.ui.office_12->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 13:w.ui.office_13->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 14:w.ui.office_14->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 15:w.ui.office_15->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 16:w.ui.office_16->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 17:w.ui.office_17->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 18:w.ui.office_18->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 19:w.ui.office_19->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			case 20:w.ui.office_20->setGeometry(graph.vexs[i].x, graph.vexs[i].y, slen, slen); break;
			}
		}
	}
	for (int dormdel = dormcnt + 1; dormdel <= maxn; dormdel++)
	{
		switch (dormdel)
		{
		case 1:delete w.ui.dorm_1; break;
		case 2:delete w.ui.dorm_2; break;
		case 3:delete w.ui.dorm_3; break;
		case 4:delete w.ui.dorm_4; break;
		case 5:delete w.ui.dorm_5; break;
		case 6:delete w.ui.dorm_6; break;
		case 7:delete w.ui.dorm_7; break;
		case 8:delete w.ui.dorm_8; break;
		case 9:delete w.ui.dorm_9; break;
		case 10:delete w.ui.dorm_10; break;
		case 11:delete w.ui.dorm_11; break;
		case 12:delete w.ui.dorm_12; break;
		case 13:delete w.ui.dorm_13; break;
		case 14:delete w.ui.dorm_14; break;
		case 15:delete w.ui.dorm_15; break;
		case 16:delete w.ui.dorm_16; break;
		case 17:delete w.ui.dorm_17; break;
		case 18:delete w.ui.dorm_18; break;
		case 19:delete w.ui.dorm_19; break;
		case 20:delete w.ui.dorm_20; break;
		default:
			break;
		}
	}
	for (int canteendel = canteencnt + 1; canteendel <= maxn; canteendel++)
	{
		switch (canteendel)
		{
		case 1:delete w.ui.canteen_1; break;
		case 2:delete w.ui.canteen_2; break;
		case 3:delete w.ui.canteen_3; break;
		case 4:delete w.ui.canteen_4; break;
		case 5:delete w.ui.canteen_5; break;
		case 6:delete w.ui.canteen_6; break;
		case 7:delete w.ui.canteen_7; break;
		case 8:delete w.ui.canteen_8; break;
		case 9:delete w.ui.canteen_9; break;
		case 10:delete w.ui.canteen_10; break;
		case 11:delete w.ui.canteen_11; break;
		case 12:delete w.ui.canteen_12; break;
		case 13:delete w.ui.canteen_13; break;
		case 14:delete w.ui.canteen_14; break;
		case 15:delete w.ui.canteen_15; break;
		case 16:delete w.ui.canteen_16; break;
		case 17:delete w.ui.canteen_17; break;
		case 18:delete w.ui.canteen_18; break;
		case 19:delete w.ui.canteen_19; break;
		case 20:delete w.ui.canteen_20; break;
		default:
			break;
		}
	}
	for (int teachingdel = teachingcnt + 1; teachingdel <= maxn; teachingdel++)
	{
		switch (teachingdel)
		{
		case 1:delete w.ui.teaching_1; break;
		case 2:delete w.ui.teaching_2; break;
		case 3:delete w.ui.teaching_3; break;
		case 4:delete w.ui.teaching_4; break;
		case 5:delete w.ui.teaching_5; break;
		case 6:delete w.ui.teaching_6; break;
		case 7:delete w.ui.teaching_7; break;
		case 8:delete w.ui.teaching_8; break;
		case 9:delete w.ui.teaching_9; break;
		case 10:delete w.ui.teaching_10; break;
		case 11:delete w.ui.teaching_11; break;
		case 12:delete w.ui.teaching_12; break;
		case 13:delete w.ui.teaching_13; break;
		case 14:delete w.ui.teaching_14; break;
		case 15:delete w.ui.teaching_15; break;
		case 16:delete w.ui.teaching_16; break;
		case 17:delete w.ui.teaching_17; break;
		case 18:delete w.ui.teaching_18; break;
		case 19:delete w.ui.teaching_19; break;
		case 20:delete w.ui.teaching_20; break;
		default:
			break;
		}
	}
	for (int officedel = officecnt + 1; officedel <= maxn; officedel++)
	{
		switch (officedel)
		{
		case 1:delete w.ui.office_1; break;
		case 2:delete w.ui.office_2; break;
		case 3:delete w.ui.office_3; break;
		case 4:delete w.ui.office_4; break;
		case 5:delete w.ui.office_5; break;
		case 6:delete w.ui.office_6; break;
		case 7:delete w.ui.office_7; break;
		case 8:delete w.ui.office_8; break;
		case 9:delete w.ui.office_9; break;
		case 10:delete w.ui.office_10; break;
		case 11:delete w.ui.office_11; break;
		case 12:delete w.ui.office_12; break;
		case 13:delete w.ui.office_13; break;
		case 14:delete w.ui.office_14; break;
		case 15:delete w.ui.office_15; break;
		case 16:delete w.ui.office_16; break;
		case 17:delete w.ui.office_17; break;
		case 18:delete w.ui.office_18; break;
		case 19:delete w.ui.office_19; break;
		case 20:delete w.ui.office_20; break;
		default:
			break;
		}
	}
	//连线部分的可视化在main文件中（由可视化软件决定，无法改变）
} 