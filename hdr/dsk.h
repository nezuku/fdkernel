/****************************************************************/
/*                                                              */
/*                           dsk.h                              */
/*                      Disk access Header File                 */
/*                                                              */
/*                      Copyright (c) 2012                      */
/*                      FreeDOS                                 */
/*                      All Rights Reserved                     */
/*                                                              */
/* This file is part of DOS-C.                                  */
/*                                                              */
/* DOS-C is free software; you can redistribute it and/or       */
/* modify it under the terms of the GNU General Public License  */
/* as published by the Free Software Foundation; either version */
/* 2, or (at your option) any later version.                    */
/*                                                              */
/* DOS-C is distributed in the hope that it will be useful, but */
/* WITHOUT ANY WARRANTY; without even the implied warranty of   */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See    */
/* the GNU General Public License for more details.             */
/*                                                              */
/* You should have received a copy of the GNU General Public    */
/* License along with DOS-C; see the file COPYING.  If not,     */
/* write to the Free Software Foundation, 675 Mass Ave,         */
/* Cambridge, MA 02139, USA.                                    */
/****************************************************************/


#ifndef MAX_SEC_SIZE
# if defined(NEC98)
#define MAX_SEC_SIZE    (4*512) /* max supported size of sector in bytes */
# else
#define MAX_SEC_SIZE    (1*512) /* max supported size of sector in bytes */
# endif
#endif

#if defined(NEC98)
#define LBA_CYLINDER_MAX  65535UL
#else
#define LBA_CYLINDER_MAX  1023UL
#endif

#ifndef BIG_SECTOR
# if (MAX_SEC_SIZE) > 512
#  define BIG_SECTOR (1)
# else
#  define BIG_SECTOR (0)
# endif
#endif

