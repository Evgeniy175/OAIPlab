#include "stdafx.h"
#include "Classes.h"
#include "OtherHeadersFromProjects.h"

void Show1LabRyabchenko()
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

void Show1LabPlehanow()
{
	Circle circle0;
	Circle circle1(1, 6, 6);
	Circle circle2(2, -7, 1);
	Circle circle3(3, 3, 6);
	Circle circle4(4, 9, 3);
	Circle circle5(5, 5, 6);
	Circle circle6(8, 1, 4);
	Circle circle7(9, 8, 4);
	Circle circle8(5, 5, 4);


	Circle* circle9 = new Circle(circle8);
	circle9->setX(10);

	CircleMas* mas1 = new CircleMas;
	CircleMas* mas2 = new CircleMas(3, circle1, circle2, circle3);

	mas1->circleMasAddCircle(circle1);
	mas1->circleMasAddCircle(circle2);
	mas1->circleMasAddCircle(circle3);
	mas1->circleMasAddCircle(circle4);
	mas1->circleMasAddCircle(circle5);
	mas1->circleMasAddCircle(circle6);
	mas1->circleMasAddCircle(circle7);
	mas1->circleMasAddCircle(circle8);
};

void Show2LabRyabchenko()
{
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