/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$SetSpeed
void Dino_BusSand_Cheat_CheatManager__SetSpeed (Dino_BusSand_Cheat_CheatManager_o* __this, float v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$SetSpeed
   void Dino_BusSand_Cheat_CheatManager__SetSpeed (Dino_BusSand_Cheat_CheatManager_o* __this, float
   v, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__SetSpeed_2365308(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 auStack_24 [3];
  
  iVar4 = Dino_BusSand_Cheat_CheatManager__SpeedIndexOf_2365324();
  if ((bRam0000000004f9c772 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba890);
    bRam0000000004f9c772 = 1;
  }
  puVar3 = PTR_DAT_04cba890;
  auStack_24[0] = 0;
  if ((*(long *)(param_1 + 0x100) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x100) + 0x28), lVar6 != 0)) {
    iVar2 = *(int *)(lVar6 + 0x18);
    *(undefined1 *)(param_1 + 0x140) = 1;
    iVar2 = iVar2 + -1;
    iVar1 = iVar4;
    if (iVar2 <= iVar4) {
      iVar1 = iVar2;
    }
    iVar2 = 0;
    if (-1 < iVar4) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 0x13c) = iVar2;
    if (*(char *)(param_1 + 0x138) == '\0') {
      Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
      UnityEngine_Time__set_timeScale_43cd6d8(0);
    }
    auStack_24[0] = Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
    uVar5 = System_Single__ToString_48425d0(auStack_24,0);
    uVar5 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar5,0);
    Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

