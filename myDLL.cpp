#include "pch.h" 
#include <iostream>
#include <string.h>
#include "myDLL.h"

std::string fun(std::string str, int n1){
  std::string str1=str, str2;
  int n=n1;
  for(int i=0;i<n;i++)
    str2+=str1;
  return str2;
}