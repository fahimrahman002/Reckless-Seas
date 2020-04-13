
#include "buttonif.h"
#include "changeWave.h"
#include "boathandling.h"
#include<iostream>
#include<string.h>

char back[200] = "images\\Backb.bmp";

char fuel[1000][1000] = { "fuel\\fuel.bmp", "fuel\\fuel0.bmp", "fuel\\fuel1.bmp", "fuel\\fuel2.bmp", "fuel\\fuel3.bmp", "fuel\\fuel4.bmp", "fuel\\fuel5.bmp" };
//char wave[1000][1000] = { "images\\wave6.bmp", "images\\wave2.bmp", "images\\wave3.bmp", "images\\wave4.bmp" };

char enemyBoat[100][100] = { "ingame\\iceberg1.bmp", "ingame\\wood1.bmp", "ingame\\woodv1.bmp", "ingame\\iceberg1.bmp", "ingame\\wood1.bmp", "ingame\\woodv1.bmp" };

char water[100][100] = { "images\\water.bmp", "images\\water1.bmp", "images\\water2.bmp" };
//char enemyBoat[100][100] = { "ingame\\enemyBoat1.bmp", "ingame\\enemyBoat2.bmp", "ingame\\enemyBoat3.bmp", "ingame\\enemyBoat4.bmp", "ingame\\enemyBoat5.bmp", "ingame\\enemyBoat6.bmp" };
char fire[100][100] = { "ingame\\fire.bmp", "ingame\\fire2.bmp", "ingame\\fire3.bmp" };
char startup[100][100] = { "startup\\3.bmp", "startup\\2.bmp", "startup\\1.bmp", "startup\\start.bmp" };

char wave[1000][1000] = { "wave\\wave0.bmp", "wave\\wave1.bmp", "wave\\wave2.bmp", "wave\\wave3.bmp", "wave\\wave4.bmp", "wave\\wave5.bmp", "wave\\wave6.bmp", "wave\\wave7.bmp", "wave\\wave8.bmp", "wave\\wave9.bmp", "wave\\wave10.bmp" };
char sail[1000][1000] = { "Sail\\sail0.bmp", "Sail\\sail1.bmp", "Sail\\sail2.bmp", "Sail\\sail3.bmp", "Sail\\sail4.bmp", "Sail\\sail5.bmp", "Sail\\sail6.bmp", "Sail\\sail7.bmp", "Sail\\sail8.bmp", "Sail\\sail9.bmp", "Sail\\sail10.bmp" };// "Sail\\sail11.bmp", "Sail\\sail12.bmp", "Sail\\sail13.bmp", "Sail\\sail14.bmp", "Sail\\sail15.bmp", "Sail\\sail16.bmp", "Sail\\sail17.bmp", "Sail\\sail18.bmp", "Sail\\sail19.bmp", "Sail\\sail20.bmp", "Sail\\sail21.bmp", "Sail\\sail22.bmp", "Sail\\sail23.bmp", "Sail\\sail24.bmp", "Sail\\sail25.bmp" };


char iceberg[1000][1000] = { "iceberg\\iceberg54.bmp", "iceberg\\iceberg53.bmp", "iceberg\\iceberg52.bmp", "iceberg\\iceberg51.bmp", "iceberg\\iceberg50.bmp", "iceberg\\iceberg49.bmp", "iceberg\\iceberg48.bmp", "iceberg\\iceberg47.bmp", "iceberg\\iceberg46.bmp", "iceberg\\iceberg45.bmp", "iceberg\\iceberg44.bmp", "iceberg\\iceberg43.bmp", "iceberg\\iceberg42.bmp", "iceberg\\iceberg41.bmp", "iceberg\\iceberg40.bmp", "iceberg\\iceberg39.bmp", "iceberg\\iceberg38.bmp", "iceberg\\iceberg37.bmp", "iceberg\\iceberg36.bmp", "iceberg\\iceberg35.bmp", "iceberg\\iceberg34.bmp", "iceberg\\iceberg33.bmp", "iceberg\\iceberg32.bmp", "iceberg\\iceberg31.bmp", "iceberg\\iceberg30.bmp", "iceberg\\iceberg29.bmp", "iceberg\\iceberg28.bmp", "iceberg\\iceberg27.bmp", "iceberg\\iceberg26.bmp", "iceberg\\iceberg25.bmp", "iceberg\\iceberg24.bmp", "iceberg\\iceberg23.bmp", "iceberg\\iceberg22.bmp", "iceberg\\iceberg21.bmp", "iceberg\\iceberg20.bmp", "iceberg\\iceberg19.bmp", "iceberg\\iceberg18.bmp", "iceberg\\iceberg17.bmp", "iceberg\\iceberg16.bmp", "iceberg\\iceberg15.bmp", "iceberg\\iceberg14.bmp", "iceberg\\iceberg13.bmp", "iceberg\\iceberg12.bmp", "iceberg\\iceberg11.bmp", "iceberg\\iceberg10.bmp", "iceberg\\iceberg9.bmp", "iceberg\\iceberg8.bmp", "iceberg\\iceberg7.bmp", "iceberg\\iceberg6.bmp", "iceberg\\iceberg5.bmp", "iceberg\\iceberg4.bmp", "iceberg\\iceberg3.bmp", "iceberg\\iceberg2.bmp", "iceberg\\iceberg2.bmp", "iceberg\\iceberg2.bmp", "iceberg\\iceberg2.bmp", "iceberg\\iceberg2.bmp", "iceberg\\iceberg2.bmp", "iceberg\\iceberg2.bmp", "iceberg\\iceberg2.bmp", "iceberg\\iceberg1.bmp", "iceberg\\iceberg1.bmp", "iceberg\\iceberg1.bmp", "iceberg\\iceberg1.bmp", "iceberg\\iceberg1.bmp", "iceberg\\iceberg1.bmp", "iceberg\\iceberg1.bmp", "iceberg\\iceberg1.bmp", "iceberg\\iceberg1.bmp" };
int nubmerOfIcebergImages = 68;
int icebergChange = 0;
int customChangeForIceberg = 325;

