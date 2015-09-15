class Producer
{
private:
	char* personName;

public:
	Producer();
	Producer(char* name_);

	void setName(char* name_);
	char* getName();
};