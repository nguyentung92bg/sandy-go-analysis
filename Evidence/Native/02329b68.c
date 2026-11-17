/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$IsSpecial
bool Dino_BusSand_App_Meta_ClimbTowerFeature__IsSpecial (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$IsSpecial
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__IsSpecial
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t c, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_ClimbTowerFeature__IsSpecial_2229b68(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_DAT_04cb1d10;
  if ((bRam0000000004f9be20 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d10);
    bRam0000000004f9be20 = 1;
  }
  Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68(param_1);
  uVar2 = System_Array__IndexOf_int__2906224
                    (*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)puVar1);
  return ~uVar2 >> 0x1f;
}

