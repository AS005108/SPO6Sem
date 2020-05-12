#include <stdio.h>
#include <string>
#include <iostream>

extern int exist_file(char*);

int main(int argc, char *argv[]){
char* path = argv[1];
int count = exist_file(path);
if(count==1)
	std::cout<<"no file"<<std::endl;
else
	std::cout<<"yes file"<<std::endl;
return 0;
}
