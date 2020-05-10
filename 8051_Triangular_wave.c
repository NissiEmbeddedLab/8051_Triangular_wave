#include<reg51.h>
void main(void)
{
	unsigned int z,x;
	while(1)
	{
	for(z=0;z<=255;z++)
	{
	P0 = z;
	for(x=0;x<4000;x++);
}
	for(z=255;z >0;z--)
	{
	P0 = z;
	for(x=0;x<4000;x++);
}
	}
}