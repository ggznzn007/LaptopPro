#include <iostream>
#include <windows.h>

using namespace std;

//#define col GetStdHandle(STD_OUTPUT_HANDLE)
//#define BLACK SetConSoleTextAttribute(col, 0x0000)
//#define DARK_BLUE SetConSoleTextAttribute(col, 0x0001)//Ã»»ö
//#define GREEN SetConSoleTextAttribute(col, 0x0002)//³ì»ö
//#define BLUE_GREEN SetConSoleTextAttribute(col, 0x0003)//Ã»³ì»ö
//#define BLOOD SetConSoleTextAttribute(col, 0x0004)//ÇÇ»ö
//#define WINE SetConSoleTextAttribute(col, 0x0005)//¿ÍÀÎ»ö
//#define GOLD SetConSoleTextAttribute(col, 0x0006)//±Ý»ö
//#define ORIGINAL SetConSoleTextAttribute(col, 0x0007)//¹àÀº È¸»ö
//#define GRAY SetConSoleTextAttribute(col, 0x0008)//È¸»ö
//#define BLUE SetConSoleTextAttribute(col, 0x0009)//ÆÄ¶õ»ö
//#define HIGH_GREEN SetConSoleTextAttribute(col, 0x000a)//¹àÀº³ì»ö
//#define SKY_BLUE SetConSoleTextAttribute(col, 0x000b)//ÇÏ´Ã»ö
//#define RED SetConSoleTextAttribute(col, 0x000c)//»¡°£»ö
//#define PLUM SetConSoleTextAttribute(col, 0x000d)//ÀÚÁÖ»ö
//#define YELLOW SetConSoleTextAttribute(col, 0x000e)//³ë¶õ»ö
//#define WHITE SetConSoleTextAttribute(col, 0x000f)//ÇÏ¾á»ö

void setcolor(unsigned short text, unsigned short back)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}

void main()
{
	/*cout << "Nomal Color";
	system("color f1");
	*/
	setcolor(0x0001,0);//Ã»»ö
	setcolor(0x0002,0);//³ì»ö
	setcolor(0x0003,0);//Ã»³ì»ö
	setcolor(0x0004,0);//ºí·¯µå
	setcolor(0x0005,0);//¿ÍÀÎ
	setcolor(0x0006,0);//°ñµå
	setcolor(0x0007,0);//¹àÀº±×·¹ÀÌ
	setcolor(0x0008,0);//±×·¹ÀÌ
	setcolor(0x0009,0);//ÆÄ¶õ»ö
	setcolor(0x000a,0);//¹àÀº³ì»ö
	setcolor(0x000b,0);//ÇÏ´Ã»ö
	setcolor(0x000c,0);//»¡°£»ö
	setcolor(0x000d,0);//ÀÚÁÖ»ö
	setcolor(0x000e,0);//³ë¶û»ö
	setcolor(0x000f,0);//ÇÏ¾á»ö

}




