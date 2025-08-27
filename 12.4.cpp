unsigned short SomeArray[5][4];
	for (int i = 0; i <= 5; i++)// тут помилка в <=
    		for (int j = 0; j <= 4; j++) // тут помилка в <=
	        	SomeArray[i][j] = 0;