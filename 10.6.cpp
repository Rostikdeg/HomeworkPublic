SQUARE SQUARE::operator=(const SQUARE &rhs)
{
	itsSide = new int;
	*itsSide = rhs.GetSide();
	return *this: //должно быть `;`, а не `:`. нет удаления старой памяти. возвращается объект по значению, а должен быть `SQUARE&`
                  
}