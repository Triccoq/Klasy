#include <iostream>
#include <math.h>
#include "klasy.h"
using namespace std;

int main()
{
    //tworzenie figur
    Square Squares[5] = {
            Square("K1", 5),
            Square("K2", 7),
            Square("K3", 8),
    };
    Rectangle Rectangles[5] = {
            Rectangle("R1", 5 , 6),
            Rectangle("R2", 7 , 8),
            Rectangle("R3", 8, 9),
    };
    Circle Circles[5] = {
            Circle("C1", 5),
            Circle("C2", 7),
            Circle("C3", 8),
    };

    //wywoływanie figur
    for(int i =0; i<5; i++)
    {
        Squares[i].show();
    }

    for(int i =0; i<5; i++)
    {
        Rectangles[i].show();
    }

    for(int i =0; i<5; i++)
    {
        Circles[i].show();
    }

    cout << "Istnieje " << Square::numberOfSquares() << " kwadratow." << endl;
    cout << "Istnieje " << Rectangle::numberOfRectangles() << " prostokotow." << endl;
    cout << "Istnieje " << Circle::numberOfCircles() << " kol." << endl;

    /*
    cout << "Odleglosc pomiedzy punktami wynosi " << p1.distance(p2) << endl;
    const Point& p = p1.distant(p2);
    cout << "Punkt bardziej oddalonny od poczatku ukladu wspolrzednych to: " << endl;
    p.show();
*/
    cout<<endl;
    cout<<endl;

    for(int i =0; i<3; i++)
    {
        Circles[i].cCircumference();
        Circles[i].cArea();
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(int i =0; i<3; i++)
    {
        Rectangles[i].rCircumference();
        Rectangles[i].rArea();
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(int i =0; i<3; i++)
    {
        Squares[i].sCircumference();
        Squares[i].sArea();
        cout<<endl;
    }
}