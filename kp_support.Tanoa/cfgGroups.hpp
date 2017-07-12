class CfgGroups
{
	class West
	{
		name = $STR_A3_CfgGroups_West0;
		side = 1;
		class BLU_F
		{
			name = $STR_A3_CfgGroups_West_BLU_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class KP_Support_B4
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_reconteam0;
					side = 1;
					faction = BLU_F;
					class Unit0		{side = 1; vehicle = B_T_Recon_TL_F; rank = "SERGEANT";};
					class Unit1		{side = 1; vehicle = B_T_Recon_Medic_F; rank = "CORPORAL";};
					class Unit2		{side = 1; vehicle = B_T_Recon_F; rank = "PRIVATE";};
					class Unit3		{side = 1; vehicle = B_T_Recon_M_F; rank = "PRIVATE";};
				};
				class KP_Support_B8
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_infsquad0;
					side = 1;
					faction = BLU_F;
					class Unit0		{side = 1; vehicle = B_T_Soldier_SL_F; rank = "SERGEANT";};
					class Unit1		{side = 1; vehicle = B_T_Soldier_TL_F; rank = "SERGEANT";};
					class Unit2		{side = 1; vehicle = B_T_Soldier_GL_F; rank = "CORPORAL";};
					class Unit3		{side = 1; vehicle = B_T_Soldier_LAT_F; rank = "PRIVATE";};
					class Unit4		{side = 1; vehicle = B_T_Soldier_F; rank = "PRIVATE";};
					class Unit5		{side = 1; vehicle = B_T_Medic_F; rank = "CORPORAL";};
					class Unit6 	{side = 1; vehicle = B_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit7 	{side = 1; vehicle = B_T_Soldier_AR_F; rank = "PRIVATE";};
				};
				class KP_Support_B16
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_infsquad0;
					side = 1;
					faction = BLU_F;
					class Unit0 	{side = 1; vehicle = B_T_Soldier_SL_F; rank = "SERGEANT";};
					class Unit1 	{side = 1; vehicle = B_T_Soldier_TL_F; rank = "SERGEANT";};
					class Unit2 	{side = 1; vehicle = B_T_Soldier_GL_F; rank = "CORPORAL";};
					class Unit3 	{side = 1; vehicle = B_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit4 	{side = 1; vehicle = B_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit5 	{side = 1; vehicle = B_T_Soldier_LAT_F; rank = "CORPORAL";};
					class Unit6 	{side = 1; vehicle = B_T_Medic_F; rank = "PRIVATE";};
					class Unit7 	{side = 1; vehicle = B_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit8 	{side = 1; vehicle = B_T_Soldier_GL_F; rank = "CORPORAL";};
					class Unit9 	{side = 1; vehicle = B_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit10	{side = 1; vehicle = B_T_Soldier_F; rank = "PRIVATE";};
					class Unit11	{side = 1; vehicle = B_T_Soldier_LAT_F; rank = "CORPORAL";};
					class Unit12	{side = 1; vehicle = B_T_Medic_F; rank = "PRIVATE";};
					class Unit13	{side = 1; vehicle = B_T_Soldier_F; rank = "PRIVATE";};
					class Unit14	{side = 1; vehicle = B_T_Soldier_AT_F; rank = "CORPORAL";};
					class Unit15	{side = 1; vehicle = B_T_Soldier_AT_F; rank = "PRIVATE";};
				};
				class KP_Support_BAT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = 1;
					faction = BLU_F;
					class Unit0		{side = 1; vehicle = B_T_Soldier_TL_F; rank = "SERGEANT";};
					class Unit1		{side = 1; vehicle = B_T_Soldier_AT_F; rank = "SERGEANT";};
					class Unit2		{side = 1; vehicle = B_T_Soldier_AT_F; rank = "PRIVATE";};
					class Unit3		{side = 1; vehicle = B_T_Soldier_F; rank = "PRIVATE";};
				};
				class KP_Support_BAA
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_infteam_aa0;
					side = 1;
					faction = BLU_F;
					class Unit0		{side = 1; vehicle = B_T_Soldier_TL_F; rank = "SERGEANT";};
					class Unit1		{side = 1; vehicle = B_T_Soldier_AA_F; rank = "SERGEANT";};
					class Unit2		{side = 1; vehicle = B_T_Soldier_AA_F; rank = "PRIVATE";};
					class Unit3		{side = 1; vehicle = B_T_Soldier_F; rank = "PRIVATE";};
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class KP_Support_BMotInf_AT
				{
					name = $str_a3_cfggroups_west_blu_f_motorized_bus_motinf_at0;
					side = 1;
					faction = BLU_F;
					class Unit0		{side = 1; vehicle = B_T_LSV_01_unarmed_F; rank = "SERGEANT";};
					class Unit1		{side = 1; vehicle = B_T_Soldier_AT_F; rank = "CORPORAL";};
					class Unit2		{side = 1; vehicle = B_T_Soldier_AT_F; rank = "CORPORAL";};
					class Unit3		{side = 1; vehicle = B_T_Soldier_AR_F; rank = "PRIVATE";};
				};
				class KP_Support_BMotInf_GMG
				{
					name = $str_a3_cfggroups_west_blu_f_motorized_bus_motinf_team0;
					side = 1;
					faction = BLU_F;
					class Unit0		{side = 1; vehicle = B_T_MRAP_01_gmg_F; rank = "SERGEANT";};
					class Unit1		{side = 1; vehicle = B_T_Soldier_F; rank = "CORPORAL";};
					class Unit2		{side = 1; vehicle = B_T_Soldier_F; rank = "PRIVATE";};
				};
				class KP_Support_BMotInf_HMG
				{
					name = $str_a3_cfggroups_west_blu_f_motorized_bus_motinf_team0;
					side = 1;
					faction = BLU_F;
					class Unit0		{side = 1; vehicle = B_T_LSV_01_armed_F; rank = "SERGEANT";};
					class Unit1		{side = 1; vehicle = B_T_Soldier_F; rank = "CORPORAL";};
					class Unit2		{side = 1; vehicle = B_T_Soldier_F; rank = "PRIVATE";};
				};
			};
			class Mechanized
			{
				name = $str_a3_cfggroups_west_blu_f_mechanized0;
				class KP_Support_BMechL
				{
					name = $str_a3_cfggroups_west_blu_f_mechanized_bus_mechinfsquad0;
					side = 1;
					faction = BLU_F;
					class Unit0		{side = 1; vehicle = B_T_APC_Wheeled_01_cannon_F; rank = "SERGEANT";};
					class Unit1		{side = 1; vehicle = B_T_Soldier_SL_F; rank = "SERGEANT";};
					class Unit2		{side = 1; vehicle = B_T_Soldier_TL_F; rank = "SERGEANT";};
					class Unit3		{side = 1; vehicle = B_T_Soldier_GL_F; rank = "CORPORAL";};
					class Unit4		{side = 1; vehicle = B_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit5		{side = 1; vehicle = B_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit6		{side = 1; vehicle = B_T_Soldier_LAT_F; rank = "CORPORAL";};
					class Unit7		{side = 1; vehicle = B_T_Medic_F; rank = "PRIVATE";};
					class Unit8		{side = 1; vehicle = B_T_Soldier_F; rank = "PRIVATE";};
				};
				class KP_Support_BMechH
				{
					name = $str_a3_cfggroups_west_blu_f_mechanized_bus_mechinfsquad0;
					side = 1;
					faction = BLU_F;
					class Unit0		{side = 1; vehicle = B_T_APC_Tracked_01_rcws_F; rank = "SERGEANT";};
					class Unit1		{side = 1; vehicle = B_T_Soldier_SL_F; rank = "SERGEANT";};
					class Unit2		{side = 1; vehicle = B_T_Soldier_TL_F; rank = "SERGEANT";};
					class Unit3		{side = 1; vehicle = B_T_Soldier_GL_F; rank = "CORPORAL";};
					class Unit4		{side = 1; vehicle = B_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit5		{side = 1; vehicle = B_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit6		{side = 1; vehicle = B_T_Soldier_LAT_F; rank = "CORPORAL";};
					class Unit7		{side = 1; vehicle = B_T_Medic_F; rank = "PRIVATE";};
					class Unit8		{side = 1; vehicle = B_T_Soldier_F; rank = "PRIVATE";};
				};
			};
			class Armored
			{
				class KP_Support_BArm
				{
					name = "Armored";
					side = 1;
					faction = BLU_F;
					class Unit0		{side = 1; vehicle = B_T_MBT_01_cannon_F; rank = "SERGEANT";};
				};
			};
		};
	};
	class East
	{
		name = $STR_A3_CfgGroups_East0;
		side = 0;
		class OPF_F
		{
			name = $STR_A3_CfgGroups_East_OPF_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class KP_Support_O4
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_reconteam0;
					side = 0;
					faction = OPF_F;
					class Unit0		{side = 0; vehicle = O_T_Recon_TL_F; rank = "SERGEANT";};
					class Unit1		{side = 0; vehicle = O_T_Recon_Medic_F; rank = "CORPORAL";};
					class Unit2		{side = 0; vehicle = O_T_Recon_F; rank = "PRIVATE";};
					class Unit3		{side = 0; vehicle = O_T_Recon_M_F; rank = "PRIVATE";};
				};
				class KP_Support_O8
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_infsquad0;
					side = 0;
					faction = OPF_F;
					class Unit0		{side = 0; vehicle = O_T_Soldier_SL_F; rank = "SERGEANT";};
					class Unit1		{side = 0; vehicle = O_T_Soldier_TL_F; rank = "SERGEANT";};
					class Unit2		{side = 0; vehicle = O_T_Soldier_GL_F; rank = "CORPORAL";};
					class Unit3		{side = 0; vehicle = O_T_Soldier_LAT_F; rank = "PRIVATE";};
					class Unit4		{side = 0; vehicle = O_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit5		{side = 0; vehicle = O_T_Medic_F; rank = "PRIVATE";};
					class Unit6		{side = 0; vehicle = O_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit7		{side = 0; vehicle = O_T_Soldier_F; rank = "PRIVATE";};
				};
				class KP_Support_O16
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_infsquad0;
					side = 0;
					faction = OPF_F;
					class Unit0 	{side = 0; vehicle = O_T_Soldier_SL_F; rank = "SERGEANT";};
					class Unit1 	{side = 0; vehicle = O_T_Soldier_TL_F; rank = "SERGEANT";};
					class Unit2 	{side = 0; vehicle = O_T_Soldier_GL_F; rank = "CORPORAL";};
					class Unit3 	{side = 0; vehicle = O_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit4 	{side = 0; vehicle = O_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit5 	{side = 0; vehicle = O_T_Medic_F; rank = "PRIVATE";};
					class Unit6 	{side = 0; vehicle = O_T_Soldier_GL_F; rank = "CORPORAL";};
					class Unit7 	{side = 0; vehicle = O_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit8 	{side = 0; vehicle = O_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit9 	{side = 0; vehicle = O_T_Medic_F; rank = "PRIVATE";};
					class Unit10	{side = 0; vehicle = O_T_Soldier_F; rank = "PRIVATE";};
					class Unit11	{side = 0; vehicle = O_T_Soldier_LAT_F; rank = "CORPORAL";};
					class Unit12	{side = 0; vehicle = O_T_Soldier_LAT_F; rank = "PRIVATE";};
					class Unit13	{side = 0; vehicle = O_T_Soldier_F; rank = "PRIVATE";};
					class Unit14	{side = 0; vehicle = O_T_Soldier_AT_F; rank = "PRIVATE";};
					class Unit15	{side = 0; vehicle = O_T_Soldier_AT_F; rank = "PRIVATE";};
				};
				class KP_Support_OAT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = 0;
					faction = OPF_F;
					class Unit0		{side = 0; vehicle = O_T_Soldier_TL_F; rank = "SERGEANT";};
					class Unit1		{side = 0; vehicle = O_T_Soldier_AT_F; rank = "SERGEANT";};
					class Unit2		{side = 0; vehicle = O_T_Soldier_AT_F; rank = "PRIVATE";};
					class Unit3		{side = 0; vehicle = O_T_Soldier_F; rank = "PRIVATE";};
				};
				class KP_Support_OAA
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_infteam_aa0;
					side = 0;
					faction = OPF_F;
					class Unit0		{side = 0; vehicle = O_T_Soldier_TL_F; rank = "SERGEANT";};
					class Unit1		{side = 0; vehicle = O_T_Soldier_AA_F; rank = "SERGEANT";};
					class Unit2		{side = 0; vehicle = O_T_Soldier_AA_F; rank = "PRIVATE";};
					class Unit3		{side = 0; vehicle = O_T_Soldier_F; rank = "PRIVATE";};
				};
			};
			class Motorized
			{
				name = $STR_A3_cfggroups_East_OPF_F_Motorized_MTP0;
				class KP_Support_OMotInf_AT
				{
					name = $str_a3_cfggroups_east_opf_f_motorized_mtp_oia_motinf_at0;
					side = 0;
					faction = OPF_F;
					class Unit0		{side = 0; vehicle = O_T_LSV_02_unarmed_F; rank = "SERGEANT";};
					class Unit1		{side = 0; vehicle = O_T_Soldier_AT_F; rank = "CORPORAL";};
					class Unit2		{side = 0; vehicle = O_T_Soldier_AT_F; rank = "PRIVATE";};
					class Unit3		{side = 0; vehicle = O_T_Soldier_AR_F; rank = "PRIVATE";};
				};
				class KP_Support_OMotInf_HMG
				{
					name = $str_a3_cfggroups_east_opf_f_motorized_mtp_oia_motinfteam0;
					side = 0;
					faction = OPF_F;
					class Unit0		{side = 0; vehicle = O_T_LSV_02_armed_F; rank = "SERGEANT";};
					class Unit1		{side = 0; vehicle = O_T_Soldier_F; rank = "CORPORAL";};
					class Unit2		{side = 0; vehicle = O_T_Soldier_F; rank = "PRIVATE";};
				};
				class KP_Support_OMotInf_GMG
				{
					name = $str_a3_cfggroups_east_opf_f_motorized_mtp_oia_motinfteam0;
					side = 0;
					faction = OPF_F;
					class Unit0		{side = 0; vehicle = O_T_MRAP_02_gmg_ghex_F; rank = "SERGEANT";};
					class Unit1		{side = 0; vehicle = O_T_Soldier_F; rank = "CORPORAL";};
					class Unit2		{side = 0; vehicle = O_T_Soldier_F; rank = "PRIVATE";};
				};
			};
			class Mechanized
			{
				name = $str_a3_cfggroups_east_opf_f_mechanized0;
				class KP_Support_OMechL
				{
					name = $STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = 0;
					faction = OPF_F;
					class Unit0		{side = 0; vehicle = O_T_APC_Wheeled_02_rcws_ghex_F; rank = "SERGEANT";};
					class Unit1		{side = 0; vehicle = O_T_Soldier_SL_F; rank = "SERGEANT";};
					class Unit2		{side = 0; vehicle = O_T_Soldier_TL_F; rank = "SERGEANT";};
					class Unit3		{side = 0; vehicle = O_T_Soldier_GL_F; rank = "CORPORAL";};
					class Unit4		{side = 0; vehicle = O_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit5		{side = 0; vehicle = O_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit6		{side = 0; vehicle = O_T_Soldier_LAT_F; rank = "CORPORAL";};
					class Unit7		{side = 0; vehicle = O_T_Medic_F; rank = "PRIVATE";};
					class Unit8		{side = 0; vehicle = O_T_Soldier_F; rank = "PRIVATE";};
				};
				class KP_Support_OMechH
				{
					name = $STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = 0;
					faction = OPF_F;
					class Unit0		{side = 0; vehicle = O_T_APC_Tracked_02_cannon_ghex_F; rank = "SERGEANT";};
					class Unit1		{side = 0; vehicle = O_T_Soldier_SL_F; rank = "SERGEANT";};
					class Unit2		{side = 0; vehicle = O_T_Soldier_TL_F; rank = "SERGEANT";};
					class Unit3		{side = 0; vehicle = O_T_Soldier_GL_F; rank = "CORPORAL";};
					class Unit4		{side = 0; vehicle = O_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit5		{side = 0; vehicle = O_T_Soldier_AR_F; rank = "PRIVATE";};
					class Unit6		{side = 0; vehicle = O_T_Soldier_LAT_F; rank = "CORPORAL";};
					class Unit7		{side = 0; vehicle = O_T_Medic_F; rank = "PRIVATE";};
					class Unit8		{side = 0; vehicle = O_T_Soldier_F; rank = "PRIVATE";};
				};
			};
			class Armored
			{
				class KP_Support_OArm
				{
					name = "Armored";
					side = 1;
					faction = OPF_F;
					class Unit0		{side = 0; vehicle = O_T_MBT_02_cannon_ghex_F; rank = "SERGEANT";};
				};
			};
		};
	};
};
