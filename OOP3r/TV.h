class TV
{
private:
	char* time;
	char* tvProgramName;

private:
	TV();
	TV(char* time_, char* tvProgramName_);

	void setNewTV(char* time_, char* tvProgramName_);
	char* getTime(char* time_);
	char* getProgram();
};