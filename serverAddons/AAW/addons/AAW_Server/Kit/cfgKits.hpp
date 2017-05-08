class cfgKits {
    class NATO {
        class Rifleman {
            scope = 1;
            kitGroup = "Unlimited";
            availableInGroups[] = {"Rifle", "Weapon", "Mortar"};

            // Display
            displayName = "Rifleman";
            icon = "";
            UIIcon = "\A3\ui_f\data\gui\rsc\rscdisplayarsenal\primaryweapon_ca.paa";
            mapIcon = "\A3\ui_f\data\map\vehicleicons\iconMan_ca.paa";
            compassIcon[] = {"a3\ui_f\data\map\Markers\Military\dot_ca.paa", 3.6};

            // Special attributes
            isLeader = 0;
            isMedic = 0;
            isEngineer = 0;
            isPilot = 0;
            isCrew = 0;

            // Primary weapon
            primaryWeapon = "arifle_MX_F";
            primaryAttachments[] = {"optic_Holosight","acc_pointer_IR"};
            primaryMagazine = "30Rnd_65x39_caseless_mag";
            primaryMagazineCount = 7;
            primaryMagazineTracer = "30Rnd_65x39_caseless_mag_Tracer";
            primaryMagazineTracerCount = 0;

            // Secondary weapon
            secondaryWeapon = "";
            secondaryMagazine = "";
            secondaryMagazineCount = 0;

            // Handgun weapon
            handgunWeapon = "hgun_Pistol_heavy_01_F";
            handgunMagazine = "11Rnd_45ACP_Mag";
            handgunMagazineCount = 2;

            // Uniform
            uniform = "U_B_CombatUniform_mcam";
            vest = "V_PlateCarrier1_rgr";
            backpack = "";
            headGear = "H_HelmetB";

            // Items
            assignedItems[] = {"ItemWatch", "ItemCompass", "ItemRadio", "ItemMap", "ItemGPS"};
            items[] = {{"FirstAidKit",2}, {"HandGrenade",2}, {"SmokeShell", 2}};
        };
        class Officer: Rifleman {
            availableInGroups[] = {"Rifle", "Weapon", "Mortar"};

            displayName = "Squad Leader";

            headGear = "H_HelmetSpecB";

            isLeader = 1;

            secondaryWeapon = "Binocular";
            primaryMagazineCount = 5;

            primaryAttachments[] = {"optic_Arco","acc_pointer_IR"};

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}, "SmokeShellRed", "SmokeShellGreen"};
            icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
            UIIcon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
            mapIcon = "\A3\ui_f\data\map\vehicleicons\iconManLeader_ca.paa";
            compassIcon[] = {"a3\ui_f\data\gui\cfg\ranks\corporal_gs.paa", 1.3};
        };
        class Medic: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Rifle", "Weapon"};

            displayName = "Medic";

            isMedic = 1;
            uniform = "U_B_CombatUniform_mcam_tshirt";

            primaryMagazineCount = 5;
            backpack = "B_AssaultPack_rgr";
            items[] = {{"FirstAidKit", 4}, {"HandGrenade", 1}, {"SmokeShell", 4}, "SmokeShellRed", "SmokeShellGreen", "Medikit"};

            icon = "\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa";
            UIIcon = "a3\ui_f\data\map\vehicleicons\pictureheal_ca.paa";
            mapIcon = "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";
            compassIcon[] = {"a3\ui_f\data\map\vehicleicons\pictureheal_ca.paa", 2};
        };
        class AutomaticRifleman: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Rifle"};

            displayName = "Automatic Rifleman";

            primaryWeapon = "arifle_MX_SW_F";
            primaryAttachments[] = {"optic_Holosight","acc_pointer_IR","bipod_01_F_blk"};
            primaryMagazine = "100Rnd_65x39_caseless_mag";
            primaryMagazineCount = 0;
            primaryMagazineTracer = "100Rnd_65x39_caseless_mag_Tracer";
            primaryMagazineTracerCount = 4;
            //backpack = "B_AssaultPack_rgr";
            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};

            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\mg_ca.paa";
        };
        class Grenadier: Rifleman {
            kitGroup = "Specialized";
            availableInGroups[] = {"Rifle"};

            displayName = "Grenadier";

            primaryWeapon = "arifle_MX_GL_F";
            items[] += {{"1Rnd_HE_Grenade_shell", 8}, {"1Rnd_Smoke_Grenade_shell", 4}, {"1Rnd_SmokeRed_Grenade_shell", 2}, {"1Rnd_SmokeGreen_Grenade_shell", 2}};

            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\gl_ca.paa";
        };
        class Marksman: Rifleman {
            kitGroup = "Specialized";
            availableInGroups[] = {"Rifle"};

            displayName = "Marksman";

            primaryWeapon = "arifle_MXM_F";
            primaryAttachments[] = {"optic_Arco","bipod_01_F_blk"};
            primaryMagazineCount = 5;

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};

            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\srifle_ca.paa";
        };
        /*
        class DemolitionExpert: Rifleman {
            kitGroup = "Specialized";
            availableInGroups[] = {"Rifle"};

            backpack = "B_AssaultPack_rgr";

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 2}, {"SmokeShell", 2}, "SmokeShellGreen", "SmokeShellRed", "DemoCharge_Remote_Mag", {"SatchelCharge_Remote_Mag", 2}};

            displayName = "Demolition Expert";

            UIIcon = "\A3\ui_f\data\gui\rsc\rscdisplayarsenal\primaryweapon_ca.paa";
        };

        class Engineer: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Rifle"};

            displayName = "Engineer";

            isEngineer = 1;

            UIIcon = "a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa";
        };
        */
        class AntiAir: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Weapon"};

            displayName = "AA Rifleman";

            secondaryWeapon = "launch_B_Titan_F";
            secondaryMagazine = "Titan_AA";
            secondaryMagazineCount = 2;
            backpack = "B_Kitbag_rgr";
            primaryMagazineCount = 5;
            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};
            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\aa_ca.paa";
        };
        class LightAntiTank: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Rifle"};
            primaryMagazineCount = 5;
            secondaryWeapon = "launch_NLAW_F";
            secondaryMagazine = "NLAW_F";
            secondaryMagazineCount = 2;
            backpack = "B_AssaultPack_rgr";
            displayName = "LAT Rifleman";
            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};
            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\at_ca.paa";
        };
        class HeavyAntiTank: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Weapon"};

            displayName = "HAT Rifleman";
            primaryMagazineCount = 5;
            secondaryWeapon = "launch_B_Titan_short_F";
            secondaryMagazine = "Titan_AT";
            secondaryMagazineCount = 2;
            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};
            backpack = "B_Kitbag_rgr";
            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\at_ca.paa";
        };
        class HeavyMachineGun: AutomaticRifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Weapon"};

            displayName = "HMG Rifleman";
            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\mg_ca.paa";
        };
        class AmmoBearer: Rifleman {
            availableInGroups[] = {"Weapon"};

            displayName = "Ammo Bearer";

            backpack = "B_AssaultPack_rgr";
            items[] += {{"100Rnd_65x39_caseless_mag_Tracer", 6}};
        };
        class Crewman: Rifleman {
            availableInGroups[] = {"Vehicle"};

            displayName = "Crewman";

            primaryWeapon = "arifle_MXC_F";

            headGear = "H_HelmetCrew_B";
            primaryMagazineCount = 3;
            vest = "";

            items[] = {{"FirstAidKit", 2}, {"SmokeShell", 2}};

            isCrew = 1;
        };
        class HelicopterPilot: Rifleman {
            availableInGroups[] = {"Helicopter"};

            displayName = "Pilot";

            primaryWeapon = "arifle_MXC_F";

            uniform = "U_B_HeliPilotCoveralls";
            headGear = "H_PilotHelmetHeli_B";
            primaryMagazineCount = 3;
            vest = "";

            items[] = {{"FirstAidKit", 2}, {"SmokeShell", 2}};

            isPilot = 1;
        };

        class Sniper: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Recon"};

            displayName = "Sniper";

            uniform = "U_B_FullGhillie_lsh";

            primaryWeapon = "srifle_LRR_F";
            primaryAttachments[] = {"optic_LRPS","bipod_01_F_blk"};

            primaryMagazine = "7Rnd_408_Mag";
            primaryMagazineCount = 7;
            primaryMagazineTracerCount = 0;

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 1}};

            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\srifle_ca.paa";
        };
        class Spotter: Rifleman {
            availableInGroups[] = {"Recon"};

            displayName = "Spotter";
            UIIcon = "A3\ui_f\data\gui\rsc\rscdisplayarsenal\binoculars_ca.paa";

            uniform = "U_B_FullGhillie_lsh";
            secondaryWeapon = "Rangefinder";

            primaryWeapon = "arifle_MXM_F";
            primaryAttachments[] = {"optic_Arco","bipod_01_F_blk"};
            primaryMagazineCount = 5;
            primaryMagazineTracerCount = 0;

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 1}};
        };
        class Specialist: Rifleman {
            availableInGroups[] = {"Recon"};

            displayName = "Specialist";
        };
    };
    class AAF {
         class Rifleman {
            scope = 1;
            kitGroup = "Unlimited";
            availableInGroups[] = {"Rifle", "Weapon", "Mortar"};

            // Display
            displayName = "Rifleman";
            icon = "";
            UIIcon = "\A3\ui_f\data\gui\rsc\rscdisplayarsenal\primaryweapon_ca.paa";
            mapIcon = "\A3\ui_f\data\map\vehicleicons\iconMan_ca.paa";
            compassIcon[] = {"a3\ui_f\data\map\Markers\Military\dot_ca.paa", 3.6};

            // Special attributes
            isLeader = 0;
            isMedic = 0;
            isEngineer = 0;
            isPilot = 0;
            isCrew = 0;

            // Primary weapon
            primaryWeapon = "arifle_Mk20_F";
            primaryAttachments[] = {"optic_Aco","acc_pointer_IR"};
            primaryMagazine = "30Rnd_556x45_Stanag";
            primaryMagazineCount = 7;
            primaryMagazineTracer = "30Rnd_556x45_Stanag_green";
            primaryMagazineTracerCount = 0;

            // Secondary weapon
            secondaryWeapon = "";
            secondaryMagazine = "";
            secondaryMagazineCount = 0;

            // Handgun weapon
            handgunWeapon = "hgun_Rook40_F";
            handgunMagazine = "16Rnd_9x21_Mag";
            handgunMagazineCount = 2;

            // Uniform
            uniform = "U_I_CombatUniform";
            vest = "V_PlateCarrierIA1_dgtl";
            backpack = "";
            headGear = "H_HelmetIA";

            // Items
            assignedItems[] = {"ItemWatch", "ItemCompass", "ItemRadio", "ItemMap", "ItemGPS"};
            items[] = {{"FirstAidKit",2}, {"HandGrenade",2}, {"SmokeShell", 2}};
        };
        class Officer: Rifleman {
            availableInGroups[] = {"Rifle", "Weapon", "Mortar"};

            displayName = "Squad Leader";

            isLeader = 1;

            secondaryWeapon = "Binocular";
            primaryMagazineCount = 5;

            primaryAttachments[] = {"optic_MRCO","acc_pointer_IR"};

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}, "SmokeShellRed", "SmokeShellGreen"};
            icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
            UIIcon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
            mapIcon = "\A3\ui_f\data\map\vehicleicons\iconManLeader_ca.paa";
            compassIcon[] = {"a3\ui_f\data\gui\cfg\ranks\corporal_gs.paa", 1.3};
        };
        class Medic: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Rifle", "Weapon"};

            displayName = "Medic";

            isMedic = 1;
          
            primaryMagazineCount = 5;
            backpack = "B_AssaultPack_dgtl";
            items[] = {{"FirstAidKit", 4}, {"HandGrenade", 1}, {"SmokeShell", 4}, "SmokeShellRed", "SmokeShellGreen", "Medikit"};

            icon = "\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa";
            UIIcon = "a3\ui_f\data\map\vehicleicons\pictureheal_ca.paa";
            mapIcon = "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";
            compassIcon[] = {"a3\ui_f\data\map\vehicleicons\pictureheal_ca.paa", 2};
        };
        class AutomaticRifleman: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Rifle"};

            displayName = "Automatic Rifleman";

            primaryWeapon = "LMG_Mk200_F";
            primaryAttachments[] = {"optic_Aco","acc_pointer_IR","bipod_03_F_blk"};
            primaryMagazine = "200Rnd_65x39_cased_Box";
            primaryMagazineCount = 0;
            primaryMagazineTracer = "200Rnd_65x39_cased_Box_Tracer";
            primaryMagazineTracerCount = 2;
            //backpack = "B_AssaultPack_rgr";
            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};

            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\mg_ca.paa";
        };
        class Grenadier: Rifleman {
            kitGroup = "Specialized";
            availableInGroups[] = {"Rifle"};

            displayName = "Grenadier";

            primaryWeapon = "arifle_Mk20_GL_F";
            items[] += {{"1Rnd_HE_Grenade_shell", 8}, {"1Rnd_Smoke_Grenade_shell", 4}, {"1Rnd_SmokeRed_Grenade_shell", 2}, {"1Rnd_SmokeGreen_Grenade_shell", 2}};

            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\gl_ca.paa";
        };
        class Marksman: Rifleman {
            kitGroup = "Specialized";
            availableInGroups[] = {"Rifle"};

            displayName = "Marksman";

            primaryWeapon = "arifle_Mk20_F";
            primaryAttachments[] = {"optic_MRCO","bipod_03_F_blk"};
            primaryMagazineCount = 5;

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};

            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\srifle_ca.paa";
        };
        /*
        class DemolitionExpert: Rifleman {
            kitGroup = "Specialized";
            availableInGroups[] = {"Rifle"};

            backpack = "B_AssaultPack_rgr";

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 2}, {"SmokeShell", 2}, "SmokeShellGreen", "SmokeShellRed", "DemoCharge_Remote_Mag", {"SatchelCharge_Remote_Mag", 2}};

            displayName = "Demolition Expert";

            UIIcon = "\A3\ui_f\data\gui\rsc\rscdisplayarsenal\primaryweapon_ca.paa";
        };

        class Engineer: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Rifle"};

            displayName = "Engineer";

            isEngineer = 1;

            UIIcon = "a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa";
        };
        */
        class AntiAir: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Weapon"};

            displayName = "AA Rifleman";

            secondaryWeapon = "launch_I_Titan_F";
            secondaryMagazine = "Titan_AA";
            secondaryMagazineCount = 2;
            backpack = "B_FieldPack_oli";
            primaryMagazineCount = 5;
            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};
            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\aa_ca.paa";
        };
        class LightAntiTank: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Rifle"};
            primaryMagazineCount = 5;
            secondaryWeapon = "launch_NLAW_F";
            secondaryMagazine = "NLAW_F";
            secondaryMagazineCount = 2;
            backpack = "B_AssaultPack_dgtl";
            displayName = "LAT Rifleman";
            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};
            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\at_ca.paa";
        };
        class HeavyAntiTank: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Weapon"};

            displayName = "HAT Rifleman";
            primaryMagazineCount = 5;
            secondaryWeapon = "launch_I_Titan_short_F";
            secondaryMagazine = "Titan_AT";
            secondaryMagazineCount = 2;
            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};
            backpack = "B_FieldPack_oli";
            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\at_ca.paa";
        };
        class HeavyMachineGun: AutomaticRifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Weapon"};

            displayName = "HMG Rifleman";
            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\mg_ca.paa";
        };
        class AmmoBearer: Rifleman {
            availableInGroups[] = {"Weapon"};

            displayName = "Ammo Bearer";

            backpack = "B_AssaultPack_dgtl";
            items[] += {{"200Rnd_65x39_cased_Box_Tracer", 3}};
        };
        class Crewman: Rifleman {
            availableInGroups[] = {"Vehicle"};

            displayName = "Crewman";

            primaryWeapon = "arifle_Mk20C_F";

            headGear = "H_HelmetCrew_I";
            primaryMagazineCount = 3;
            vest = "";

            items[] = {{"FirstAidKit", 2}, {"SmokeShell", 2}};

            isCrew = 1;
        };
        class HelicopterPilot: Rifleman {
            availableInGroups[] = {"Helicopter"};

            displayName = "Pilot";

            primaryWeapon = "arifle_Mk20C_F";

            uniform = "U_I_HeliPilotCoveralls";
            headGear = "H_PilotHelmetHeli_I";
            primaryMagazineCount = 3;
            vest = "";

            items[] = {{"FirstAidKit", 2}, {"SmokeShell", 2}};

            isPilot = 1;
        };

        class Sniper: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Recon"};

            displayName = "Sniper";

            uniform = "U_I_FullGhillie_lsh";

            primaryWeapon = "srifle_GM6_F";
            primaryAttachments[] = {"optic_LRPS"};

            primaryMagazine = "5Rnd_127x108_Mag";
            primaryMagazineCount = 7;
            primaryMagazineTracerCount = 0;

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 1}};

            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\srifle_ca.paa";
        };
        class Spotter: Rifleman {
            availableInGroups[] = {"Recon"};

            displayName = "Spotter";
            UIIcon = "A3\ui_f\data\gui\rsc\rscdisplayarsenal\binoculars_ca.paa";

            uniform = "U_I_FullGhillie_lsh";
            secondaryWeapon = "Rangefinder";

            primaryWeapon = "arifle_Mk20_F";
            primaryAttachments[] = {"optic_MRCO","bipod_03_F_blk"};
            primaryMagazineCount = 5;
            primaryMagazineTracerCount = 0;

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 1}};
        };
        class Specialist: Rifleman {
            availableInGroups[] = {"Recon"};

            displayName = "Specialist";
        };
    };
    class CSAT {
        class Rifleman {
            scope = 1;
            kitGroup = "Unlimited";
            availableInGroups[] = {"Rifle", "Weapon", "Mortar"};

            // Display
            displayName = "Rifleman";
            icon = "";
            UIIcon = "\A3\ui_f\data\gui\rsc\rscdisplayarsenal\primaryweapon_ca.paa";
            mapIcon = "\A3\ui_f\data\map\vehicleicons\iconMan_ca.paa";
            compassIcon[] = {"a3\ui_f\data\map\Markers\Military\dot_ca.paa", 3.6};

            // Special attributes
            isLeader = 0;
            isMedic = 0;
            isEngineer = 0;
            isPilot = 0;
            isCrew = 0;

            // Primary weapon
            primaryWeapon = "arifle_Katiba_F";
            primaryAttachments[] = {"optic_Aco","acc_pointer_IR"};
            primaryMagazine = "30Rnd_65x39_caseless_green";
            primaryMagazineCount = 7;
            primaryMagazineTracer = "30Rnd_65x39_caseless_green_mag_Tracer";
            primaryMagazineTracerCount = 0;

            // Secondary weapon
            secondaryWeapon = "";
            secondaryMagazine = "";
            secondaryMagazineCount = 0;

            // Handgun weapon
            handgunWeapon = "hgun_Pistol_heavy_01_F";
            handgunMagazine = "11Rnd_45ACP_Mag";
            handgunMagazineCount = 2;

            // Uniform
            uniform = "U_O_CombatUniform_ocamo";
            vest = "V_HarnessO_brn";
            backpack = "";
            headGear = "H_HelmetO_ocamo";

            // Items
            assignedItems[] = {"ItemWatch", "ItemCompass", "ItemRadio", "ItemMap", "ItemGPS"};
            items[] = {{"FirstAidKit",2}, {"HandGrenade",2}, {"SmokeShell", 2}};
        };
        class Officer: Rifleman {
            availableInGroups[] = {"Rifle", "Weapon", "Mortar"};

            displayName = "Squad Leader";

            headGear = "H_HelmetLeaderO_ocamo";

            isLeader = 1;

            secondaryWeapon = "Binocular";
            primaryMagazineCount = 5;

            primaryAttachments[] = {"optic_Hamr","acc_pointer_IR"};

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}, "SmokeShellRed", "SmokeShellGreen"};
            icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
            UIIcon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
            mapIcon = "\A3\ui_f\data\map\vehicleicons\iconManLeader_ca.paa";
            compassIcon[] = {"a3\ui_f\data\gui\cfg\ranks\corporal_gs.paa", 1.3};
        };
        class Medic: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Rifle", "Weapon"};

            displayName = "Medic";

            isMedic = 1;

            primaryMagazineCount = 5;
            backpack = "B_AssaultPack_ocamo";
            items[] = {{"FirstAidKit", 4}, {"HandGrenade", 1}, {"SmokeShell", 4}, "SmokeShellRed", "SmokeShellGreen", "Medikit"};

            icon = "\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa";
            UIIcon = "a3\ui_f\data\map\vehicleicons\pictureheal_ca.paa";
            mapIcon = "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";
            compassIcon[] = {"a3\ui_f\data\map\vehicleicons\pictureheal_ca.paa", 2};
        };
        class AutomaticRifleman: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Rifle"};

            displayName = "Automatic Rifleman";

            primaryWeapon = "LMG_Zafir_F";
            primaryAttachments[] = {"optic_Aco","acc_pointer_IR"};
            primaryMagazine = "150Rnd_762x54_Box";
            primaryMagazineCount = 0;
            primaryMagazineTracer = "150Rnd_762x54_Box_Tracer";
            primaryMagazineTracerCount = 2;
            //backpack = "B_AssaultPack_rgr";
            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};

            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\mg_ca.paa";
        };
        class Grenadier: Rifleman {
            kitGroup = "Specialized";
            availableInGroups[] = {"Rifle"};

            displayName = "Grenadier";

            primaryWeapon = "arifle_Katiba_GL_F";
            items[] += {{"1Rnd_HE_Grenade_shell", 8}, {"1Rnd_Smoke_Grenade_shell", 4}, {"1Rnd_SmokeRed_Grenade_shell", 2}, {"1Rnd_SmokeGreen_Grenade_shell", 2}};

            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\gl_ca.paa";
        };
        class Marksman: Rifleman {
            kitGroup = "Specialized";
            availableInGroups[] = {"Rifle"};

            displayName = "Marksman";

            primaryAttachments[] = {"optic_Arco"};
            primaryMagazineCount = 5;

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};

            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\srifle_ca.paa";
        };
        /*
        class DemolitionExpert: Rifleman {
            kitGroup = "Specialized";
            availableInGroups[] = {"Rifle"};

            backpack = "B_AssaultPack_rgr";

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 2}, {"SmokeShell", 2}, "SmokeShellGreen", "SmokeShellRed", "DemoCharge_Remote_Mag", {"SatchelCharge_Remote_Mag", 2}};

            displayName = "Demolition Expert";

            UIIcon = "\A3\ui_f\data\gui\rsc\rscdisplayarsenal\primaryweapon_ca.paa";
        };

        class Engineer: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Rifle"};

            displayName = "Engineer";

            isEngineer = 1;

            UIIcon = "a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa";
        };
        */
        class AntiAir: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Weapon"};

            displayName = "AA Rifleman";

            secondaryWeapon = "launch_O_Titan_F";
            secondaryMagazine = "Titan_AA";
            secondaryMagazineCount = 2;
            backpack = "B_FieldPack_ocamo";
            primaryMagazineCount = 5;
            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};
            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\aa_ca.paa";
        };
        class LightAntiTank: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Rifle"};
            primaryMagazineCount = 5;
            secondaryWeapon = "launch_RPG32_F";
            secondaryMagazine = "RPG32_F";
            secondaryMagazineCount = 3;
            backpack = "B_AssaultPack_ocamo";
            displayName = "LAT Rifleman";
            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};
            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\at_ca.paa";
        };
        class HeavyAntiTank: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Weapon"};

            displayName = "HAT Rifleman";
            primaryMagazineCount = 5;
            secondaryWeapon = "launch_O_Titan_short_F";
            secondaryMagazine = "Titan_AT";
            secondaryMagazineCount = 2;
            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 2}};
            backpack = "B_FieldPack_ocamo";
            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\at_ca.paa";
        };
        class HeavyMachineGun: AutomaticRifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Weapon"};

            displayName = "HMG Rifleman";
            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\mg_ca.paa";
        };
        class AmmoBearer: Rifleman {
            availableInGroups[] = {"Weapon"};

            displayName = "Ammo Bearer";

            backpack = "B_AssaultPack_ocamo";
            items[] += {{"150Rnd_762x54_Box_Tracer", 3}};
        };
        class Crewman: Rifleman {
            availableInGroups[] = {"Vehicle"};

            displayName = "Crewman";

            primaryWeapon = "arifle_Katiba_C_F";

            headGear = "H_HelmetCrew_O";
            primaryMagazineCount = 3;
            vest = "";

            items[] = {{"FirstAidKit", 2}, {"SmokeShell", 2}};

            isCrew = 1;
        };
        class HelicopterPilot: Rifleman {
            availableInGroups[] = {"Helicopter"};

            displayName = "Pilot";

            primaryWeapon = "arifle_MXC_F";

            uniform = "U_O_HeliPilotCoveralls";
            headGear = "H_PilotHelmetHeli_B";
            primaryMagazineCount = 3;
            vest = "";

            items[] = {{"FirstAidKit", 2}, {"SmokeShell", 2}};

            isPilot = 1;
        };

        class Sniper: Rifleman {
            kitGroup = "Limited";
            availableInGroups[] = {"Recon"};

            displayName = "Sniper";

            uniform = "U_O_FullGhillie_lsh";

            primaryWeapon = "srifle_GM6_F";
            primaryAttachments[] = {"optic_LRPS"};

            primaryMagazine = "5Rnd_127x108_Mag";
            primaryMagazineCount = 7;
            primaryMagazineTracerCount = 0;

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 1}};

            UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\srifle_ca.paa";
        };
        class Spotter: Rifleman {
            availableInGroups[] = {"Recon"};

            displayName = "Spotter";
            UIIcon = "A3\ui_f\data\gui\rsc\rscdisplayarsenal\binoculars_ca.paa";

            uniform = "U_O_FullGhillie_lsh";
            secondaryWeapon = "Rangefinder";

            primaryAttachments[] = {"optic_Hamr"};
            primaryMagazineCount = 5;
            primaryMagazineTracerCount = 0;

            items[] = {{"FirstAidKit", 2}, {"HandGrenade", 1}, {"SmokeShell", 1}};
        };
        class Specialist: Rifleman {
            availableInGroups[] = {"Recon"};

            displayName = "Specialist";
        };
    };
};
