#include "Timer.h"

uchar time_TH0 = 0xFB;
uchar time_TL0 = 0xAE;
uchar time_TH1 = 0xFB;
uchar time_TL1 = 0xAE;

//��ʱ��0�ĳ�ʼ��
void Timer0_init()
{
	time_TL0 = 0xAE;		//���ö�ʱ��ֵ
	time_TH0 = 0xFB;		//���ö�ʱ��ֵ 100us

	AUXR |= 0x80;		
	TMOD &= 0xF0;	
	TMOD |= 0x01;	
	TF0 = 0;	
	TH0 = time_TH0;
	TL0 = time_TL0; 
	EA = 1;
	ET0 = 1;
	TR0 = 1;
}

//��ʱ��1�ĳ�ʼ��
void Timer1_init()
{	
	time_TH1 = 0xFB;	
	time_TL1 = 0xAE;
	AUXR |= 0x40;		
	TMOD &= 0xF0;	
	TMOD |= 0x10;	
	TF1 = 0;	
	TH1 = time_TH1;
	TL1 = time_TL1; 
	EA = 1;
	ET1 = 1;
	TR1 = 1;
}

//��ʱ��0�趨��ʱֵ
void Set_time0(uint t)
{
	time_TH0 = (65535-t)/256;
	time_TL0 = (65535-t)%256;
}

//��ʱ��1�趨��ʱֵ
void Set_time1(uint t)
{
	time_TH1 = (65535-t)/256;
	time_TL1 = (65535-t)%256;
}