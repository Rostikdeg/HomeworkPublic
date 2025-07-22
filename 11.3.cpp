class Shape
{
public:
	Shape();

	virtual ~Shape();

	virtual Shape(const Shape&); //не можна робити конструктори віртуальними