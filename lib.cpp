#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdio.h>
#include <unistd.h>

int exist_file(char* path){
FILE *a;
a=fopen(path,"r");
if(a==NULL)
	return 1;
else{
	return 0;
	fclose(a);
	}
}
