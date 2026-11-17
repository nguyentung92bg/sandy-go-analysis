/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi.<DelayedStart>d__11$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingUi__DelayedStart_d__11__MoveNext (Dino_BusSand_App_UI_YachtRacingUi__DelayedStart_d__11_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi.<DelayedStart>d__11$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingUi__DelayedStart_d__11__MoveNext
   (Dino_BusSand_App_UI_YachtRacingUi__DelayedStart_d__11_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_YachtRacingUi__DelayedStart_d__11__MoveNext_21f8f68(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((bRam0000000004f9bc59 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9bc59 = 1;
  }
  puVar2 = PTR_DAT_04caca88;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar6,uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = Dino_BusSand_App_UI_YachtRacingUi__CanOpenStart_21f809c();
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
    }
    else {
      Dino_BusSand_App_UI_YachtRacingUi__DoOpenStart_21f8278
                (*(undefined1 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
    }
  }
  return iVar1 == 0;
}

