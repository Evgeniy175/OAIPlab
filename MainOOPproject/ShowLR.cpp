#include "stdafx.h"
#include "ShowLR.h"
#include "..\4. OOP6R\exception.h"

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
	controller* ctr = new controller;
	tv* tvVar = new tv("TV Program", new date(05, 10, 2015, NULL));

	cartoon* firstCartoon = new cartoon("CARTOON!", "Spanch Bob",
				new date(NULL, NULL, NULL, new programTime(9, 30)));

	cartoon* secondCartoon = new cartoon("CARTOON!", "Goofy",
				new date(NULL, NULL, NULL, new programTime(10, NULL)));

	advertising* firstAdvertising = new advertising(
		"ADVERTISING! Awesome knight! Only 9.99$", "10 min left!",
		new date(NULL, NULL, NULL, new programTime(10, 50)));

	advertising* secondAdvertising = new advertising(
		"ADVERTISING! Awesome knight! Now  7.49$", "5 min left!",
		new date(NULL, NULL, NULL, new programTime(10, 55)));

	news* firstNews = new news(
		"NEWS!", "Economics", new date(NULL,
		NULL, NULL, new programTime(11, NULL)));

	producer* producerVar = new producer(
		"Producer: Peter Jackson", "2012", NULL);

	featureFilm* fFilm = new featureFilm("FEATURE FILM: Hobbit",
		producerVar->getName(),
		new date(NULL, NULL, NULL, new programTime(11, 30)));

	news* secondNews = new news(
		"NEWS!", "Hi-jacked plane!",
		new date(NULL, NULL, NULL, new programTime(13, 30)));

	producerVar->setName("Producer: James Cameron");

	producerVar->setDate(
		new date(NULL, NULL, NULL, new programTime(NULL, NULL)));

	film* filmVar = new film(
		"FILM: Titanic", producerVar->getName(),
		new date(NULL, NULL, 1997, new programTime(14, NULL)));
	
	tvVar->addElements(
		8, firstCartoon, secondCartoon, firstAdvertising,
		secondAdvertising, firstNews, fFilm, secondNews, filmVar);

	news* thirdNews = new news(
		"NEWS!", "Politics",
		new date(NULL, NULL, NULL, new programTime(15, 30)));

	tvVar->addElement(thirdNews);

	producerVar->setName("Producer: Chris Columbus");

	producerVar->setDate(
		new date(NULL, NULL, NULL, new programTime(NULL, NULL)));

	film* filmVar2 = new film(
		"FILM: Home Alone", producerVar->getName(),
		new date(NULL, NULL, 1990, new programTime(16, NULL)));

	tvVar->addElement(filmVar2);

	producerVar->setName("Producer: Jonathan Demme");

	producerVar->setDate(
		new date(NULL, NULL, NULL, new programTime(NULL, NULL)));

	film* filmVar3 = new film(
		"FILM: The Silence of the Lambs", producerVar->getName(),
		new date(NULL, NULL, 1990, new programTime(18, NULL)));

	tvVar->addElement(filmVar3);

	ctr->showList(tvVar->getList());			// вывести весь список

	/* вывести количество advertising*/
	std::cout << std::endl << "Number of advertising: " 
		<< ctr->numberOfAdv(tvVar->getList()) << std::endl;	

	std::list<base*> comboTemp = ctr->searchFilmInYear(tvVar->getList(), 1990);
	ctr->showList(comboTemp);				// вывести фильмы 1990 года
	ctr->getDuration(tvVar->getList());		// продолжительность программы
};



