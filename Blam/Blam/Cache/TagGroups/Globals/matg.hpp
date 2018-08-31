#pragma once
#pragma pack(push,1)
#ifndef MATG_H
#define MATG_H
#include "..\..\..\stdafx.h"
#include "..\..\DataTypes\DataTypes.h"
#include "..\..\TagBlocks\Globals\matg.hpp"
#include "..\..\TagGroups.hpp"
using namespace Blam::Cache;
namespace Blam
{
	namespace Cache
	{
		namespace TagGroups
		{
			namespace Globals
			{
				/*********************************************************************
				* name: matg_globals
				* group_tag: matg
				* header size: 644
				*********************************************************************/
				struct matg :TagGroup<'matg'>
				{
					PAD(172);
					Blam::Enums::Tags::TagGroups::matg::Language Language;
					DataTypes::Reflexive<TagBlocks::Globals::havok_cleanup_resources> HavokCleanupResources;
					DataTypes::Reflexive<TagBlocks::Globals::collision_damage> CollisionDamage;
					DataTypes::Reflexive<TagBlocks::Globals::sound_info> SoundInfo;
					DataTypes::Reflexive<TagBlocks::Globals::ai_information>  AiInformation;
					DataTypes::Reflexive<TagBlocks::Globals::damage_table> DamageTable;
					PAD(8);
					DataTypes::Reflexive<TagBlocks::Globals::Sounds_Obsolete> SoundsObselete;
					DataTypes::Reflexive<TagBlocks::Globals::camera> Camera;
					DataTypes::Reflexive<TagBlocks::Globals::player_control> PlayerControl;
					DataTypes::Reflexive<TagBlocks::Globals::difficulty> Difficulty;
					DataTypes::Reflexive<TagBlocks::Globals::grenades> Grenades;
					DataTypes::Reflexive<TagBlocks::Globals::rasterizer_data> RasterizerData;
					DataTypes::Reflexive<TagBlocks::Globals::interface_tag_refernces> InterfaceTagRefernces;
					DataTypes::Reflexive<TagBlocks::Globals::weapon_list_to_do_with_hard_coded_enum> WeaponListToDoWithHardCodedEnum;
					DataTypes::Reflexive<TagBlocks::Globals::cheat_powerups> CheatPowerups;
					DataTypes::Reflexive<TagBlocks::Globals::multiplayer_information> MultiplayerInformationdepricated;
					DataTypes::Reflexive<TagBlocks::Globals::player_information> PlayerInformation;
					DataTypes::Reflexive<TagBlocks::Globals::player_representation> PlayerRepresentation;
					DataTypes::Reflexive<TagBlocks::Globals::falling_damage> fallingDamage;
					DataTypes::Reflexive<TagBlocks::Globals::old_materials> OldMaterials;
					DataTypes::Reflexive<TagBlocks::Globals::materials> Materials;
					DataTypes::Reflexive<TagBlocks::Globals::multiplayer_ui_obselete> MultiplayerUIobsolete;
					DataTypes::Reflexive<TagBlocks::Globals::profile_colors> ProfileColors;
					DataTypes::tagRef MultiplayerGlobals;
					DataTypes::Reflexive<TagBlocks::Globals::runtime_level_data> RuntimeLevelData;
					DataTypes::Reflexive<TagBlocks::Globals::ui_level_data> UILevelData;
					DataTypes::tagRef defaultGlobalLighting;
					PAD(8);
					int englishStringCount;
					int englishStringTableSize;
					int englishStringIndexOffset;
					int englishStringTableOffset;
					int unknownEng;
					PAD(8);
					int japaneseStringCount;
					int japaneseStringTableSize;
					int japaneseStringIndexOffset;
					int japaneseStringTableOffset;
					int unknownJp;
					PAD(8);
					int dutchStringCount;
					int dutchStringTableSize;
					int dutchStringIndexOffset;
					int dutchStringTableOffset;
					int unknownDut;
					PAD(8);
					int frenchStringCount;
					int frenchStringTableSize;
					int frenchStringIndexOffset;
					int frenchStringTableOffset;
					int unknownFr;
					PAD(8);
					int spanishStringCount;
					int spanishStringTableSize;
					int spanishStringIndexOffset;
					int spanishStringTableOffset;
					int unknownSpan;
					PAD(8);
					int italianStringCount;
					int italianStringTableSize;
					int italianStringIndexOffset;
					int italianStringTableOffset;
					int unknownItly;
					PAD(8);
					int koreanStringCount;
					int koreanStringTableSize;
					int koreanStringIndexOffset;
					int koreanStringTableOffset;
					int unknownKor;
					PAD(8);
					int chineseStringCount;
					int chineseStringTableSize;
					int chineseStringIndexOffset;
					int chineseStringTableOffset;
					int unknownChin;
					PAD(8);
					int portugueseStringCount;
					int portugueseStringTableSize;
					int portugueseStringIndexOffset;
					int portugueseStringTableOffset;
					int unknownPor;					
				};
				TAG_GROUP_SIZE_ASSERT(matg, 644);
			}
		}

	}

}
#pragma pack(pop)
#endif
