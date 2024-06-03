#pragma once
#include <string>
#include <math.h>

/*
class Point
{
private:
    static int m_numberOfPoints;
    std::string m_name;
    double m_x;
    double m_y;
public:
    static int numberOfPoints();
    Point();
    Point(const std::string& name, double x = 0, double y = 0);
    ~Point();
    void setName(const std::string& name);
    void setXY(double x, double y);
    double getX();
    double getY();
    void show() const;
    double distance(const Point& p) const;
    const Point& distant(const Point& p) const;
};
*/

class Square
{
private:
    static int m_numberOfSquares;
    std::string s_name;
    double s_a;
public:
    static int numberOfSquares();
    Square();
    Square(const std::string& name, double a=1);
    ~Square();
    void setName(const std::string& name);
    void setSa(double a);
    double getSa();
    void show() const;
    double calculateSCircumference() const{
        return 4*s_a;
    }
    double calculateSArea() const{
        return s_a*s_a;
    }
    void sCircumference() const;
    void sArea() const;

};

class Rectangle
{
private:
    static int m_numberOfRectangles;
    std::string r_name;
    double r_a;
    double r_b;
public:
    static int numberOfRectangles();
    Rectangle();
    Rectangle(const std::string& name, double a=1, double b=1);
    ~Rectangle();
    void setName(const std::string& name);
    void setRab(double a, double b);
    double getRa();
    double getRb();
    void show() const;
    double calculateRCircumference() const{
        return 2*(r_a+r_b);
    }
    double calculateRArea() const{
        return r_a*r_b;
    }
    void rCircumference() const;
    void rArea() const;
};

class Circle
{
private:
    static int m_numberOfCircles;
    std::string c_name;
    double c_r;
public:
    static int numberOfCircles();
    Circle();
    Circle(const std::string& name, double r=1);
    ~Circle();
    void setName(const std::string& name);
    void setCr(double r);
    double getCr();
    void show() const;
    double calculateCCircumference() const{
        return 2*M_PI*c_r;;
    }
    double calculateCArea() const{
        return M_PI*(c_r*c_r);
    }
    void cCircumference() const;
    void cArea() const;
};