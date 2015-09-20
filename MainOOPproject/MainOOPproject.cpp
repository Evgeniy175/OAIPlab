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

	std::cout << "---end of 1-2 lab---" << std::endl << std::endl << std::endl << std::endl << "---start of 3 lab---" << std::endl << std::endl;

	//3 Lab start
	{
		/*
		
		Cartoon* cartoon = new Cartoon("CARTOON! Spanch Bob", "09:30");
		std::cout << ' ' << cartoon->getTime() << "   " << cartoon->getName() << std::endl;
		cartoon->setTime("10:00");
		cartoon->setName("CARTOON! Goofy");
		std::cout << ' ' << cartoon->getTime() << "   " << cartoon->getName() << std::endl << "---end of Cartoon---" << std::endl << std::endl;

		//

		Advertising* advertising = new Advertising("ADVERTISING! Awesome knight! Only 9.99$", "10:50   10 min left!");
		std::cout << ' ' << advertising->getTime() << "   " << advertising->getLine() << std::endl;
		advertising->setLine("ADVERTISING! Awesome knight! Now  7.49$", "10:55   5 min left! ");
		std::cout << ' ' << advertising->getTime() << "   " << advertising->getLine() << std::endl << "---end of Advertising---" << std::endl << std::endl;

		//

		News* news = new News("NEWS!", "11:00");
		std::cout << ' ' << news->getTime() << "   " << news->getNews() << std::endl << "---end of News---" << std::endl << std::endl;

		//

		FeatureFilm* fFilm = new FeatureFilm("FEATURE FILM: Hobbit", "11:30");
		Producer* producer = new Producer("Producer: Peter Jackson", "2012");
		std::cout << ' ' << fFilm->getTime() << "   " << fFilm->getName() << "   " << producer->getName() << ", " << producer->getDate() << std::endl << "---end of FeatureFilm & Producer---" << std::endl << std::endl;

		//

		news->setNews("NEWS! ", "13:30");
		std::cout << ' ' << news->getTime() << "   " << news->getNews() << std::endl << "---end of News---" << std::endl << std::endl;

		//

		Film* film = new Film("FILM: Titanic", "14:00");
		producer->setProducer("Producer: James Cameron", "1997");
		std::cout << ' ' << film->getTime() << "   " << film->getName() << "   " << producer->getName() << ", " << producer->getDate() << std::endl << "---end of Film & Producer---" << std::endl << std::endl;

		//

		*/

		Cartoon* firstCartoon = new Cartoon("CARTOON! Spanch Bob", "09:30", NULL);
		Cartoon* secondCartoon = new Cartoon("CARTOON! Goofy", "10:00", NULL);
		
		Advertising* firstAdvertising = new Advertising("ADVERTISING! Awesome knight! Only 9.99$", "10:50   10 min left!", NULL);
		Advertising* secondAdvertising = new Advertising("ADVERTISING! Awesome knight! Now  7.49$", "10:55   5 min left! ", NULL);

		News* firstNews = new News("NEWS!", "11:00", NULL);

		
		Producer* producer = new Producer("Producer: Peter Jackson", "2012", NULL);
		FeatureFilm* fFilm = new FeatureFilm("FEATURE FILM: Hobbit", "11:30", producer->getName());

		News* secondNews = new News("NEWS!", "13:30", NULL);

		producer->setProducer("Producer: James Cameron", "1997", NULL);
		Film* film = new Film("FILM: Titanic", "14:00", producer->getName());

		TV* tv = new TV(8, *firstCartoon, *secondCartoon, *firstAdvertising, *secondAdvertising, *firstNews, *fFilm, *secondNews, *film);
		tv->showTVprogram();
	};

	std::cout << std::endl << "---end of 3 lab---" << std::endl;

	system("pause");
	return 0;
};