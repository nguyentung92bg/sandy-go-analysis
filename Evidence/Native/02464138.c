/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$SetSpeedIndex
void Dino_BusSand_Cheat_CheatManager__SetSpeedIndex (Dino_BusSand_Cheat_CheatManager_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$SetSpeedIndex
   void Dino_BusSand_Cheat_CheatManager__SetSpeedIndex (Dino_BusSand_Cheat_CheatManager_o* __this,
   int32_t i, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__SetSpeedIndex_2364138(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9c772 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba890);
    bRam0000000004f9c772 = 1;
  }
  puVar3 = PTR_DAT_04cba890;
  uStack_24 = 0;
  if ((*(long *)(param_1 + 0x100) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x100) + 0x28), lVar5 != 0)) {
    iVar2 = *(int *)(lVar5 + 0x18);
    *(undefined1 *)(param_1 + 0x140) = 1;
    iVar2 = iVar2 + -1;
    iVar1 = param_2;
    if (iVar2 <= param_2) {
      iVar1 = iVar2;
    }
    iVar2 = 0;
    if (-1 < param_2) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 0x13c) = iVar2;
    if (*(char *)(param_1 + 0x138) == '\0') {
      Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
      UnityEngine_Time__set_timeScale_43cd6d8(0);
    }
    uStack_24 = Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
    uVar4 = System_Single__ToString_48425d0(&uStack_24,0);
    uVar4 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar4,0);
    Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

