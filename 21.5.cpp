List<Cat> Cat_List;
Cat Felix;
CatList.append(Felix); // CatList  повинно бути Cat_List
cout << "Felix is "
     << (Cat_List.is_present(Felix) ? "" : "not ") //is_present для Cat потребує перевантаженого operator== у класі Cat. Без нього компілятор не знає, як порівняти об’єкти.
     << "present\n";
