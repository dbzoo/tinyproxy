/* tinyproxy - A fast light-weight HTTP proxy
 * Copyright (C) 1998 Steven Young <sdyoung@miranda.org>
 * Copyright (C) 1999 Robert James Kaes <rjkaes@users.sourceforge.net>
 *
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
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

/* See 'main.c' for detailed information. */

#ifndef __MAIN_H__
#define __MAIN_H__

#include "common.h"

/* Global variables for the main controls of the program */
#define MAXBUFFSIZE     ((size_t)(1024 * 96))   /* Max size of buffer */
#define MAX_IDLE_TIME   (60 * 30)       /* 30 minutes of no activity */

/* Global Structures used in the program */
extern struct config_s *config;
extern unsigned int received_sighup;    /* boolean */

extern int reload_config (int reload_logging);

#endif /* __MAIN_H__ */
