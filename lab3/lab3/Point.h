#ifndef POINT_H
#define POINT_H

class Point{
public:
    Point(double x, double y, double z);
    explicit Point(const Point &point);
    Point& operator=(const Point& point);
    ~Point();

    double getX() const;
    void setX(double x);
    double getY() const;
    void setY(double y);
    double getZ() const;
    void setZ(double z);

    void rotate(const Point& center, double alpha, double beta, double gamma);
    void move(double dx, double dy, double dz);
    void scale(const Point& center, double k);

private:
    void rotateX(const Point& center, double angle);
    void rotateY(const Point& center, double angle);
    void rotateZ(const Point& center, double angle);

    double x { 0 };
    double y { 0 };
    double z { 0 };
};

#endif // POINT_H
