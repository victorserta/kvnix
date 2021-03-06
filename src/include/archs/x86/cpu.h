/* Copyright (C) 2009 Klystofer Ortega, Victor Villela Serta
   This file is part of Kvnix.

   Kvnix is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as 
   published by the Free Software Foundation, either version 3 of 
   the License, or (at your option) any later version.

   Kvnix is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public 
   License along with Kvnix. If not, see <http://www.gnu.org/licenses/>. 
*/

/**
 * @file
 *
 * Specific routines of the x86 processor.
 */

#ifndef _X86_CPU_H
#define _X86_CPU_H

/**
 * Turn off system
 */
#define CPU_SHUTDOWN()                              	\
      __asm__                                           \
            ("movw	$0x5307, %ax	\n\t"				\
			 "movw	$0x0003, %cx	\n\t"				\
			 "movw	$0x0001, %bx	\n\t"				\
			 "int $0x15				\n\t")                                           

#endif
