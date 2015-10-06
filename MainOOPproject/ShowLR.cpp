#include "stdafx.h"
#include "ShowLR.h"

void show1and2LabRyabchenko()
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



void show1and2LabPlehanow()
{
	Circle circle1(1, 6, 6);
	Circle circle2(2, -7, 1);
	Circle circle3(3, 3, 6);

	CircleMas* mas1 = new CircleMas(3, circle1, circle2, circle3);
	
	mas1->~CircleMas();
};



void show3and4LabRyabchenko()
{
	tv* tvVar = new tv("TV Program", new date(05, 10, 2015, NULL));

	cartoon* firstCartoon = new cartoon("CARTOON!", "Spanch Bob", new date(NULL, NULL, NULL, new programTime(9, 30)));
	cartoon* secondCartoon = new cartoon("CARTOON!", "Goofy", new date(NULL, NULL, NULL, new programTime(10, NULL)));

	advertising* firstAdvertising = new advertising("ADVERTISING! Awesome knight! Only 9.99$", "10 min left!",
		new date(NULL, NULL, NULL, new programTime(10, 50)));
	advertising* secondAdvertising = new advertising("ADVERTISING! Awesome knight! Now  7.49$", "5 min left!",
		new date(NULL, NULL, NULL, new programTime(10, 55)));

	news* firstNews = new news("NEWS!", "Economics", new date(NULL, NULL, NULL, new programTime(11, NULL)));

	producer* producerVar = new producer("Producer: Peter Jackson", "2012", NULL);
	featureFilm* fFilm = new featureFilm("FEATURE FILM: Hobbit", producerVar->getName(),
		new date(NULL, NULL, NULL, new programTime(11, 30)));

	news* secondNews = new news("NEWS!", "Hi-jacked plane1", new date(NULL, NULL, NULL, new programTime(13, 30)));

	producerVar->setName("Producer: James Cameron");
	producerVar->setDate(new date(NULL, NULL, NULL, new programTime(NULL, NULL)));
	film* filmVar = new film("FILM: Titanic", producerVar->getName(), new date(NULL, NULL, 1997, new programTime(14, NULL)));
	
	tvVar->addElements(8, firstCartoon, secondCartoon, firstAdvertising, secondAdvertising, firstNews, fFilm, secondNews, filmVar);	

	news* thirdNews = new news("NEWS!", "Politics", new date(NULL, NULL, NULL, new programTime(15, 30)));
	tvVar->addElement(thirdNews);

	producerVar->setName("Producer: Chris Columbus");
	producerVar->setDate(new date(NULL, NULL, NULL, new programTime(NULL, NULL)));
	film* filmVar2 = new film("FILM: Home Alone", producerVar->getName(), new date(NULL, NULL, 1990, new programTime(16, NULL)));
	tvVar->addElement(filmVar2);

	producerVar->setName("Producer: Jonathan Demme");
	producerVar->setDate(new date(NULL, NULL, NULL, new programTime(NULL, NULL)));
	film* filmVar3 = new film("FILM: The Silence of the Lambs", producerVar->getName(), new date(NULL, NULL, 1990, new programTime(18, NULL)));
	tvVar->addElement(filmVar3);

	tvVar->show();																					// вывести весь список
	std::cout << std::endl << "Number of advertising: " << tvVar->showNumberOfAdv() << std::endl;	// вывести количество advertising
	tvVar->searchFilmInYear(1990);																	// вывести фильмы 1990 года
	tvVar->programDuration();																		// продолжительность программы
};



void show6LabRyabchenko()
{
	set* firstSet = new set(8, 2, 4, 6, 8, 10, 12, 14, 16);
	set* secondSet = new set(4, 1, 2, 3, 4);
	set* thirdSet = new set(3, 2, 10, 16);

	if (*firstSet > 6)																				// проверка, содержится ли элемент 6 в множестве firstSet
	{
		std::cout << "Included" << std::endl;
	};

	set* firstTempSet = (*firstSet)*(*secondSet);													// пересечение множеств
	
	if ((*firstSet) < (*thirdSet))																	// проверка, является ли thirdSet подмножеством firstSet
	{
		std::cout << "thirdSet is a subset of a firstSet" << std::endl;
	}
	else
	{
		std::cout << "thirdSet is NOT a subset of a firstSet" << std::endl;
	};
};