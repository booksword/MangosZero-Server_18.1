/**
 * ScriptDev2 is an extension for mangos-zero providing enhanced features for
 * area triggers, creatures, game objects, instances, items, and spells beyond
 * the default database scripting in mangos-zero.
 *
 * Copyright (C) 2006-2013  ScriptDev2 <http://www.scriptdev2.com/>
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * World of Warcraft, and all World of Warcraft or Warcraft art, images,
 * and lore are copyrighted by Blizzard Entertainment, Inc.
 */

#ifndef SC_PRECOMPILED_H
#define SC_PRECOMPILED_H

#include "ScriptDevMgr.h"
#include "Object.h"
#include "Unit.h"
#include "Creature.h"
#include "CreatureAI.h"
#include "GameObject.h"
#include "sc_creature.h"
#include "sc_gossip.h"
#include "sc_grid_searchers.h"
#include "sc_instance.h"
#include "SpellAuras.h"

#ifdef WIN32
#  include <windows.h>
BOOL APIENTRY DllMain(HANDLE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    return true;
}
#endif

// sc_gossip.h:             ADD_GOSSIP_ITEM_EXTENDED outcommented box-money (Required until professions are fixed)
// sc_creature.cpp:         Used in ScriptedAI::SelectSpell, outcommented SchoolMask

#endif
