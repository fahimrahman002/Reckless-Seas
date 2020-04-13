int buttonpush = 0;
int gameState = 0;
int j=0;
int loadindex = 0, startindex = 0;
int sailIndex = 0;

void buttonif(){

	if (gameState == 1 && buttonpush >0)
	{
		j++;
		if (j == 6){
			buttonpush = 0;
			j = 0;
		}
	}
}

void fuelload(){
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
			startindex = 0;
		}
	}
}

void sailload(){

	sailIndex++;
	if (sailIndex == 11)
	{
		sailIndex = 0;
	}

}