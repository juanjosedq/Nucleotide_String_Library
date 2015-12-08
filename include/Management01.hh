/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 */

#ifndef Management_H
#define Management_H

#include "NucleoString.h"
#include "NucleoString.cpp"


class Management{

	public:

		//! Constructor of the class Management, it is empty because this is a class of functions.
		/*!
		* Warning: You cannot create a management object, it doesn't exist.
		*/
		Management(void);
		/*! 
		*This function generates a text from a NucleoString. with a title in the first line and then the 
		*/
		void txt(string, NucleoString)
		/*!
		This function generates a string from a textfile. Warning: This function doesn't read the first line cause it might be the title
		*/
		String loadString(string file)


#endif // Management_H	
