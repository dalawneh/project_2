#include<unistd.h>
void alphabet(){
    char c ='z'
while(c>='a'){
write(1, &c, 1);
c--;
}



}