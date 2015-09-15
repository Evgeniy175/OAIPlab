class Cartoon
{
private:
	char* date;
	char* cartoonName;

public:
	Cartoon();
	Cartoon(char* name_, char* date_);

	char* getDate();
	char* getName();
	void setDate(char* date_);
	void setName(char* name_);

	~Cartoon();
};