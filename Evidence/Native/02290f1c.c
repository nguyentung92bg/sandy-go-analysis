/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel.<BornFallback>d__18$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleResultPanel__BornFallback_d__18__MoveNext (Dino_BusSand_App_UI_BattleRoyaleResultPanel__BornFallback_d__18_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel.<BornFallback>d__18$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleResultPanel__BornFallback_d__18__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleResultPanel__BornFallback_d__18_o* __this, const MethodInfo*
   method); */

bool Dino_BusSand_App_UI_BattleRoyaleResultPanel__BornFallback_d__18__MoveNext_2190f1c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9b9a7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9b9a7 = 1;
  }
  puVar2 = PTR_DAT_04caca88;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x40c00000,uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar3 + 0x71) == '\0') {
      Dino_BusSand_App_UI_BattleRoyaleResultPanel__StartBorn_2190214(0x3f000000,lVar3,0);
    }
  }
  return iVar1 == 0;
}

