
class Rectangle {
public:
    virtual ~Rectangle() {}  
    virtual Rectangle* clone() const = 0;
};

class Square : public Rectangle {
public:
    Square* clone() const override {
        return new Square(*this);
    }
};
