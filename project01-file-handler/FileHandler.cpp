#include"FileHandler.h"

#include<iostream>
FileHandler::FileHandler(const std::string& filename):filename_(filename){
	std::cout<<this->filename_<<" File opened\n";
}

void FileHandler::write(const std::string& content){
	this->content_ += content; 
}

FileHandler::~FileHandler(){
	std::cout<<this->filename_<<" File closeed\n";
}

