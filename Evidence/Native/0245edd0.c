/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$HideHand
void Dino_BusSand_Cheat_CheatManager__HideHand (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$HideHand
   void Dino_BusSand_Cheat_CheatManager__HideHand (Dino_BusSand_Cheat_CheatManager_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__HideHand_235edd0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c739 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c739 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
LAB_0245ee64:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = Dino_BusSand_Cheat_AutoPlayHand__get_Visible_233f470(*(long *)(param_1 + 0x68),0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_0245ee64;
      Dino_BusSand_Cheat_AutoPlayHand__Hide_233f754(*(long *)(param_1 + 0x68),0);
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0xffffffff;
  return;
}

