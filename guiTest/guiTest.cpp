#include <graphics.h>//easyxͼ�ο�ͷ�ļ�
#include <Windows.h>
#include <MMSystem.h>//�������ֵ�ͷ�ļ�
#pragma comment(lib,"WINMM.LIB")//���߱���������winmm.lib���ļ�


int main(){



	//��ʼ��ͼ�ν���600*340
	initgraph(600,420);

	//����ͼƬ
	loadimage(NULL,_T("bg.jpg"));

	//�������� Media Control Interface
	mciSendString("play nihao.mp3 repeat",NULL,0,NULL);

	//�����ı��������ɫ
	settextstyle(30,0,"΢���ź�");
	settextcolor(RGB(255,255,0));

	//�����ľ��Σ�Ҫ�����꣺���ϽǺ����½ǣ��Լ����ο������
	rectangle(300,40,550,80);
	outtextxy(310,45,"1-��վ404����");

	rectangle(300,100,550,140);
	outtextxy(310,105,"2-��վ�۸Ĺ���");

	rectangle(300,160,550,200);
	outtextxy(310,165,"3-��վ�����޸�");

	rectangle(300,220,550,260);
	outtextxy(310,225,"4-�鿴������¼");

	rectangle(300,280,550,320);
	outtextxy(310,285,"5-DNS����");

	rectangle(300,340,550,380);
	outtextxy(310,345,"6-�˳�");

	system("pause");

	closegraph();
	return 0;
}