#ifndef __UART_H_
#define __UART_H_
#include "60s2.h"

#define uint unsigned int
#define uchar unsigned char

extern void UartInit(uint  baud_rate);//���ڳ�ʼ�� baud_rateΪҪ�趨��ֵ
extern void UART_send_char(char *dat); //�����ַ���
extern int UART_check(uchar dat);//��У��

#endif