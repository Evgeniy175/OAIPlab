class Advertising
{
private:
	char* line;

public:
	Advertising();
	Advertising(char* line_);

	char* getLine();
	void setLine(char* line_);

	~Advertising();
};