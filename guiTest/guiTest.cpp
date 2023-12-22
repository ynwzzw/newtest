#include <graphics.h>//easyx图形库头文件
#include <Windows.h>
#include <MMSystem.h>//播放音乐的头文件
#pragma comment(lib,"WINMM.LIB")//告诉编译器加载winmm.lib库文件


int main(){



	//初始化图形界面600*340
	initgraph(600,420);

	//加载图片
	loadimage(NULL,_T("bg.jpg"));

	//播放音乐 Media Control Interface
	mciSendString("play nihao.mp3 repeat",NULL,0,NULL);

	//设置文本字体和颜色
	settextstyle(30,0,"微软雅黑");
	settextcolor(RGB(255,255,0));

	//画空心矩形，要有坐标：左上角和右下角，以及矩形框的内容
	rectangle(300,40,550,80);
	outtextxy(310,45,"1-网站404攻击");

	rectangle(300,100,550,140);
	outtextxy(310,105,"2-网站篡改攻击");

	rectangle(300,160,550,200);
	outtextxy(310,165,"3-网站攻击修复");

	rectangle(300,220,550,260);
	outtextxy(310,225,"4-查看攻击记录");

	rectangle(300,280,550,320);
	outtextxy(310,285,"5-DNS攻击");

	rectangle(300,340,550,380);
	outtextxy(310,345,"6-退出");

	system("pause");

	closegraph();
	return 0;
}