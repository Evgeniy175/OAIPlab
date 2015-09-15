#include "stdafx.h"
#include "OOP3r.h"

int _tmain(int argc, _TCHAR* argv[])
{

	Cartoon* cartoon = new Cartoon("Wolf", "20.05.2013");
	std::cout << cartoon->getDate() << "   " << cartoon->getName() << std::endl;
	cartoon->setDate("24.07.2014");
	cartoon->setName("Home");
	std::cout << cartoon->getDate() << "   " << cartoon->getName() << std::endl << "---end of Cartoon---" << std::endl;
	delete cartoon;

	//

	Advertising* advertising = new Advertising("Awesome knight! Only 9.99$");
	std::cout << advertising->getLine() << std::endl;
	advertising->setLine("Awesome knight! Now 5.99$");
	std::cout << advertising->getLine() << std::endl << "---end of Advertising---" << std::endl;

	//

	News* news = new News("Day of Minsk City was held yesterday");
	std::cout << news->getNews() << std::endl;
	news->setNews("Now too cold");
	std::cout << news->getNews() << std::endl << "---end of News---" << std::endl;

	//
	return 0;
};