/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Hint
void Dino_BusSand_Cheat_CheatManager__Hint (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Hint
   void Dino_BusSand_Cheat_CheatManager__Hint (Dino_BusSand_Cheat_CheatManager_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__Hint_2367ba4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cba458;
  if ((bRam0000000004f9c778 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04cba9d8);
    FUN_02132f7c(PTR_DAT_04cba9e0);
    bRam0000000004f9c778 = 1;
  }
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Cheat_CheatManager__CloseGuide_235ece8();
  if ((*(long *)(param_1 + 0x100) != 0) && (*(long *)(param_1 + 0x118) != 0)) {
    uVar2 = Dino_BusSand_Cheat_CheatHint__Show_235bc50
                      (*(undefined4 *)(*(long *)(param_1 + 0x100) + 0x34),*(long *)(param_1 + 0x118)
                       ,&uStack_28);
    if ((uVar2 & 1) == 0) {
      uVar3 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cba9e0,uStack_28,0);
    }
    else {
      uVar3 = *(undefined8 *)PTR_DAT_04cba9d8;
    }
    Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

