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

    //Szukanie najwiekszego pola

    double max = areaOfS[0];
    char figureType='S';
    for (int i = 0; i < 100; ++i) {
        if (areaOfS[i] > max) {
            max = areaOfS[i];
            figureType='S';
        }
        if (areaOfR[i] > max) {
            max = areaOfR[i];
            figureType='R';
        }
        if (areaOfC[i] > max) {
            max = areaOfC[i];
            figureType='C';
        }
    }
    // Wyświetlanie informacji o figurze z największym polem
    switch (figureType) {
        case 'S':
            std::cout << "Najwieksze pole nalezy do kwadratu i jest rowne: " << max << std::endl;
            break;
        case 'R':
            std::cout << "Najwieksze pole nalezy do prostokata i jest rowne: " << max << std::endl;
            break;
        case 'C':
            std::cout << "Najwieksze pole nalezy do kola i jest rowne: " << max << std::endl;
            break;
    }
    return 0;
}
