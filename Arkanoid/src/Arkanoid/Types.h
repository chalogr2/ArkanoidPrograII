#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <string.h>
#include <unordered_map>


class vector2f {

private:

public:
	int posX;
	int posY;

	vector2f(int _x, int _y);

};

class color {

private:

public:
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;

	color();
	color(int _r, int _g, int _b, int _a);

};

class Font {

private:

public:
	std::string id;
	int size;
	std::string path;

	Font(std::string _id, int _size, std::string _path);

};

class Text {

private:

public:
	std::string id;
	color myColor;
	std::string path;
	std::string text;

	Text(std::string _id, color _myColor, std::string _path);

};


class Rect {

private:

public:
	int locationX;
	int locationY;
	int imageHeight;
	int imageWidth;

	Rect(int _x, int _y, int _h, int _w);

	///IMPLEMENTACION CON vector2f
	/*
	vector2f pos;
	vector2f size;

	Rect(int _x, int _y, int _h, int _w);
		//cpp
	Rect::Rect(int _x, int _y, int _h, int _w){
		pos.posX = _x;
		pos.posY = _y;
		size.posX = _h;
		size.posY = _w;
	}

	Rect(vector2f _pos, vector2f _size);
		//cpp
	Rect::Rect(vector2f pos, vector2f size){
		pos = _pos;
		size = _size;
	}

	*/

	/*
	vector2f getSize(); //returns imageHeight and imageWidth in a vector2f
	vector2f getPos(); //returns locationX and loacationY in a vector2f
	*/

};