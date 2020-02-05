#include <stdio.h>

int main(){
	int vetInt[10];
	char vetChar[10];
	int i;

	for(i=0;i<10;i++) vetInt[i]=i+1;

	for(i=0;i<10;i++) vetChar[i]=65+i;

	for(i=0;i<10;i++) printf("%d%c",vetInt[i],vetChar[i]);

}

//1a2
