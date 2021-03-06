/*===========================================================================*
 *                                                                           *
 *  sflmesg.h - Error message access functions                               *
 *                                                                           *
 *  Copyright (c) 1991-2010 iMatix Corporation                               *
 *                                                                           *
 *  ------------------ GPL Licensed Source Code ------------------           *
 *  iMatix makes this software available under the GNU General               *
 *  Public License (GPL) license for open source projects.  For              *
 *  details of the GPL license please see www.gnu.org or read the            *
 *  file license.gpl provided in this package.                               *
 *                                                                           *
 *  This program is free software; you can redistribute it and/or            *
 *  modify it under the terms of the GNU General Public License as           *
 *  published by the Free Software Foundation; either version 3 of           *
 *  the License, or (at your option) any later version.                      *
 *                                                                           *
 *  This program is distributed in the hope that it will be useful,          *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            *
 *  GNU General Public License for more details.                             *
 *                                                                           *
 *  You should have received a copy of the GNU General Public                *
 *  License along with this program in the file 'license.gpl'; if            *
 *  not, see <http://www.gnu.org/licenses/>.                                 *
 *                                                                           *
 *  You can also license this software under iMatix's General Terms          *
 *  of Business (GTB) for commercial projects.  If you have not              *
 *  explicitly licensed this software under the iMatix GTB you may           *
 *  only use it under the terms of the GNU General Public License.           *
 *                                                                           *
 *  For more information, send an email to info@imatix.com.                  *
 *  --------------------------------------------------------------           *
 *===========================================================================*/
/*  ----------------------------------------------------------------<Prolog>-
    Synopsis:   Provides functions to read and format messages from a message
                file.  The intention of such a file is to provide a single
                location for all error messages: you can easier translate
                these into foreign languages, and you can control the
                consistency of an application's error messages.
 ------------------------------------------------------------------</Prolog>-*/

#ifndef SFLMESG_INCLUDED               /*  Allow multiple inclusions        */
#define SFLMESG_INCLUDED


/*  Function prototypes                                                      */

#ifdef __cplusplus
extern "C" {
#endif

int    open_message_file   (const char *filename);
void   close_message_file  (void);
void   print_message       (int msgid, ...);
char  *message_text        (int msgid);

#ifdef __cplusplus
}
#endif

/*  Symbols, macros                                                          */

#define ERROR_ANY       0000            /*  Generic error message            */

#endif