char wood1[1000][1000] = { "wood1\\wood68.bmp", "wood1\\wood67.bmp", "wood1\\wood66.bmp", "wood1\\wood65.bmp", "wood1\\wood64.bmp", "wood1\\wood63.bmp", "wood1\\wood62.bmp", "wood1\\wood61.bmp", "wood1\\wood60.bmp", "wood1\\wood59.bmp", "wood1\\wood58.bmp", "wood1\\wood57.bmp", "wood1\\wood56.bmp", "wood1\\wood55.bmp", "wood1\\wood54.bmp", "wood1\\wood53.bmp", "wood1\\wood52.bmp", "wood1\\wood51.bmp", "wood1\\wood50.bmp", "wood1\\wood49.bmp", "wood1\\wood48.bmp", "wood1\\wood47.bmp", "wood1\\wood46.bmp", "wood1\\wood45.bmp", "wood1\\wood44.bmp", "wood1\\wood43.bmp", "wood1\\wood42.bmp", "wood1\\wood41.bmp", "wood1\\wood40.bmp", "wood1\\wood39.bmp", "wood1\\wood38.bmp", "wood1\\wood37.bmp", "wood1\\wood36.bmp", "wood1\\wood35.bmp", "wood1\\wood34.bmp", "wood1\\wood33.bmp", "wood1\\wood32.bmp", "wood1\\wood31.bmp", "wood1\\wood30.bmp", "wood1\\wood29.bmp", "wood1\\wood28.bmp", "wood1\\wood27.bmp", "wood1\\wood26.bmp", "wood1\\wood25.bmp", "wood1\\wood24.bmp", "wood1\\wood23.bmp", "wood1\\wood22.bmp", "wood1\\wood21.bmp", "wood1\\wood20.bmp", "wood1\\wood19.bmp", "wood1\\wood18.bmp", "wood1\\wood17.bmp", "wood1\\wood16.bmp", "wood1\\wood15.bmp", "wood1\\wood14.bmp", "wood1\\wood13.bmp", "wood1\\wood12.bmp", "wood1\\wood11.bmp", "wood1\\wood10.bmp", "wood1\\wood9.bmp", "wood1\\wood8.bmp", "wood1\\wood7.bmp", "wood1\\wood6.bmp", "wood1\\wood5.bmp", "wood1\\wood4.bmp", "wood1\\wood3.bmp", "wood1\\wood2.bmp", "wood1\\wood1.bmp" };
int numberOfWood1Images = 68;
int wood1Change = 0;
int customChangeForWood1 = 295;

