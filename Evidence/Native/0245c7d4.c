/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$SetCreative
void Dino_BusSand_Cheat_CheatManager__SetCreative (Dino_BusSand_Cheat_CheatManager_o* __this, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$SetCreative
   void Dino_BusSand_Cheat_CheatManager__SetCreative (Dino_BusSand_Cheat_CheatManager_o* __this,
   bool on, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__SetCreative_235c7d4(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined2 auStack_34 [2];
  
  puVar2 = PTR_DAT_04cba458;
  puVar1 = PTR_DAT_04caa420;
  if ((bRam0000000004f9c731 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04caa420);
    FUN_02132f7c(PTR_DAT_04cba460);
    bRam0000000004f9c731 = 1;
  }
  puVar3 = PTR_DAT_04cba460;
  auStack_34[0] = 0;
  System_Nullable_bool____ctor_2bc806c(auStack_34,param_2 & 1,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x20) = auStack_34[0];
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_Cheat_CheatManager__OnOff_235c8bc(param_2 & 1);
  System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar4,0);
  Dino_BusSand_Cheat_CheatManager__Log_235c924();
  return;
}

