#pragma once

struct Generate
	{
		int numOfSong;
		int boy;
		int girl;
		bool resultone = false;
		bool resulttwo = false;
	};



class Dancing01 {
public:
	int boyBound;
	int girlBound;
	int boyIndex=0;
	int girlIndex=0;
	int song;
	Dancing01();
	Generate Dance(int boy, int girl);
	Generate dancing(int song, int boy, int girl);


};