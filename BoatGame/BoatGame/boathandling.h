#include "iGraphics.h"
bool gotoRight = false;
bool gotoLeft = false;
bool gotoFront = false;
bool gotoBack = false;
int boatPositionX = 520;
int boatPositionY = 50;
int boatSpeed = 40;
char boat[100][100] = { "images\\boat.bmp", "images\\boatL.bmp", "images\\boatR.bmp" };
int boatWidth = 250;
int boatHight = 110;
int width = 1280;
int hight = 720;

void boatHandleing()
{


	if (gotoRight)
	{
		boatPositionX += boatSpeed;
		iShowBMP2(boatPositionX, boatPositionY, boat[2], 0);
		gotoRight = false;
	}

	else if (gotoLeft)
	{
		boatPositionX -= boatSpeed;
		iShowBMP2(boatPositionX, boatPositionY, boat[1], 0);
		gotoLeft = false;
	}
	else iShowBMP2(boatPositionX, boatPositionY, boat[0], 0);

	/*if (gotoFront)
	{
	boatPositionY += boatSpeed;
	gotoFront = false;
	}

	if (gotoBack)
	{
	boatPositionY -= boatSpeed;
	//gotoBack=false;
	}
	*/
	if (boatPositionX <= 0)
	{

		boatPositionX = 2;
		gotoLeft = false;

		gotoRight = false;
	}


	if (boatPositionX + boatWidth >= width){

		boatPositionX = width - boatWidth;
		gotoLeft = false;
		gotoRight = false;

	}


	/*if (boatPositionY <= 0)
	{
	boatPositionY = 0;
	gotoBack = false;
	}
	if (boatPositionY + boatHight + 350 >= hight){
	boatPositionY = hight - boatHight - 350;
	gotoFront = false;
	}*/
	//iShowBMP2(boatPositionX, boatPositionY, car[0], 0);
}