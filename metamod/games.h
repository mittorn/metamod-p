// vi: set ts=4 sw=4 :
// vim: set tw=75 :
 
// games.h - list of supported game mods and their data
 
/*
 * Copyright (c) 2001-2013 Will Day <willday@hpgx.net>
 *
 *    This file is part of Metamod.
 *
 *    Metamod is free software; you can redistribute it and/or modify it
 *    under the terms of the GNU General Public License as published by the
 *    Free Software Foundation; either version 2 of the License, or (at
 *    your option) any later version.
 *
 *    Metamod is distributed in the hope that it will be useful, but
 *    WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with Metamod; if not, write to the Free Software Foundation,
 *    Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *    In addition, as a special exception, the author gives permission to
 *    link the code of this program with the Half-Life Game Engine ("HL
 *    Engine") and Modified Game Libraries ("MODs") developed by Valve,
 *    L.L.C ("Valve").  You must obey the GNU General Public License in all
 *    respects for all of the code used other than the HL Engine and MODs
 *    from Valve.  If you modify this file, you may extend this exception
 *    to your version of the file, but you are not obligated to do so.  If
 *    you do not wish to do so, delete this exception statement from your
 *    version.
 *
 */
 
// This list is now kept in a separate file to facilitate generating the
// list from game data stored in a convenient db.
#if defined(__x86_64__) || defined(__amd64__)