char wood2[1000][1000] = { "wood2\\woodv70.bmp", "wood2\\woodv69.bmp", "wood2\\woodv68.bmp", "wood2\\woodv67.bmp", "wood2\\woodv66.bmp", "wood2\\woodv65.bmp", "wood2\\woodv64.bmp", "wood2\\woodv63.bmp", "wood2\\woodv62.bmp", "wood2\\woodv61.bmp", "wood2\\woodv60.bmp", "wood2\\woodv59.bmp", "wood2\\woodv58.bmp", "wood2\\woodv57.bmp", "wood2\\woodv56.bmp", "wood2\\woodv55.bmp", "wood2\\woodv54.bmp", "wood2\\woodv53.bmp", "wood2\\woodv52.bmp", "wood2\\woodv51.bmp", "wood2\\woodv50.bmp", "wood2\\woodv49.bmp", "wood2\\woodv48.bmp", "wood2\\woodv47.bmp", "wood2\\woodv46.bmp", "wood2\\woodv45.bmp", "wood2\\woodv44.bmp", "wood2\\woodv43.bmp", "wood2\\woodv42.bmp", "wood2\\woodv41.bmp", "wood2\\woodv40.bmp", "wood2\\woodv39.bmp", "wood2\\woodv38.bmp", "wood2\\woodv37.bmp", "wood2\\woodv36.bmp", "wood2\\woodv35.bmp", "wood2\\woodv34.bmp", "wood2\\woodv33.bmp", "wood2\\woodv32.bmp", "wood2\\woodv31.bmp", "wood2\\woodv30.bmp", "wood2\\woodv29.bmp", "wood2\\woodv28.bmp", "wood2\\woodv27.bmp", "wood2\\woodv26.bmp", "wood2\\woodv25.bmp", "wood2\\woodv24.bmp", "wood2\\woodv23.bmp", "wood2\\woodv22.bmp", "wood2\\woodv21.bmp", "wood2\\woodv20.bmp", "wood2\\woodv19.bmp", "wood2\\woodv18.bmp", "wood2\\woodv17.bmp", "wood2\\woodv16.bmp", "wood2\\woodv15.bmp", "wood2\\woodv14.bmp", "wood2\\woodv13.bmp", "wood2\\woodv12.bmp", "wood2\\woodv11.bmp", "wood2\\woodv10.bmp", "wood2\\woodv9.bmp", "wood2\\woodv8.bmp", "wood2\\woodv7.bmp", "wood2\\woodv6.bmp", "wood2\\woodv5.bmp", "wood2\\woodv4.bmp", "wood2\\woodv3.bmp", "wood2\\woodv2.bmp", "wood2\\woodv1.bmp" };
int numberOfWood2Images = 70;
int wood2Change = 0;
int customChangeForWood2 = 295;

int enemy1Speed = 2;
int enemy1Height = 200;
int enemy1Weidth = 250;

int enemy2Speed = 2;
int enemy2Height = 200;
int enemy2Weidth = 250;

int enemy3Speed = 2;
int enemy3Height = 200;
int enemy3Weidth = 250;

int coinSpeed = 3;
int coinHeight = 80;
int coinWeidth = 80;

int repairSpeed = 3;
int repairHeight = 120;
int repairWeidth = 120;



int t1, t2, t3, t4, t5;
int highscore[10], tempsc, scoresave;
char fnum[10];
/*int loadindex = 0, startindex = 0;
int sailIndex = 0;
*/
time_t curr_time;
int tempMin, tempSec;
int w = 0, point, point2, collision2;
char strPoint[200000] = "";
char finalPoint[200000] = "";
char strTime[10000] = "";
int enemyBoatChange = 0;
int f = 0,p;
//int b = 0, c = 1, d = 2, e = 3;


/*char boat[100][100] = { "images\\boat.bmp", "images\\boatL.bmp", "images\\boatR.bmp" };
int boatPositionX = 520;
int boatPositionY = 50;
int boatWidth = 250;
int boatHight = 110;
int width = 1280;
int hight = 720;
int boatSpeed = 40;*/

int  musicOn = 0;
/*bool gotoRight = false;
bool gotoLeft = false;
bool gotoFront = false;
bool gotoBack = false;*/
int a = 0, i;

int buttonx = 10,buttony1,buttony2,resumeg=1;


//int buttonpush = 0;

char button2[30][40] = { "ingamepic\\Resume.bmp", "ingamepic\\new game.bmp", "ingamepic\\Main menu.bmp", "ingamepic\\back.bmp", "ingamepic\\Exit.bmp" };

char num[20], score[20];
char button[] = "bg\\button.bmp";
char pause[] = "images\\pausemenu.bmp";
char drop[20][40] = { "buttons\\Play.bmp", "buttons\\1.bmp", "buttons\\2.bmp", "buttons\\3.bmp", "buttons\\4.bmp", "buttons\\5.bmp" };
char option[20][40] = { "bg\\Quit.bmp", "bg\\qbg.bmp", "bg\\quitbutton.bmp", "bg\\gameon.bmp" };
char homemenu[20][40] = { "bg\\startingbg.bmp", "bg\\fbg1.bmp" };
//int gameState = 0,j=0,b = 0,c=1,d=2,e=3;
int options = 0;
char hs[] = "images\\hs.bmp";
char ins[]= "bg\\instruction.bmp";
char congrats[] = "bg\\reached.bmp";
char about[]="bg\\about.bmp";

/*int waveIndex = 0;
void changeWave()
{
	waveIndex++;
	if (waveIndex == 11)
	{
		waveIndex = 0;
	}

}
*/
void changewv()
{
	
	if (gameState == 2){

		iShowBMP(0, 0, wave[waveIndex]);
		
		
	}

}

int collision , life = 1, temp = 0;

