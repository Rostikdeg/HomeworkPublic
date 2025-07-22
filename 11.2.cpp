void SomeFunction(Shape); // Передаємо об'єкт за значенняс=м копія. Це проблема.

Shape *pRect = new Rectangle;

SomeFunction(*pRect); //Тут об'єкт Rectangle копіюється у змінну типу Shape 