/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleTipsPanel.<WaitClip>d__5$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleTipsPanel__WaitClip_d__5__MoveNext (Dino_BusSand_App_UI_BattleRoyaleTipsPanel__WaitClip_d__5_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleTipsPanel.<WaitClip>d__5$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleTipsPanel__WaitClip_d__5__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleTipsPanel__WaitClip_d__5_o* __this, const MethodInfo* method);
    */

bool Dino_BusSand_App_UI_BattleRoyaleTipsPanel__WaitClip_d__5__MoveNext_219bc64(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((bRam0000000004f9b9ef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9b9ef = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar2 = PTR_DAT_04caca88;
    if (lVar4 == 0) {
LAB_0229bd28:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = *(undefined4 *)(param_1 + 0x28);
    *(undefined1 *)(lVar4 + 0x40) = 1;
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar5,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_0229bd28;
    *(undefined1 *)(lVar4 + 0x40) = 0;
  }
  return iVar1 == 0;
}

