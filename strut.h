/*
 * strut.h - strut management header
 *
 * Copyright © 2009 Julien Danjou <julien@danjou.info>
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
 *
 */

#ifndef AWESOME_STRUTS_H
#define AWESOME_STRUTS_H

#include <lua.h>
#include <stdint.h>

/* Strut */
typedef struct
{
    uint16_t left, right, top, bottom;
    uint16_t left_start_y, left_end_y;
    uint16_t right_start_y, right_end_y;
    uint16_t top_start_x, top_end_x;
    uint16_t bottom_start_x, bottom_end_x;
} strut_t;

int luaA_pushstrut(lua_State *, strut_t);

#endif
// vim: filetype=c:expandtab:shiftwidth=4:tabstop=8:softtabstop=4:encoding=utf-8:textwidth=80
