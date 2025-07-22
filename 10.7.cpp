VeryShort VeryShort::operator+(const VeryShort &rhs)
{
	itsVal += rhs.GetItsVal();  //не изменять itsVal
	return *this;               // повертається змінений поточний об'єкт замість нового
}