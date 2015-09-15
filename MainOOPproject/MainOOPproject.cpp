#include "stdafx.h"
#include "classes.h"
#include "OtherHeadersFromProjects.h"
#include <iostream>

#pragma comment(lib, "..//Debug//OOP3R.lib")


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	
	//1-2 Lab start
	{
		arrOfQuadrangles* newArr = new arrOfQuadrangles(
			3,
			quadrilateral(quadrilateral::RECTANGLE, 2, 5),
			quadrilateral(quadrilateral::FOURSQUARE, 3, 3),
			quadrilateral(quadrilateral::RHOMBUS, 3, 5)
			);

		arrOfQuadrangles* copyArr = new arrOfQuadrangles(*newArr);

		copyArr->mainQuadrangleVar[0].setFirstSize(19);

		newArr->showMaxVal();

		delete newArr;
	};
	//1-2 Lab end

	std::cout << "---end of 1-2 lab---" << std::endl << std::endl << "---start of 3 lab---" << std::endl << std::endl;

	//3 Lab start
	{
		Cartoon* cartoon = new Cartoon("Wolf", "20.05.2013");
		std::cout << " " << cartoon->getDate() << "   " << cartoon->getName() << std::endl;
		cartoon->setDate("24.07.2014");
		cartoon->setName("Home");
		std::cout << " " << cartoon->getDate() << "   " << cartoon->getName() << std::endl << "---end of Cartoon---" << std::endl;
		delete cartoon;

		//

		Advertising* advertising = new Advertising("Awesome knight! Only 9.99$");
		std::cout << ' ' << advertising->getLine() << std::endl;;
		advertising->setLine("Awesome knight! Now 5.99$");
		std::cout << ' ' << advertising->getLine() << std::endl << "---end of Advertising---" << std::endl;

		//

		News* news = new News("Day of Minsk City was held yesterday");
		std::cout << " " << news->getNews() << std::endl;
		news->setNews("Now too cold");
		std::cout << ' ' << news->getNews() << std::endl << "---end of News---" << std::endl;

		//

		FeatureFilm* fFilm = new FeatureFilm("Hobbit");
		std::cout << ' ' << fFilm->getName() << std::endl << "---end of FeatureFilm---" << std::endl;

		//

		Producer* producer = new Producer("Somebody");
		std::cout << ' ' << producer->getName() << std::endl << "---end of Producer---" << std::endl;
	};

	std::cout << std::endl << "---end of 3 lab---" << std::endl;

	return 0;
};