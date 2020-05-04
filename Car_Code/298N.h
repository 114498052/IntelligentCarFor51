#ifndef __298N_H_
#define __298N_H_
#include "60s2.h"

#define uint unsigned int
#define uchar unsigned char

extern uchar now_status;

//��һ��298�Ķ���
sbit A_IN1 = P2^0;
sbit A_IN2 = P2^1;
sbit A_IN3 = P2^2;
sbit A_IN4 = P2^3;

//�ڶ���298�Ķ���
sbit B_IN1 = P2^4;
sbit B_IN2 = P2^5;
sbit B_IN3 = P2^6;
sbit B_IN4 = P2^7;

extern void init_298N();//��ʼ����ֹͣ
extern void turn_forward();//ǰ��
extern void turn_backdown();//����
extern void turn_rigth();//��ת
extern void turn_left();//��ת

#endif