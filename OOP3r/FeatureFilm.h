class FeatureFilm
{
private:
	char* filmName;

public:
	FeatureFilm();
	FeatureFilm(char* name_);

	void setName(char* name_);
	char* getName();
};