const game_modlist_t known_games = {
	{ "action",            "ahl__amd64.so",          "ahl.dll",           "Action Half-Life" },
	{ "ag",                "ag__amd64.so",           "ag.dll",            "Adrenaline Gamer Steam" },
	{ "ag3",               "hl__amd64.so",           "hl.dll",            "Adrenalinegamer 3.x" },
	{ "aghl",              "ag__amd64.so",           "ag.dll",            "Adrenalinegamer 4.x" },
	{ "arg",               "arg__amd64.so",          "hl.dll",            "Arg!" },
	{ "asheep",            "hl__amd64.so",           "hl.dll",            "Azure Sheep" },
	{ "bg",                "bg__amd64.so",           "bg.dll",            "The Battle Grounds" },
	{ "bot",               "bot__amd64.so",          "bot.dll",           "Bot" },
	{ "brainbread",        "bb__amd64.so",           "bb.dll",            "Brain Bread" },
	{ "bumpercars",        "hl__amd64.so",           "hl.dll",            "Bumper Cars" },
	{ "buzzybots",         "bb__amd64.so",           "bb.dll",            "BuzzyBots" },
	{ "cs13",              "cs__amd64.so",           "mp.dll",            "Counter-Strike 1.3" },
	{ "cstrike",           "cs__amd64.so",           "mp.dll",            "Counter-Strike" },
	{ "csv15",             "cs__amd64.so",           "mp.dll",            "CS 1.5 for Steam" },
	{ "czero",             "cs__amd64.so",           "mp.dll",            "Counter-Strike:Condition Zero" },
	{ "dcrisis",           "dc__amd64.so",           "dc.dll",            "Desert Crisis" },
	{ "dmc",               "dmc__amd64.so",          "dmc.dll",           "Deathmatch Classic" },
	{ "dod",               "dod__amd64.so",          "dod.dll",           "Day of Defeat" },
	{ "dpb",               "pb._amd64.so",               "pb.dll",            "Digital Paintball" },
	{ "dragonmodz",        "hl__amd64.so",           "mp.dll",            "Dragon Mod Z" },
	{ "esf",               "hl__amd64.so",           "hl.dll",            "Earth's Special Forces" },
	{ "existence",         "ex__amd64.so",           "existence.dll",     "Existence" },
	{ "firearms",          "fa__amd64.so",           "firearms.dll",      "Firearms" },
	{ "firearms25",        "fa__amd64.so",           "firearms.dll",      "Retro Firearms" },
	{ "freeze",            "mp__amd64.so",           "mp.dll",            "Freeze" },
	{ "frontline",         "front__amd64.so",        "frontline.dll",     "Frontline Force" },
	{ "gangstawars",       "gangsta__amd64.so",      "gwars27.dll",       "Gangsta Wars" },
	{ "gangwars",          "mp__amd64.so",           "mp.dll",            "Gangwars" },
	{ "gearbox",           "opfor__amd64.so",        "opfor.dll",         "Opposing Force" },
	{ "globalwarfare",     "gw__amd64.so",           "mp.dll",            "Global Warfare" },
	{ "goldeneye",         "golden__amd64.so",       "mp.dll",            "Goldeneye" },
	{ "hl15we",            "hl__amd64.so",           "hl.dll",            "Half-Life 1.5: Weapon Edition" },
	{ "hlrally",           "hlr__amd64.so",          "hlrally.dll",       "HL-Rally" },
	{ "holywars",          "hl__amd64.so",           "holywars.dll",      "Holy Wars" },
	{ "hostileintent",     "hl__amd64.so",           "hl.dll",            "Hostile Intent" },
	{ "ios",               "ios__amd64.so",          "ios.dll",           "International Online Soccer" },
	{ "judgedm",           "judge__amd64.so",        "mp.dll",            "Judgement" },
	{ "kanonball",         "hl__amd64.so",           "kanonball.dll",     "Kanonball" },
	{ "monkeystrike",      "ms__amd64.so",           "monkey.dll",        "Monkeystrike" },
	{ "MorbidPR",          "morbid__amd64.so",       "morbid.dll",        "Morbid Inclination" },
	{ "movein",            "hl__amd64.so",           "hl.dll",            "Move In!" },
	{ "ns",                "ns__amd64.so",           "ns.dll",            "Natural Selection" },
	{ "nsp",               "ns__amd64.so",           "ns.dll",            "Natural Selection Beta" },
	{ "oel",               "hl__amd64.so",           "hl.dll",            "OeL Half-Life" },
	{ "og",                "og__amd64.so",           "og.dll",            "Over Ground" },
	{ "ol",                "ol__amd64.so",           "hl.dll",            "Outlawsmod" },
	{ "ops1942",           "spirit__amd64.so",       "spirit.dll",        "Operations 1942" },
	{ "osjb",              "osjb__amd64.so",         "jail.dll",          "Open-Source Jailbreak" },
	{ "outbreak",          "none",                     "hl.dll",            "Out Break" },
	{ "oz",                "mp__amd64.so",           "mp.dll",            "Oz Deathmatch" },
	{ "paintball",         "pb__amd64.so",           "mp.dll",            "Paintball" },
	{ "penemy",            "pe__amd64.so",           "pe.dll",            "Public Enemy" },
	{ "phineas",           "phineas__amd64.so",      "phineas.dll",       "Phineas Bot" },
	{ "ponreturn",         "ponr__amd64.so",         "mp.dll",            "Point of No Return" },
	{ "pvk",               "hl__amd64.so",           "hl.dll",            "Pirates, Vikings and Knights" },
	{ "rc2",               "rc2__amd64.so",          "rc2.dll",           "Rocket Crowbar 2" },
	{ "retrocs",           "rcs__amd64.so",          "rcs.dll",           "Retro Counter-Strike" },
	{ "rewolf",            "hl__amd64.so",           "gunman.dll",        "Gunman Chronicles" },
	{ "ricochet",          "ricochet__amd64.so",     "mp.dll",            "Ricochet" },
	{ "rockcrowbar",       "rc__amd64.so",           "rc.dll",            "Rocket Crowbar" },
	{ "rspecies",          "hl__amd64.so",           "hl.dll",            "Rival Species" },
	{ "scihunt",           "shunt.so",                 "shunt.dll",         "Scientist Hunt" },
	{ "sdm",               "sdmmod__amd64.so",       "sdmmod.dll",        "Special Death Match" },
	{ "Ship",              "ship__amd64.so",         "ship.dll",          "The Ship" },
	{ "si",                "si__amd64.so",           "si.dll",            "Science & Industry" },
	{ "snow",              "snow__amd64.so",         "snow.dll",          "Snow-War" },
	{ "stargatetc",        "hl__amd64.so",           "hl.dll",            "StargateTC" },
	{ "svencoop",          "hl__amd64.so",           "hl.dll",            "Sven Coop" },
	{ "swarm",             "swarm__amd64.so",        "swarm.dll",         "Swarm" },
	{ "tfc",               "tfc__amd64.so",          "tfc.dll",           "Team Fortress Classic" },
	{ "thewastes",         "thewastes__amd64.so",    "thewastes.dll",     "The Wastes" },
	{ "timeless",          "pt__amd64.so",           "timeless.dll",      "Project Timeless" },
	{ "tod",               "hl__amd64.so",           "hl.dll",            "Tour of Duty" },
	{ "trainhunters",      "th__amd64.so",           "th.dll",            "Train Hunters" },
	{ "trevenge",          "trevenge.so",              "trevenge.dll",      "The Terrorist Revenge" },
	{ "TS",                "ts__amd64.so",           "mp.dll",            "The Specialists" },
	{ "tt",                "tt__amd64.so",           "tt.dll",            "The Trenches" },
	{ "underworld",        "uw__amd64.so",           "uw.dll",            "Underworld Bloodline" },
	{ "valve",             "hl__amd64.so",           "hl.dll",            "Half-Life Deathmatch" },
	{ "vs",                "vs__amd64.so",           "mp.dll",            "VampireSlayer" },
	{ "wantedhl",          "hl__amd64.so",           "wanted.dll",        "Wanted!" },
	{ "wasteland",         "whl_linux.so",             "mp.dll",            "Wasteland" },
	{ "weapon_wars",       "ww__amd64.so",           "hl.dll",            "Weapon Wars" },
	{ "wizwars",           "mp__amd64.so",           "hl.dll",            "Wizard Wars" },
	{ "wormshl",           "wormshl_i586.so",          "wormshl.dll",       "WormsHL" },
	{ "zp",                "none",                     "mp.dll",            "Zombie Panic" },
	{ NULL, NULL, NULL, NULL }
};
#else


