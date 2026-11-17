/* IL2CPP: Dino.BusSand.Core.Garage$$get_BodyObb
Dino_BusSand_Core_BusObb_o Dino_BusSand_Core_Garage__get_BodyObb (Dino_BusSand_Core_Garage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Garage$$get_BodyObb
   Dino_BusSand_Core_BusObb_o Dino_BusSand_Core_Garage__get_BodyObb (Dino_BusSand_Core_Garage_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_Core_Garage__get_BodyObb_242e044(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_04cbc080;
  if ((bRam0000000004f9cbef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    bRam0000000004f9cbef = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Core_BusGeometry__Make_2422124
            (&uStack_70,uVar3,uVar4,_UNK_00e69d88,_UNK_00e69ba0,uVar1);
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  return;
}

