#include"quicksoft.h"
#include<iostream>
int main(int argc, char* argv[]){
	int s = 13;
	QuickSoft qs(s);
	for(int i=0; i<s; i++){
		if(i%10==0){
			std::cout << std::endl;
		}
		std::cout << " " << qs.array[i] << " ";
	}
	qs.test();
	for(int i=0; i<s; i++){
		if(i%10==0){
			std::cout << std::endl;
		}
		std::cout << " " << qs.array[i] << " ";
	}
	return 0;
}
