#include "Types.h"

vector2f::vector2f(int _x, int _y) {

	posX = _x;
	posY = _y;

}

color::color() {
	r = 0;
	g = 0;
	b = 0;
	a = 0;
}

color::color(int _r, int _g, int _b, int _a) {

	r = _r;
	g = _g;
	b = _b;
	a = _a;

}

Font::Font(std::string _id, int _size, std::string _path) {

	id = _id;
	size = _size;
	path = _path;

}

Text::Text(std::string _id, color _myColor, std::string _path) {

	id = _id;
	myColor.r = _myColor.r;
	myColor.g = _myColor.g;
	myColor.b = _myColor.b;
	myColor.a = _myColor.a;
	path = _path;
	text = "";

}

Rect::Rect(int _x, int _y, int _h, int _w) {

	locationX = _x;
	locationY = _y;
	imageHeight = _h;
	imageWidth = _w;

}