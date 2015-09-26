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
	tv* tvVar = new tv("TV Program at ", "28.09.2015: ");

	cartoon* firstCartoon = new cartoon("CARTOON! Spanch Bob", "09:30");
	cartoon* secondCartoon = new cartoon("CARTOON! Goofy", "10:00");

	advertising* firstAdvertising = new advertising("ADVERTISING! Awesome knight! Only 9.99$", "10:50   10 min left!");
	advertising* secondAdvertising = new advertising("ADVERTISING! Awesome knight! Now  7.49$", "10:55   5 min left!");

	news* firstNews = new news("NEWS!", "11:00");
	
	producer* producerVar = new producer("Producer: Peter Jackson", "2012");
	featureFilm* fFilm = new featureFilm("FEATURE FILM: Hobbit", "11:30", producerVar->getName());

	news* secondNews = new news("NEWS!", "13:30");

	producerVar->setName("Producer: James Cameron");
	producerVar->setTime("1997");
	film* filmVar = new film("FILM: Titanic", "14:00", producerVar->getName());
};