void showLife()
{
	if (collision>27)
	{
		life = 0;
	}
	else life = 1;
	if (life == 1)
	{
		
		iSetColor(255, 0, 0);
		iRectangle(0, hight - 20, width - width / 2 - 100, 20);
		iSetColor(255, 0, 0);
		iFilledRectangle(0, hight - 20, width - width / 2 - 100 - collision * 20, 20);
	}
	if (life == 0)
	{
		gameState = 9;
		scoresave = 1;
		
	}

}
/*void boatHandleing()
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
	

	if (boatPositionY <= 0)
	{
		boatPositionY = 0;
		gotoBack = false;
	}
	if (boatPositionY + boatHight + 350 >= hight){
		boatPositionY = hight - boatHight - 350;
		gotoFront = false;
	}
	//iShowBMP2(boatPositionX, boatPositionY, car[0], 0);
}*/



int change = 325;


int array2[10000] = { 0, 120, 240, 360, 480, 600, 720, 840, 960, 1080 };
int arrayIndex2 = 0;
typedef struct myLife myLife;
struct myLife{
	char imageLocation[100];
	int Position_x;
	int Position_y;
	int Speed;
	int Height;
	int Width;
	void initializeVariable(int s, int h, int w)
	{
		Position_x = array2[arrayIndex2++ % 10];
		Position_y = hight - change;
		Speed = s;
		Height = h;
		Width = w;
	}
	void setPosition()
	{
		if (Position_y + Height <= 0){
			initializeVariable(Speed, Height, Width);
		}
		else{ Position_y -= Speed; }


	}
	void setLocation(char str[])
	{
		strcpy(imageLocation, str);
	}


}repair, coin;

int array1[10000] = { 750, 0, 500, 250, 1000 };
int arrayIndex1 = 0;
typedef  struct Enemy enemy;
struct Enemy{
	char imageLocation[100];
	int enimyPosition_x;
	int enimyPosition_y;
	int enimySpeed;
	int enimyHeight;
	int enimyWidth;
	void initializeVariable(int s, int h, int w, int customChange)
	{
		enimyPosition_x = array1[arrayIndex1++ % 5];
		enimyPosition_y = hight - customChange;
		enimySpeed = s;
		enimyHeight = h;
		enimyWidth = w;

	}

	void setPosition(int customChange)
	{
		if (enimyPosition_y + enimyHeight <= 0){
			initializeVariable(enimySpeed, enimyHeight, enimyWidth, customChange);
		}
		else{ enimyPosition_y -= enimySpeed; }

	}
	void setLocation(char str[])
	{
		strcpy(imageLocation, str);
	}


} b1, b2, b3;
void collisionCheck()
{
	int b1x1 = b1.enimyPosition_x, b1x2 = b1.enimyPosition_x + b1.enimyWidth;
	int b1y1 = b1.enimyPosition_y;

	int b2x1 = b2.enimyPosition_x, b2x2 = b2.enimyPosition_x + b2.enimyWidth;
	int b2y1 = b2.enimyPosition_y;

	int b3x1 = b3.enimyPosition_x, b3x2 = b3.enimyPosition_x + b3.enimyWidth;
	int b3y1 = b3.enimyPosition_y + 50;

	int x1 = repair.Position_x, x2 = repair.Position_x + repair.Width;
	int y1 = repair.Position_y, y2 = repair.Position_y + repair.Height;

	int x3 = boatPositionX, x4 = boatPositionX + boatWidth;
	int y4 = boatPositionY + boatHight + 50;


	if ((b1x1 < x4 - 50 && b1x2 > x3 + 50) && (b1y1 < y4 - 30)){
		icebergChange = 0;
		b1.initializeVariable(enemy1Speed, enemy1Height, enemy1Weidth, customChangeForIceberg);
		collision++;
	}

	if ((b2x1 < x4 && b2x2 > x3) && (b2y1 < y4)){
		wood1Change = 0;
		b2.initializeVariable(enemy2Speed, enemy2Height, enemy2Weidth, customChangeForWood1);
		collision++;
	}

	if ((b3x1 < x4 && b3x2 > x3) && (b3y1 < y4)){
		wood2Change = 0;
		b3.initializeVariable(enemy3Speed, enemy3Height, enemy3Weidth, customChangeForWood2);
		collision++;

	}

	if ((x1 < x4 && x2 > x3) && (y1 < y4)){

		if (collision>5){
			collision -= 1;
		}
		repair.initializeVariable(repairSpeed, repairHeight, repairWeidth);
	}

	if (coin.Position_x < x4 && coin.Position_x + coin.Width && coin.Position_x + coin.Width > x3 && coin.Position_y < y4){
		if (life != 0)
		{
			point += 5;
		
			FILE* fp = fopen("cscore.txt", "w");
			fprintf(fp, "%d", point);

			fclose(fp);	
			if (point==10000)
			{
				gameState = 10;
			}
		}

		coin.initializeVariable(coinSpeed, coinHeight, coinWeidth);
	}
}

void showCoin(){
	coin.setPosition();
}
void showEnemy1(){
	b1.setPosition(customChangeForIceberg);
	showCoin();
}
void showEnemy2(){
	b2.setPosition(customChangeForWood1);
	showEnemy1();
}
void showEnemy3(){
	b3.setPosition(customChangeForWood2);
	showEnemy2();

}
void showRepair(){
	repair.setPosition();
	iShowBMP2(repair.Position_x, repair.Position_y, repair.imageLocation, 0);
}



