class TV
{
public:
    void SetStation(int Station);
    int GetStation() const;

private:
    int itsStation;
};
main()
{
    TV myTV;
    myTV.itsStation = 9;//закрита функція
    TV.SetStation(10);//Немає самої функції
    TV myOtherTV(2);//немає іншого телевізора
}