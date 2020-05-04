#ifndef __Timer_H_
#define __Timer_H_
#include "60s2.h"

#define uchar unsigned char
#define uint unsigned int
	
extern uchar time_TH0;	
extern uchar time_TL0;

extern uchar time_TH1;	
extern uchar time_TL1;

extern void Timer0_init();//��ʱ��0�ĳ�ʼ��
extern void Timer1_init();//��ʱ��1�ĳ�ʼ��
extern void Set_time0(uint t);//��ʱ��0�趨��ʱֵ
extern void Set_time1(uint t);//��ʱ��1�趨��ʱֵ

#endif