/*void fuelload(){
	if (gameState == 6){
		loadindex++;
		if (loadindex == 7)
		{
			gameState = 1;
			loadindex = 0;
		}
	}
}
void startload(){
	if (gameState == 8){
		startindex++;
		if (startindex == 4)
		{
			gameState = 2;
			startindex=0;
		}
	}
}

void sailload(){

	sailIndex++;
	if (sailIndex == 11)
	{
		sailIndex = 0;
	}

}*/

void iDraw()
{
	iClear();
	//startup menu
	if (gameState == 0)
	{
		iClear();
		iShowBMP(0, 0, homemenu[gameState]);
		iSetColor(225, 0, 225);
		

	}
	if (gameState == 6)
	{
		iClear();
		void fuelload();
		iShowBMP(0, 0, fuel[loadindex]);

	}


	
	//menu with buttons
	else if (gameState == 1)
	{
		iClear();
		void sailload();
		iShowBMP(0, 0, sail[sailIndex]);

		//iShowBMP(0, 0, homemenu[gameState]);

		iShowBMP2(buttonx, 300, button, 0);
		if (buttonpush == 1)
		{
			iShowBMP2(buttonx - 3, 300 + 315, drop[buttonpush], 0);
			buttonif();
			PlaySound("music\\waves.wav", NULL, SND_LOOP | SND_ASYNC);
			
			gameState = 7;
		}


		if (buttonpush == 2)
		{
			iShowBMP2(buttonx - 3, 300 + 237, drop[buttonpush], 0);
			buttonif();
			gameState = 3;
		}
		if (buttonpush == 3)
		{
			iShowBMP2(buttonx - 3, 300 + 160.5, drop[buttonpush], 0);
			buttonif();
			gameState = 4;
		}if (buttonpush == 4)
		{
			iShowBMP2(buttonx - 3, 300 + 79, drop[buttonpush], 0);
			buttonif();
			gameState = 5;
		}
		if (buttonpush == 5)
		{
			iShowBMP2(buttonx - 3, 296, drop[buttonpush], 0);
			buttonif();
			options = 1;
		}
		//exit option
		if (options == 1)
		{
			iShowBMP2(380, 200, option[1], 0);
			iShowBMP2(420, 200, option[2], 0);

		}
	}

	if (gameState == 7)
	{
		iClear();
		iShowBMP(0, 0, wave[2]);

		iShowBMP(0, 420, "images\\oceanViewSky.bmp");
		//iShowBMP(0, 0, "images\\sky.bmp");
		//iShowBMP(0, 0, "images\\oceanViewWater.bmp");
		iShowBMP2(boatPositionX, boatPositionY, boat[0], 0);
		iShowBMP2(450,400, button2[0], 0);
		iShowBMP2(720, 400, button2[1], 0);
		iShowBMP2(1120, 20, button2[3], 0);
		

	}
	if (gameState == 8)
	{
		iClear();
		void startload();
		if (resumeg == 0){
			
			FILE* fp = fopen("cscore.txt", "w");
			point=0;collision = 0;
			fprintf(fp, "%d", point);
			fclose(fp);
			
		}
		if (resumeg == 1){
			FILE* fp = fopen("cscore.txt", "r");
			fscanf(fp, "%d", &point2);
			fclose(fp);
			fopen("gamestate.txt", "r");
			fscanf(fp, "%d", &collision2);
			fclose(fp);
			point = point2;
			collision = collision2;
			resumeg = 2;

		}

		iShowBMP(0, 0, wave[0]);
	
		iShowBMP(0, 420, "images\\oceanViewSky.bmp");
		//iShowBMP(0, 0, "images\\sky.bmp");
		//iShowBMP(0, 0, "images\\oceanViewWater.bmp");
		
		iShowBMP2(boatPositionX, boatPositionY, boat[0], 0);
		iShowBMP2(width / 2 - 130, hight / 2 - 100, startup[startindex], 0);

	}

	//the game
	else if (gameState == 2){
		iClear();
		if (options == 0)
		{
			
			iResumeTimer(t2);
		/*iShowBMP(0, 0, "images\\sky.bmp");
		iShowBMP(0, 0, "images\\oceanViewWater.bmp");
		*/
			changewv();
			iShowBMP(0, 420, "images\\oceanViewSky.bmp");
			boatHandleing();
			collisionCheck();
			if (temp + 1 == collision || temp + 2 == collision){
				iShowBMP2(boatPositionX + 10, boatPositionY + 10, fire[f++ % 3], 0);
			}
			temp = collision;


			if (icebergChange + 1 % nubmerOfIcebergImages != nubmerOfIcebergImages)icebergChange++%nubmerOfIcebergImages;
			else if (b1.enimyPosition_y + b1.enimyHeight <= 0)
				icebergChange = 0;
			b1.setLocation(iceberg[icebergChange]);
			iShowBMP2(b1.enimyPosition_x, b1.enimyPosition_y, b1.imageLocation, 0);


			if (wood1Change + 1 % numberOfWood1Images != numberOfWood1Images)wood1Change++%numberOfWood1Images;
			else if (b2.enimyPosition_y + b2.enimyHeight <= 0)
				wood1Change = 0;
			b2.setLocation(wood1[wood1Change]);
			iShowBMP2(b2.enimyPosition_x, b2.enimyPosition_y, b2.imageLocation, 0);

			if (wood2Change + 1 % numberOfWood2Images != numberOfWood2Images)wood2Change++%numberOfWood2Images;
			else if (b3.enimyPosition_y + b3.enimyHeight <= 0)
				wood2Change = 0;
			b3.setLocation(wood2[wood2Change]);
			iShowBMP2(b3.enimyPosition_x, b3.enimyPosition_y, b3.imageLocation, 0);



			iShowBMP2(coin.Position_x, coin.Position_y, coin.imageLocation, 0);


			showEnemy3();

			if (collision>3)
				showRepair();


		iSetColor(225, 0, 225);
		iText(1110, 700, "Coin:", GLUT_BITMAP_TIMES_ROMAN_24);


		/*FILE* fp = fopen("cscore.txt", "w");
		fprintf(fp, "%d",&point);
		

		fclose(fp);
		*/


		FILE* fp =fopen("cscore.txt", "r");

		iSetColor(250, 250, 0);
		
		fscanf(fp, "%s", &strPoint);
			iText(1230, 700, strPoint, GLUT_BITMAP_TIMES_ROMAN_24);
	 
		fclose(fp);

		fopen("gamestate.txt", "w");
		fprintf(fp, "%d", collision);
		fclose(fp);


		//itoa(point, strPoint, 10);
		
		showLife();
		}
		else { showLife(); }


		//exit option
		if (options == 1)
		{
			iPauseTimer(t2);
			iShowBMP(0, 0, wave[waveIndex]);
			iShowBMP2(coin.Position_x, coin.Position_y, coin.imageLocation, 0);
			iShowBMP(0, 420, "images\\oceanViewSky.bmp");
			iShowBMP2(boatPositionX, boatPositionY, boat[0], 0);
			iShowBMP2(coin.Position_x, coin.Position_y, coin.imageLocation, 0);
			iShowBMP2(repair.Position_x, repair.Position_y, repair.imageLocation, 0);
			iShowBMP2(b1.enimyPosition_x, b1.enimyPosition_y, b1.imageLocation, 0);
			iShowBMP2(b2.enimyPosition_x, b2.enimyPosition_y, b2.imageLocation, 0);
			iShowBMP2(b3.enimyPosition_x, b3.enimyPosition_y, b3.imageLocation, 0);
			PlaySound(0, 0, 0);
			//iShowBMP2(380, 200, option[1], 0);
			//iShowBMP2(420, 200, option[2], 0);
			if (gameState == 2)
			{
				iShowBMP2(350, 390, pause, 0);
				iShowBMP2(450, 310, button2[0], 0);
				iShowBMP2(720, 310, button2[2], 0);
			}
		

			

		}
	}

	else if (gameState == 9)
	{
		iClear();
		PlaySound(0, 0, 0);
		iShowBMP(0, 0, "ingame\\gameover.bmp");
		iSetColor(225, 225, 225);
		iText(width / 2 - 200, hight / 2 - 150, "You have earned            coins", GLUT_BITMAP_TIMES_ROMAN_24);

		FILE* fp = fopen("cscore.txt", "r");
		iSetColor(250, 250, 0);
		fscanf(fp, "%s", &finalPoint);
		iText(width / 2 - 20, hight / 2 - 150, finalPoint, GLUT_BITMAP_TIMES_ROMAN_24);
		fclose(fp);

		iText(width / 2 - 20, hight / 2 - 150, finalPoint, GLUT_BITMAP_TIMES_ROMAN_24);
		if (scoresave==1){
		fopen("scoreboard.txt", "r");
		for (i = 1; i < 4; i++)
		{
			fscanf(fp, "%s %d", &fnum, &highscore[i]);
		}
		fclose(fp);

		highscore[0] = point;

		for (i = 0; i < 4; i++)
		{
			
			for (j = 0; j < 3; j++)
			{
				if (highscore[j] < highscore[j + 1])
				{
					tempsc = highscore[j];
					highscore[j] = highscore[j + 1];
					highscore[j + 1] = tempsc;
				}
			}

		}

		for (i = 0; i<4; i++)
		{
			if (highscore[i] == highscore[i + 1])
			{
				for (j = i; j<4; j++)
				{
					highscore[j] = highscore[j + 1];
				}
			}
		}

		fopen("scoreboard.txt", "w");
		for (i = 0; i < 3; i++)
		{
			fprintf(fp, "%d. ", i + 1);
			fprintf(fp, "%d\n", highscore[i]);
		}
		fclose(fp);
		scoresave = 0;
		}
		point = 0; collision = 0;
		iShowBMP2(1120, 20, button2[3], 0);
		
	}
	else if (gameState == 10)
	{
		iClear();
		PlaySound(0, 0, 0);
		iShowBMP(0, 0, congrats);
		/*iSetColor(225, 225, 225);
		iText(width / 2 - 200, hight / 2 - 150, "You have earned            coins", GLUT_BITMAP_TIMES_ROMAN_24);

		FILE* fp = fopen("cscore.txt", "r");
		iSetColor(250, 250, 0);
		fscanf(fp, "%s", &finalPoint);
		iText(width / 2 - 20, hight / 2 - 150, finalPoint, GLUT_BITMAP_TIMES_ROMAN_24);
		fclose(fp);*/

		iText(width / 2 - 20, hight / 2 - 150, finalPoint, GLUT_BITMAP_TIMES_ROMAN_24);
		if (scoresave == 1){
			
			FILE* fp = fopen("scoreboard.txt", "r");
			for (i = 1; i < 4; i++)
			{
				fscanf(fp, "%s %d", &fnum, &highscore[i]);
			}
			fclose(fp);

			highscore[0] = point;

			for (i = 0; i < 4; i++)
			{

				for (j = 0; j < 3; j++)
				{
					if (highscore[j] < highscore[j + 1])
					{
						tempsc = highscore[j];
						highscore[j] = highscore[j + 1];
						highscore[j + 1] = tempsc;
					}
				}

			}

			for (i = 0; i<4; i++)
			{
				if (highscore[i] == highscore[i + 1])
				{
					for (j = i; j<4; j++)
					{
						highscore[j] = highscore[j + 1];
					}
				}
			}

			fopen("scoreboard.txt", "w");
			for (i = 0; i < 3; i++)
			{
				fprintf(fp, "%d. ", i + 1);
				fprintf(fp, "%d\n", highscore[i]);
			}
			fclose(fp);
			scoresave = 0;
		}
		point = 0; collision = 0;
		iShowBMP2(1120, 20, button2[3], 0);
	}


	//highscores
	else if (gameState == 3)
	{
		iClear();
		iShowBMP(0, 0, hs);
		FILE* fp = fopen("scoreboard.txt", "r");

		iText(600, hight - 100, "Coins", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(223, 220, 45);
		for (i = 1; i <= 3; i++)
		{
			fscanf(fp, "%s %s", &num, &score);
			iText(570, 620 - (i * 30), num, GLUT_BITMAP_TIMES_ROMAN_24);
			iText(600, 620 - (i * 30), score, GLUT_BITMAP_TIMES_ROMAN_24);
		}
		fclose(fp);

		iShowBMP2(1120, 20, button2[3], 0);
	

	}
	//instructions
	else if (gameState == 4)
	{
		iClear();
		iShowBMP(0, 0, ins);
		iShowBMP2(1120, 20, button2[3], 0);
	}
	//about
	else if (gameState == 5)
	{
		iClear();
		iShowBMP(0, 0, about);
		iShowBMP2(1120, 20, button2[3], 0);

	}
	

	
}



/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{


}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	

}

