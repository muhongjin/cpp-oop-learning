#ifndef FILEHANDLER_H_
#define FILEHANDLER_H_
#include<string>
class FileHandler{
	private:
	std::string filename_;
	std::string content_;
	public:
	FileHandler(const std::string& filename);
	void write(const std::string& content);
	~FileHandler();
};
#endif  //FILEHANDLER_H_