void show6LabRyabchenko()
{
	set<int>* intTempSet;
	set<double>* doubleTempSet;
	quadTemplate<element<int>>* intClass;
	quadTemplate<element<double>>* doubleClass;
	
	try{
		set<int>* intSet1 = new set<int>(8, 2, 4, 6, 8, 10, 12, 14, 16);
		set<int>* intSet2 = new set<int>(4, 1, 2, 3, 4);
		set<int>* intSet3 = new set<int>(3, 2, 10, 16);
		set<double>* doubleSet1 = new set<double>(8, 2.15, 4.7, 6.356, 8.356,
			10.56, 12.4, 14.3, 16.2);
		set<double>* doubleSet2 = new set<double>(4, 16.2, 8.21, 8.356, 10.56);
		set<double>* doubleSet3 = new set<double>(3, 6.356, 10, 14.3);

		///////////////////////////////////////////////////////////////////////

		std::cout << "int:" << std::endl;

		if (*intSet1 > (*intSet3)[2])	// (*intSet3)[2] принадлежит intSet1?
			std::cout << (*intSet1)[2] << " included in firstSet" << std::endl;

		intTempSet = (*intSet1)*(*intSet2);				// пересечение множеств

		if ((*intSet1) < (*intSet3))	// intSet3 подмножество intSet1?
			std::cout << "thirdSet is a subset of a firstSet" << std::endl;

		else
			std::cout << "thirdSet is NOT a subset of a firstSet" << std::endl;

		std::cout << "min: " << intSet1->getMin() << std::endl << std::endl;

		///////////////////////////////////////////////////////////////////////

		std::cout << "double:" << std::endl;

		/*(*doubleSet2)[0] принадлежит doubleSet1?*/
		if (*doubleSet1 > (*doubleSet2)[0])	 
			std::cout << (*doubleSet2)[0] << " included in firstSet" << std::endl;

		doubleTempSet = (*doubleSet1)*(*doubleSet2);	// пересечение множеств

		if ((*doubleSet1) < (*doubleSet3))	// doubleSet3 подмн. doubleSet1?
			std::cout << "thirdSet is a subset of a firstSet" << std::endl;

		else 
			std::cout << "thirdSet is NOT a subset of a firstSet" << std::endl;

		std::cout << "min: " << doubleSet1->getMin() << std::endl << std::endl;
		
		///////////////////////////////////////////////////////////////////////
		// class as parameter

		intClass = new quadTemplate<element<int>>(
			3,
			element<int>(quadrilateral::RECTANGLE, 2, 5),
			element<int>(quadrilateral::FOURSQUARE, 3, 3),
			element<int>(quadrilateral::RHOMBUS, 3, 5)
			);

		std::cout << "!!!min firstSize: " << intClass->getMinFirstSize()->getFirstSize()
			<< std::endl << std::endl;

		intClass->showMaxVal();
		
		///////////////////////////////////////////////////////////////////////
		
		doubleClass = new quadTemplate<element<double>>(
			3,
			element<double>(quadrilateral::RECTANGLE, -5, 5.456),
			element<double>(quadrilateral::FOURSQUARE, 3.789, 3.789),
			element<double>(quadrilateral::RHOMBUS, 3456.879, 5.321)
			);

		std::cout << "!!!min firstSize: " << doubleClass->getMinFirstSize()->getFirstSize()
			<< std::endl << std::endl;

		doubleClass->showMaxVal();

		///////////////////////////////////////////////////////////////////////

		delete intSet1;
		delete intSet2;
		delete intSet3;
		delete doubleSet1;
		delete doubleSet2;
		delete doubleSet3;
	}
	catch (ERROR::Error error){
		std::cerr << error.getMsg();
	};
};

void show10LabRyabchenko(){
	{
		std::cout << std::endl << "---Map start---" << std::endl;

		MC::Map firstMap(5, 100, 2000, 300, 4000, 500);
		MC::Map secondMap(3, 9000, 10000, 11000);

		firstMap.show();
		firstMap.erase(4000);
		firstMap.showViaIt();
		firstMap.change(100, 103050);
		firstMap.showViaIt();
		firstMap.eraseFrom(300, 1);
		firstMap.show();
		firstMap.add(secondMap);

		std::cout << std::endl << "first map: ";
		firstMap.showViaIt();
		std::cout << "second map: ";
		secondMap.showViaIt();

		std::cout << "---Map end---" << std::endl << std::endl;
	}

	//////////////////////////////////////////////////////////////////////////

	{
		set<long> temp1First(4, 123, 456, 789, 369);
		set<long> temp2First(4, 321, 654, 987, 963);

		std::cout << std::endl << "---Map start---" << std::endl;

		MC_USER::Map firstMap;

		firstMap >> std::pair<long, set<long>*>(123, &temp1First);
		firstMap >> std::pair<long, set<long>*>(321, &temp2First);

		firstMap << 123;
		firstMap << 321;

		firstMap.eraseFrom(123, 1);

		std::cout << "---Map end---" << std::endl << std::endl;
	}

	//////////////////////////////////////////////////////////////////////////

	{
		int condCount = 0; // counter for good condition
		std::vector<THIRD::UserClass> vectorTemp;
		std::list<THIRD::UserClass> listTemp;
		char conditionLimiter = 'x';

		THIRD::Third thirdVar(3, THIRD::UserClass('z'), THIRD::UserClass('a'), THIRD::UserClass('q'));
		thirdVar.copyElements(vectorTemp, conditionLimiter);

		std::cout << "1. map: ";
		for_each (thirdVar.getBegin(), thirdVar.getEnd(),
			[](std::pair<long, THIRD::UserClass> i){
				std::cout << i.second.getChar() << ' ';
			}
		);

		std::cout << std::endl << "2. vector: ";
		for_each(vectorTemp.begin(), vectorTemp.end(),
			[](THIRD::UserClass i){
				std::cout << i.getChar() << ' '; 
			}
		);
		
		// выводим map
		std::cout << std::endl;
		for_each(thirdVar.getBegin(), thirdVar.getEnd(),
			[&listTemp](std::pair<long, THIRD::UserClass> i){
				listTemp.push_back(i.second);
			}
		);

		// формируем list
		for_each(vectorTemp.begin(), vectorTemp.end(),
			[&listTemp](THIRD::UserClass i){
				listTemp.push_back(i);
			}
		);

		// считаем количество удовлетворяющих условию в list и выводим его
		// содержимое
		std::cout << "3. list: ";
		for_each(listTemp.begin(), listTemp.end(),
			[&condCount, conditionLimiter](THIRD::UserClass i){
				if (i.getChar() < conditionLimiter){
					condCount++;
				};
				std::cout << i.getChar() << ' ';
			}
		);

		std::cout << std::endl << "Удовлетворяют условию CHAR<"
			<< conditionLimiter << " (в третьем контейнере): " << condCount
			<< std::endl;
	}
};