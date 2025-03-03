#pragma once

class Coord
{
private:
    int x;
    int y;
    static const int WIDTH = 1920;
    static const int HEIGHT = 1080;

    void clamp();

public:
    Coord(int px = 0, int py = 0);
    void translate(int dx, int dy);
    void moveTo(int px, int py);
    void print() const;
};