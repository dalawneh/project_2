#include<unistd.h>
void alphabet(){


char c ='a';
while (c<= 'z')
{
write(1, &c, 1);
c++;


}



}