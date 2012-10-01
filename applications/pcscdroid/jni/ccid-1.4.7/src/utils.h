/*
    utils.c:
    Copyright (C) 2003-2009   Ludovic Rousseau

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public License
	along with this library; if not, write to the Free Software Foundation,
	Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

/*
 * $Id: utils.h 4973 2010-06-01 09:43:29Z rousseau $
 */

#ifndef TRUE
#define FALSE 0
#define TRUE 1
#endif

void InitReaderIndex(void);
int GetNewReaderIndex(const int Lun);
int LunToReaderIndex(int Lun);
void ReleaseReaderIndex(const int idx);

