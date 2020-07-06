#ifndef _SCREEN_H
#define _SCREEN_H
#include<iostream>
#include<string>
#include<vecror>
using namespace std;
class Screen;
class Window_mgr{
public:
	using ScreenIndex = vector<Screen>::size_type;
	void clear(ScreenIndex);
private:
	vector<Screen>screens;
}


class Screen{
	friend void Window_mgr::clear(ScreenIndex);
public:
	using pos = string::size_type;
	Screen() = default;
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c) {}
	Screen(pos ht,pos wd):height(ht),width(wd),contents(ht*wd,' ') {}
	char get() const{
		return contents[cursor];
	}
	char get(pos r,pos c)const{
		return contents[r*width+c];
	}
	Screen &move(pos r,pos c);
	Screen &set(char c);
	Screen &set(pos r,pos c, char ch);
	const Screen &display(ostream &os) const{
		do_display(os);
		return *this;
	}
	Screen &display(ostream &os){
		do_display(os);
		return *this;
	}
private:
	void do_display(ostream &os) const{//此处定义const 将this指向常量可以接受常量this也可以接受非常量this，所以必须使用const
		os<<contents;
	}
private:
	pos cursor=0;
	pos height=0,width=0;
	string contents;
};

inline void Window_mgr::clear(ScreenIndex i){
	if(i>screens.size()) return;
	Screen& s = screens[i];
	s.contents = string(s.height*s.width,' ');
}

inline Screen& Screen::move(pos r,pos c){
	cursor = r*width +c;
	return *this;
}

inline Screen& Screen::set(char c){
	contents[cursor] = c;
	return *this;
}
inline Screen& Screen::set(pos r,pos c,char ch){
	contents[r*width+c] = ch;
	return *this;
}

#endif