#include<unistd.h>
void digits(){

char n = '0';
while(n>=0){
write (1, &n, 1);
n++;
}


}