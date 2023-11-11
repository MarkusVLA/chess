
#ifndef COLOR_H
#define COLOR_H

#include <fstream>

struct Color {

    unsigned char R, G, B;
    Color(): R(0), G(0), B(0) { }
    Color(unsigned char v): R(v), G(v), B(v) { }
    Color(unsigned char r, unsigned char g , unsigned char b):  R(r), G(g), B(b) { }
};

std::ostream &operator<<(std::ostream &ofs, Color &color) {
    ofs << color.R << color.G << color.B;
    return ofs;
}

#endif // COLOR_H