const game_modlist_t known_games = {
	{ "action",            "ahl_i386.so",          "ahl.dll",           "Action Half-Life" },
	{ "ag",                "ag_i386.so",           "ag.dll",            "Adrenaline Gamer Steam" },
	{ "ag3",               "hl_i386.so",           "hl.dll",            "Adrenalinegamer 3.x" },
	{ "aghl",              "ag_i386.so",           "ag.dll",            "Adrenalinegamer 4.x" },
	{ "arg",               "arg_i386.so",          "hl.dll",            "Arg!" },
	{ "asheep",            "hl_i386.so",           "hl.dll",            "Azure Sheep" },
	{ "bg",                "bg_i386.so",           "bg.dll",            "The Battle Grounds" },
	{ "bot",               "bot_i386.so",          "bot.dll",           "Bot" },
	{ "brainbread",        "bb_i386.so",           "bb.dll",            "Brain Bread" },
	{ "bumpercars",        "hl_i386.so",           "hl.dll",            "Bumper Cars" },
	{ "buzzybots",         "bb_i386.so",           "bb.dll",            "BuzzyBots" },
	{ "cs13",              "cs_i386.so",           "mp.dll",            "Counter-Strike 1.3" },
	{ "cstrike",           "cs_i386.so",           "mp.dll",            "Counter-Strike" },
	{ "csv15",             "cs_i386.so",           "mp.dll",            "CS 1.5 for Steam" },
	{ "czero",             "cs_i386.so",           "mp.dll",            "Counter-Strike:Condition Zero" },
	{ "dcrisis",           "dc_i386.so",           "dc.dll",            "Desert Crisis" },
	{ "dmc",               "dmc_i386.so",          "dmc.dll",           "Deathmatch Classic" },
	{ "dod",               "dod_i386.so",          "dod.dll",           "Day of Defeat" },
	{ "dpb",               "pb.i386.so",               "pb.dll",            "Digital Paintball" },
	{ "dragonmodz",        "hl_i386.so",           "mp.dll",            "Dragon Mod Z" },
	{ "esf",               "hl_i386.so",           "hl.dll",            "Earth's Special Forces" },
	{ "existence",         "ex_i386.so",           "existence.dll",     "Existence" },
	{ "firearms",          "fa_i386.so",           "firearms.dll",      "Firearms" },
	{ "firearms25",        "fa_i386.so",           "firearms.dll",      "Retro Firearms" },
	{ "freeze",            "mp_i386.so",           "mp.dll",            "Freeze" },
	{ "frontline",         "front_i386.so",        "frontline.dll",     "Frontline Force" },
	{ "gangstawars",       "gangsta_i386.so",      "gwars27.dll",       "Gangsta Wars" },
	{ "gangwars",          "mp_i386.so",           "mp.dll",            "Gangwars" },
	{ "gearbox",           "opfor_i386.so",        "opfor.dll",         "Opposing Force" },
	{ "globalwarfare",     "gw_i386.so",           "mp.dll",            "Global Warfare" },
	{ "goldeneye",         "golden_i386.so",       "mp.dll",            "Goldeneye" },
	{ "hl15we",            "hl_i386.so",           "hl.dll",            "Half-Life 1.5: Weapon Edition" },
	{ "hlrally",           "hlr_i386.so",          "hlrally.dll",       "HL-Rally" },
	{ "holywars",          "hl_i386.so",           "holywars.dll",      "Holy Wars" },
	{ "hostileintent",     "hl_i386.so",           "hl.dll",            "Hostile Intent" },
	{ "ios",               "ios_i386.so",          "ios.dll",           "International Online Soccer" },
	{ "judgedm",           "judge_i386.so",        "mp.dll",            "Judgement" },
	{ "kanonball",         "hl_i386.so",           "kanonball.dll",     "Kanonball" },
	{ "monkeystrike",      "ms_i386.so",           "monkey.dll",        "Monkeystrike" },
	{ "MorbidPR",          "morbid_i386.so",       "morbid.dll",        "Morbid Inclination" },
	{ "movein",            "hl_i386.so",           "hl.dll",            "Move In!" },
	{ "ns",                "ns_i386.so",           "ns.dll",            "Natural Selection" },
	{ "nsp",               "ns_i386.so",           "ns.dll",            "Natural Selection Beta" },
	{ "oel",               "hl_i386.so",           "hl.dll",            "OeL Half-Life" },
	{ "og",                "og_i386.so",           "og.dll",            "Over Ground" },
	{ "ol",                "ol_i386.so",           "hl.dll",            "Outlawsmod" },
	{ "ops1942",           "spirit_i386.so",       "spirit.dll",        "Operations 1942" },
	{ "osjb",              "osjb_i386.so",         "jail.dll",          "Open-Source Jailbreak" },
	{ "outbreak",          "none",                     "hl.dll",            "Out Break" },
	{ "oz",                "mp_i386.so",           "mp.dll",            "Oz Deathmatch" },
	{ "paintball",         "pb_i386.so",           "mp.dll",            "Paintball" },
	{ "penemy",            "pe_i386.so",           "pe.dll",            "Public Enemy" },
	{ "phineas",           "phineas_i386.so",      "phineas.dll",       "Phineas Bot" },
	{ "ponreturn",         "ponr_i386.so",         "mp.dll",            "Point of No Return" },
	{ "pvk",               "hl_i386.so",           "hl.dll",            "Pirates, Vikings and Knights" },
	{ "rc2",               "rc2_i386.so",          "rc2.dll",           "Rocket Crowbar 2" },
	{ "retrocs",           "rcs_i386.so",          "rcs.dll",           "Retro Counter-Strike" },
	{ "rewolf",            "hl_i386.so",           "gunman.dll",        "Gunman Chronicles" },
	{ "ricochet",          "ricochet_i386.so",     "mp.dll",            "Ricochet" },
	{ "rockcrowbar",       "rc_i386.so",           "rc.dll",            "Rocket Crowbar" },
	{ "rspecies",          "hl_i386.so",           "hl.dll",            "Rival Species" },
	{ "scihunt",           "shunt.so",                 "shunt.dll",         "Scientist Hunt" },
	{ "sdm",               "sdmmod_i386.so",       "sdmmod.dll",        "Special Death Match" },
	{ "Ship",              "ship_i386.so",         "ship.dll",          "The Ship" },
	{ "si",                "si_i386.so",           "si.dll",            "Science & Industry" },
	{ "snow",              "snow_i386.so",         "snow.dll",          "Snow-War" },
	{ "stargatetc",        "hl_i386.so",           "hl.dll",            "StargateTC" },
	{ "svencoop",          "hl_i386.so",           "hl.dll",            "Sven Coop" },
	{ "swarm",             "swarm_i386.so",        "swarm.dll",         "Swarm" },
	{ "tfc",               "tfc_i386.so",          "tfc.dll",           "Team Fortress Classic" },
	{ "thewastes",         "thewastes_i386.so",    "thewastes.dll",     "The Wastes" },
	{ "timeless",          "pt_i386.so",           "timeless.dll",      "Project Timeless" },
	{ "tod",               "hl_i386.so",           "hl.dll",            "Tour of Duty" },
	{ "trainhunters",      "th_i386.so",           "th.dll",            "Train Hunters" },
	{ "trevenge",          "trevenge.so",              "trevenge.dll",      "The Terrorist Revenge" },
	{ "TS",                "ts_i386.so",           "mp.dll",            "The Specialists" },
	{ "tt",                "tt_i386.so",           "tt.dll",            "The Trenches" },
	{ "underworld",        "uw_i386.so",           "uw.dll",            "Underworld Bloodline" },
	{ "valve",             "hl_i386.so",           "hl.dll",            "Half-Life Deathmatch" },
	{ "vs",                "vs_i386.so",           "mp.dll",            "VampireSlayer" },
	{ "wantedhl",          "hl_i386.so",           "wanted.dll",        "Wanted!" },
	{ "wasteland",         "whl_linux.so",             "mp.dll",            "Wasteland" },
	{ "weapon_wars",       "ww_i386.so",           "hl.dll",            "Weapon Wars" },
	{ "wizwars",           "mp_i386.so",           "hl.dll",            "Wizard Wars" },
	{ "wormshl",           "wormshl_i586.so",          "wormshl.dll",       "WormsHL" },
	{ "zp",                "none",                     "mp.dll",            "Zombie Panic" },
	{ NULL, NULL, NULL, NULL }
};


#endif
