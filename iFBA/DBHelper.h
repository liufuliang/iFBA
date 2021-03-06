/*
 *  DBHelper.h
 *  modizer
 *
 *  Created by Yohann Magnien on 23/08/10.
 *  Copyright 2010 __YoyoFR / Yohann Magnien__. All rights reserved.
 *
 */
#ifndef st_DBHelper_h_
#define st_DBHelper_h_

namespace DBHelper 
{
	void getGameInfo(const char *gameName,char *gameInfo);
    void setGameStats(const char *gameName,int playCount,int fav,char *lastPlayed,int playTime);
    void getGameStats(const char *gameName,int *playCount,int *fav,char *lastPlayed,int *playTime);
    
    void createDB();
}

#endif
