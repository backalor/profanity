/*
 * muc.h
 *
 * Copyright (C) 2012, 2013 James Booth <boothj5@gmail.com>
 *
 * This file is part of Profanity.
 *
 * Profanity is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Profanity is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Profanity.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef MUC_H
#define MUC_H

#include <glib.h>

#include "prof_autocomplete.h"

void muc_join_room(const char * const room, const char * const nick);
void muc_leave_room(const char * const room);
gboolean muc_room_is_active(const char * const full_room_jid);
GList* muc_get_active_room_list(void);
char * muc_get_room_nick(const char * const room);

void muc_set_room_pending_nick_change(const char * const room);
gboolean muc_is_room_pending_nick_change(const char * const room);
void muc_complete_room_nick_change(const char * const room,
    const char * const nick);

gboolean muc_add_to_roster(const char * const room, const char * const nick,
    const char * const show, const char * const status);
void muc_remove_from_roster(const char * const room, const char * const nick);
GList * muc_get_roster(const char * const room);
PAutocomplete muc_get_roster_ac(const char * const room);
gboolean muc_nick_in_roster(const char * const room, const char * const nick);
void muc_set_roster_received(const char * const room);
gboolean muc_get_roster_received(const char * const room);

void muc_set_roster_pending_nick_change(const char * const room,
    const char * const new_nick, const char * const old_nick);
char* muc_complete_roster_nick_change(const char * const room,
    const char * const nick);

#endif
