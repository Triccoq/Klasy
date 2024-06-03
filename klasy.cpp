#include <iostream>
#include <math.h>
#include "klasy.h"

double areaOfS[100];
double areaOfR[100];
double areaOfC[100];

//int Point::m_numberOfPoints = 0;
int Square::m_numberOfSquares = 0;
int Rectangle::m_numberOfRectangles = 0;
int Circle::m_numberOfCircles = 0;

/*
Point::Point() {
    m_name = "bez nazwy";
    m_x = 0;
    m_y = 0;
    Point::m_numberOfPoints++;
}
*/
Square::Square() {
    s_name = "kwadrat bez nazwy";
    s_a=1;
    Square::m_numberOfSquares++;
}

Rectangle::Rectangle() {
    r_name = "prostokat bez nazwy";
    r_a = 1;
    r_b = 1;
    Rectangle::m_numberOfRectangles++;
}
Circle::Circle() {
    c_name = "kolo bez nazwy";
    c_r = 1;
    Circle::m_numberOfCircles++;
}

/*
Point::Point(const std::string& name, double x, double y) {
    m_name = name;
    m_x = x;
    m_y = y;
    Point::m_numberOfPoints++;
}
*/
Square::Square(const std::string& name, double a) {
    s_name = name;
    s_a = a;
    Square::m_numberOfSquares++;
}

Rectangle::Rectangle(const std::string& name, double a, double b) {
    r_name = name;
    r_a = a;
    r_b = b;
    Rectangle::m_numberOfRectangles++;
}

Circle::Circle(const std::string& name, double r) {
    c_name = name;
    c_r = r;
    Circle::m_numberOfCircles++;
}

/*
Point::~Point() {
Point::m_numberOfPoints--;
}
*/
Square::~Square()
{
    Square::m_numberOfSquares--;
}

Rectangle::~Rectangle()
{
    Rectangle::m_numberOfRectangles--;
}

Circle::~Circle()
{
    Circle::m_numberOfCircles--;
}


/*
void Point::setName(const std::string& name) {
  m_name = name;
}
*/
void Square::setName(const std::string& name) {
    s_name = name;
}
void Rectangle::setName(const std::string& name) {
    r_name = name;
}
void Circle::setName(const std::string& name) {
    c_name = name;
}

/*
void Point::setXY(double x, double y) {
    m_x = x;
    m_y = y;
}
*/
/*
    void Point::setXY(double x, double y) {
        m_x = x;
        m_y = y;
 */
void Square::setSa(double a) {
    s_a = a;
}
void Rectangle::setRab(double a, double b) {
    r_a = a;
    r_b = b;
}
void Circle::setCr(double r) {
    c_r = r;
}

/*
double Point::getX() {
    return m_x;
}

double Point::getY() {
    return m_y;
}
*/

double Square::getSa() const {
    return s_a;
}
double Rectangle::getRa() const{
    return r_a;
}
double Rectangle::getRb() const{
    return r_b;
}
double Circle::getCr() const{
    return c_r;
}

/*
void Point::show() const {
    std::cout << "Point: " << m_name << "(" << m_x << ", " << m_y << ")" << std::endl;
}
*/
void Square::show() const {
    std::cout << "Kwadrat: " << s_name << " o boku " << s_a << std::endl;
}
void Rectangle::show() const {
    std::cout << "Prostokot: " << r_name << " o bokach " << r_a << " i " << r_b << std::endl;
}
void Circle::show() const {
    std::cout << "Kolo: " << c_name << " o promieniu " << c_r << std::endl;
}

/*
double Point::distance(const Point& p) const {
    return sqrt((p.m_x - m_x) * (p.m_x - m_x) + (p.m_y - m_y) * (p.m_y - m_y));
}

const Point& Point::distant(const Point& p) const {
    double d = sqrt(m_x * m_x + m_y * m_y);
    double dp = sqrt(p.m_x * p.m_x + p.m_y * p.m_y);

    if (d > dp)
        return *this;

    return p;
}
*/

/*
int Point::numberOfPoints() {
    return Point::m_numberOfPoints;
}*/

int Square::numberOfSquares() {
    return Square::m_numberOfSquares;
};

int Rectangle::numberOfRectangles() {
    return Rectangle::m_numberOfRectangles;
};

int Circle::numberOfCircles() {
    return Circle::m_numberOfCircles;
};

void Square::sCircumference() const {
    std::cout<<"Obwod kwadratu " << s_name <<" wynosi "<<calculateSCircumference()<<std::endl;
}
void Rectangle::rCircumference() const {
    std::cout<<"Obwod prostokatu " << r_name <<" wynosi "<<calculateRCircumference()<<std::endl;
}
void Circle::cCircumference() const {
    std::cout<<"Obwod kola " << c_name <<" wynosi "<<calculateCCircumference()<<std::endl;
}

void Square::sArea() const {
    std::cout<<"Pole kwadratu " << s_name <<" wynosi "<<calculateSArea()<<std::endl;
}
void Rectangle::rArea() const {
    std::cout<<"Pole prostokatu " << r_name <<" wynosi "<<calculateRArea()<<std::endl;
}
void Circle::cArea() const {
    std::cout<<"Pole kola " << c_name <<" wynosi "<<calculateCArea()<<std::endl;
}