void iMouse(int button, int state, int mx, int my)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//1000, 300
		//main game console
		//back
		if (gameState == 3 || gameState == 4 || gameState == 5 || gameState == 7 || gameState == 9){

			if (mx >= 1150 && mx <= 1265 && my >= 25 && my <= 108)
			{
				
				if (gameState == 9 || gameState == 7)
				{
					PlaySound("music\\bgmusic.wav", NULL, SND_LOOP | SND_ASYNC);
				}
				gameState = 1;
				buttonpush = 0;

			}
		}
		if (gameState == 1){
			if (mx >= buttonx + 40 && mx <= buttonx + 170 && my >= 620 && my <= 700)
			{
				musicOn = 0;
				buttonpush = 1;
				//collision=0;


			}
			//highcore
			if (mx >= buttonx + 40 && mx <= buttonx + 170 && my >= 620 - 60 && my <= 700 - 80)
			{
				buttonpush = 2;
			}
			//instructions
			if (mx >= buttonx + 40 && mx <= buttonx + 170 && my >= 620 - 140 && my <= 700 - 160)
			{
				buttonpush = 3;
				//gameState = 4;

			}
			//about
			if (mx >= buttonx + 40 && mx <= buttonx + 170 && my >= 620 - 220 && my <= 700 - 240)
			{
				buttonpush = 4;
				//gameState = 5;

			}
			//exit function...
			if (mx >= buttonx + 40 && mx <= buttonx + 170 && my >= 310 && my <= 370)
			{
				buttonpush = 5;
				//options = 1;
			}
		}
		//exit function...
		//420,200,500,400
		if (options == 1 && mx >=450 && mx <=  612 && my >=308 && my <= 360)
		{
			if (gameState == 1)
			{
				exit(0);
			}
			if (gameState == 2)
			{
				PlaySound("music\\waves.wav", NULL, SND_LOOP | SND_ASYNC);
				options = 0;
			}
			
		}
		if (options == 1 && mx >= 720 && mx <= 875 && my >= 310 && my <= 360)
		{
			options = 0;
			if (gameState == 2)
			{
				PlaySound("music\\bgmusic.wav", NULL, SND_LOOP | SND_ASYNC);
				gameState = 1;
				buttonpush = 0;
			}
		}
		if (mx >= 0 && mx <= width && my >= 0 && my <= hight)
		{
			if (gameState == 0)
			{
				PlaySound("music\\bgmusic.wav", NULL, SND_LOOP | SND_ASYNC);
				gameState = 6; musicOn = 0;
			}

		}
		//width / 2 - 130, hight / 2 - 150
		if (gameState == 7){
			//resume
			if (mx >= 450 && mx <= 612 && my >= 308 + 80 && my <= 360 + 80)
			{
				resumeg = 1;
				gameState = 8;

			}
			//newgame
			if (mx >= 720 && mx <= 875 && my >= 310 + 80 && my <= 360 + 80)
			{
				resumeg = 0;
				gameState = 8;
			}

		}


	}


	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}


}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (gameState == 2){
		if (key == 's') 
		{
			gotoFront = false;
			gotoBack = false;
			gotoRight = false;
			gotoLeft = false;
		}
		
		if (options==1)
			if (key == '\r'){
					collision = 0;
					point = 0;
					gameState = 1;
				}
		
	}

	if (gameState == 1 || gameState == 6){
		if (key == 'm')
		{
			musicOn++;
			if (musicOn == 1)
				PlaySound(0, 0, 0);
				
			if (musicOn == 2)
			{
				PlaySound("music\\bgmusic.wav", NULL, SND_LOOP | SND_ASYNC);
				musicOn = 0;
			}
			
		}
		
	}
	if (key >= 0 && key <= 265 && gameState == 0)
	{
		if (gameState == 0)
		{
			PlaySound("music\\bgmusic.wav", NULL, SND_LOOP | SND_ASYNC);
			gameState = 6; musicOn = 0;
		}
	}
	

	
	/*if (key == 'z')
	{

		buttonpush = 0;
		if (gameState == 2)
		{

			PlaySound("music\\bgmusic.wav", NULL, SND_LOOP | SND_ASYNC);
		}
		gameState = 1;
		//collision = 0;
		//point = 0;

	}*/
	if (key == 27)
	{

		if (gameState != 2 && gameState != 1 && gameState != 6 && gameState != 8)
		{
			gameState = 1;
			buttonpush = 0;
		}

		
		else
		{
			//buttonpush = 5;
			options = 1;
			iPauseTimer(t2);
		}

	}

	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	if (gameState == 2){

		if (key == GLUT_KEY_RIGHT)
		{	
			if (boatPositionX + boatWidth <= width-10)
			{
				//gotoFront = false;
				//gotoBack = false;
				gotoRight = true;
				gotoLeft = false;
			}

		}
		

		if (key == GLUT_KEY_LEFT )
		{
			if (boatPositionX > 10)
			{
				//gotoFront = false;
				//gotoBack = false;
				gotoRight = false;
				gotoLeft = true;
			}

		}
		/*if (key == GLUT_KEY_UP)
		{
			gotoFront=true;
			gotoBack=false;
			gotoRight=false;
			gotoLeft=false;

			
		}*/
		/*if (key == GLUT_KEY_DOWN)
		{
		 gotoFront=false;
		 gotoBack=true;
		 gotoRight=false;
		 gotoLeft=false;
		 
		}*/
	}
	if (key == GLUT_KEY_HOME)
	{

	}
	

}


int main()
{	
	
	
	srand((unsigned)time(NULL));
	b1.initializeVariable(enemy1Speed, enemy1Height, enemy1Weidth, customChangeForIceberg);
	b2.initializeVariable(enemy2Speed, enemy2Height, enemy2Weidth, customChangeForWood1);
	b3.initializeVariable(enemy3Speed, enemy3Height, enemy3Weidth, customChangeForWood2);
	repair.initializeVariable(repairSpeed, repairHeight, repairWeidth);
	coin.initializeVariable(coinSpeed, coinHeight, coinWeidth);

	b1.setLocation(iceberg[0]);
	b2.setLocation(wood1[0]);
	b3.setLocation(wood2[0]);
	repair.setLocation("ingame\\repair.bmp");
	coin.setLocation("ingame\\coin.bmp");


	t1=iSetTimer(200, buttonif);
	t2=iSetTimer(100, changeWave);
	t3=iSetTimer(1000, fuelload);
	t4=iSetTimer(1000, startload);
	t5=iSetTimer(150, sailload);

	iInitialize(width, hight, "NFS");

	return 0;
}