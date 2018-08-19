/*
Copyright (C) 1996-1997 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#ifndef DRAW_H
#define DRAW_H

#include "qpic.h"
#include "qtypes.h"

// draw.h -- these are the only functions outside the refresh allowed
// to touch the vid buffer

extern const qpic8_t *draw_disc;  // also used on sbar
extern const byte *draw_chars;

void Draw_Init(void);
void Draw_Character(int x, int y, int num);
void Draw_Pic(int x, int y, const qpic8_t *pic);
void Draw_TransPic(int x, int y, const qpic8_t *pic);
void Draw_TransPicTranslate(int x, int y, const qpic8_t *pic, byte *translation);
void Draw_ConsoleBackground(int lines);
void Draw_BeginDisc(void);
void Draw_EndDisc(void);
void Draw_TileClear(int x, int y, int w, int h);
void Draw_Fill(int x, int y, int w, int h, int c);
void Draw_FadeScreen(void);
void Draw_String(int x, int y, const char *str);
const qpic8_t *Draw_PicFromWad(const char *name);
const qpic8_t *Draw_CachePic(const char *path);

void Draw_Alt_String(int x, int y, const char *str);
void Draw_Crosshair(void);
void Draw_SubPic(int x, int y, const qpic8_t *pic, int srcx, int srcy, int width, int height);

#endif /* DRAW_H */
