#include <iostream>
#include"FileHandler.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include<string>
int main(int argc, char** argv) {
	
	{
		FileHandler file1("Helloworld");
		#FileHandler* file1 = new FileHandler("Helloworld") 
		#new会在堆上创建，使RAⅡ失效 
		file1.write("beauty");
	}
	return 0;
}
