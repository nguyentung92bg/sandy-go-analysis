/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$SetPaused
void Dino_BusSand_Cheat_CheatManager__SetPaused (Dino_BusSand_Cheat_CheatManager_o* __this, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$SetPaused
   void Dino_BusSand_Cheat_CheatManager__SetPaused (Dino_BusSand_Cheat_CheatManager_o* __this, bool
   on, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__SetPaused_23676f4(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_04cac868;
  if ((bRam0000000004f9c771 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cba9a0);
    FUN_02132f7c(PTR_DAT_04cb8788);
    FUN_02132f7c(PTR_DAT_04cab2b8);
    bRam0000000004f9c771 = 1;
  }
  lVar3 = *(long *)puVar2;
  uStack_34 = 0;
  *(byte *)(param_1 + 0x138) = param_2 & 1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcf9 == '\0') {
    FUN_02132f7c(PTR_DAT_04cac868);
    cRam0000000004f9bcf9 = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  if ((uVar4 & 1) != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dd50(lVar3,param_2 & 1,0);
  }
  if ((param_2 & 1) == 0) {
    Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
    UnityEngine_Time__set_timeScale_43cd6d8(0);
    *(undefined1 *)(param_1 + 0x140) = 1;
    uStack_34 = Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
    uVar5 = System_Single__ToString_48425d0(&uStack_34,0);
    uVar5 = System_String__Concat_46d2b84
                      (*(undefined8 *)PTR_DAT_04cba9a0,uVar5,*(undefined8 *)PTR_DAT_04cab2b8,0);
  }
  else {
    UnityEngine_Time__set_timeScale_43cd6d8(0,0);
    puVar2 = PTR_DAT_04cb8788;
    *(undefined1 *)(param_1 + 0x140) = 1;
    uVar5 = *(undefined8 *)puVar2;
  }
  Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar5);
  return;
}

