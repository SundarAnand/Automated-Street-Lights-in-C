#include<reg51.h>

sbit switch1=p0^0;
sbit s1=p1^0;
sbit s2=p1^1;
sbit s3=p1^2;
sbit s4=p1^3;
sbit s5=p1^4;
sbit s6=p1^5;
sbit s7=p1^6;
sbit s8=p1^7;


sbit out1=p2^0;
sbit out2=p2^1;
sbit out3=p2^2;
sbit out4=p2^3;
sbit out5=p2^4;
sbit out6=p2^5;
sbit out7=p2^6;
sbit out8=p2^7;

sbit out9=p3^0;
sbit out10=p3^1;
sbit out11=p3^2;
sbit out12=p3^3;
sbit out13=p3^4;
sbit out14=p3^5;

void delay_1ms();
void delay_100ms()
unsigned char i;

void main()
{
	
	P1=0XFF;
	P2=0X00;
	P3=0X00;
	
	while(1)
	{
		while(switch1==1)
		{
			if(S1==1)
			{
				P2=0X7F;
				P3=0X00;
			}
			if(S2==1)
			{
				P2=0XFC;
				P3=0X00;
			}
			if(S3==1)
			{
				P2=0XFD;
				P3=0X01;
			}
			if(S4==1)
			{
				P2=0XF8;
				P3=0X03;
			}
			if(S5==1)
			{
				P2=0XF5;
				P3=0X07;
			}
			if(S6==1)
			{
				P2=0XE3;
				P3=0X0F;
			}
			if(S7==1)
			{
				P2=0XC0;
				P3=0X1F;
			}
			if(S8==1)
			{
				P2=0X80;
				P3=0X3F;
			}
			if(S1==0&&S2==0&&S3==0&&S4==0&&S5==0&&S6==0&&S7==0&&S8==0)
			{
				P2=0X00;
				P3=0X00;
			}
		}
		while(switch1==0)
		{
			if(S1==1)
			{
				P2=0XFF;
				P3=0XFF;
				delay_1ms();
				P2=0X7F;
				P3=0X00;
				delay_100ms;
			}
			if(S2==1)
			{
				P2=0XFF;
				P3=0XFF;
				delay_1ms();
				P2=0XF4;
				P3=0X00;
				delay_100ms;
			}
			if(S3==1)
			{
				P2=0XFF;
				P3=0XFF;
				delay_1ms();
				P2=0XF8;
				P3=0X01;
				delay_100ms;
			}
			if(S4==1)
			{
				P2=0XFF;
				P3=0XFF;
				delay_1ms();
				P2=0XFA;
				P3=0X03;
				delay_100ms;
			}
			if(S5==1)
			{
				P2=0XFF;
				P3=0XFF;
				delay_1ms();
				P2=0XF9;
				P3=0X07;
				delay_100ms;
			}
			if(S6==1)
			{
				P2=0XFF;
				P3=0XFF;
				delay_1ms();
				P2=0XE0;
				P3=0X0F;
				delay_100ms;
			}
			if(S7==1)
			{
				P2=0XFF;
				P3=0XFF;
				delay_1ms();
				P2=0XCE;
				P3=0X1F;
				delay_100ms;
			}
			if(S8==1)
			{
				P2=0XFF;
				P3=0XFF;
				delay_1ms();
				P2=0X80;
				P3=0X3F;
				delay_100ms;
			}
			if(S1==0&&S2==0&&S3==0&&S4==0&&S5==0&&S6==0&&S7==0&&S8==0)
			{
				P2=0XFF;
				P3=0XFF;
				delay_1ms();
				P2=0X00;
				P3=0X00;
				delay_100ms;
			}
		}
	}
}

void delay_1ms()
{
TMOD=0X02;
TL0=0XFB;
TH0=0X4D;
TF0=0;
TR0=1;
while(TF0!=1);
TR0=0;
TF0=0;
}


void delay_100ms()
{
for(i=0;i<2;i++)
{
TMOD=0X02;
TL0=0XFC;
TH0=0XFF;
TF0=0;
TR0=1;
while(TF0!=1);
TR0=0;
TF0=0;
}
}
	
				
			
		
		
	 
