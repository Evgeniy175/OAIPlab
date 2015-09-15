class News
{
private:
	char* line;

public:
	News();
	News(char* line_);

	void setNews(char* line_);
	char* getNews();
};