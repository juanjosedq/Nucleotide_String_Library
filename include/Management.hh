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
#include "algo/blast/blastinput/blast_fasta_input.hpp"
#include "algo/blast/blastinput/blast_input.hpp"

class Management{

	public:
		Management()
		/*!
		* This is the constructor of the class Management, it is empty because this is a class of functions .
		* Warning: You cannot create a management object, it doesn't exist.
		*/
	
		FetchNucleotido(NucleoString)
		//! Representing a text file containing sequences in FASTA format.
		/*!
		* FASTA format is a text-based format for representing either nucleotide sequences or peptide sequences
		* in which nucleotides or amino acids are represented using single-letter codes
		*/
	
		txt(string, NucleoString)

#endif // Management_H	
