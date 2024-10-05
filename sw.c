#include<reg51.h>
sbit sw=P1^0;
void main()
{
while(1)
{
if(sw==0)
{
P2=0xFF;
}
else
{
P2=0x00;
}
}
}