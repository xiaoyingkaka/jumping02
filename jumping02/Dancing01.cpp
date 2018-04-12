// Dancing01.cpp : 定义控制台应用程序的入口点。
//


#include<iostream>
#include"Dancing01.h"
using namespace std;

Dancing01::Dancing01() {

}

 Generate Dancing01::Dance(int boy, int girl) {//when will the boy and girl meet
	int song = 1;
	int boyIndex = 1;
	int girlIndex = 1;

	while (boyIndex != boy || girlIndex != girl) {
		//cout << "Boy " << boyIndex << " is dancing with" << " girl " << girlIndex << " in song " << song << endl;
		boyIndex++;
		girlIndex++;
		if (boyBound > girlBound) {
			if (girlIndex > girlBound) {
				girlIndex = 1;
				song++;
			}
		

			if (boyIndex > boyBound) {
				boyIndex = 1;
			}
		}

		else if (girlBound > boyBound) {
			if (boyIndex > boyBound) {
				boyIndex = 1;
				song++;
			}
				

			if (girlIndex > girlBound)
				girlIndex = 1;


		}

		
	}
	//cout << " Boy " << boyIndex << " finally meet girl " << girlIndex << " in song " << song << endl;
	Generate temp;
	temp.numOfSong = song;

	return temp;
}
 Generate Dancing01::dancing(int song, int boy, int girl) {// in the song k,who is the boy dancing with,and who is the girl dancing with
	 int boyIndex = 1;
	 int girlIndex = 1;
	 int count = 1;

	 while (count < song) {//前一首歌
		 //cout << "Boy" << boyIndex << "is dancing with" << "girl" << girlIndex << " in song" << count << endl;
		 boyIndex++;
		 girlIndex++;
		 if (boyBound > girlBound) {

			 if (girlIndex > girlBound) {
				 girlIndex = 1;
				 count++;
			 }
			 if (boyIndex > boyBound) {
				 boyIndex = 1;
			 }

		 }
		 else if (girlBound > boyBound) {
			 if (boyIndex > boyBound) {
				 boyIndex = 1;
				 count++;
			 }
			 if (girlIndex > girlBound)
				 girlIndex = 1;

		 }
	 }
	 bool result1 = false;
	 bool result2 = false;
	 Generate temp;
	 while (true) {//最后一首歌		
		 if (boyIndex == boy) {
			 //cout << " Boy " << boy << " is dancing with girl " << girlIndex << "in the song" << count << endl;
			 result1 = true;
			 temp.girl = girlIndex;
			 temp.resultone = result1;
		 }
		 if (girlIndex == girl) {
			 //cout << "Girl" << girl << " is dancing with boy " << boyIndex << "in the song" << count << endl;
			 result2 = true;
			 temp.boy = boyIndex;
			 temp.resulttwo = result2;
		 }
		 boyIndex++;
		 girlIndex++;
		 if (boyBound > girlBound) {
			 if (girlIndex > girlBound) {
				 girlIndex = 1;
				 return temp;
				 break;
			 }
			 if (boyIndex > boyBound) {
				 boyIndex = 1;
			 }

		 }
		 else if (girlBound > boyBound) {
			 if (boyIndex > boyBound) {
				 boyIndex = 1;
				 return temp;
				 break;
			 }
			 if (girlIndex > girlBound)
				 girlIndex = 1;
		 }
	 }
 }
	/*
	    if (result1 == false) {
			//cout << " Boy " << boy << " has no partner in the song " << song << endl;
			
		
		}
		if (result2 == false) {
			//cout << " Girl " << girl << " has no partner in the song " << song << endl;
			
		}
}

*/



