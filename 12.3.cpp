unsigned short SomeArray[5][4];
for (int i = 0; i < 4; i++)        // тут переплутано розміри
    for (int j = 0; j < 5; j++)    //теж переплутано
        SomeArray[i][j] = i + j;