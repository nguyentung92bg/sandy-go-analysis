/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow.<GoldMedalLater>d__47$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingTrackRow__GoldMedalLater_d__47__MoveNext (Dino_BusSand_App_UI_YachtRacingTrackRow__GoldMedalLater_d__47_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow.<GoldMedalLater>d__47$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingTrackRow__GoldMedalLater_d__47__MoveNext
   (Dino_BusSand_App_UI_YachtRacingTrackRow__GoldMedalLater_d__47_o* __this, const MethodInfo*
   method); */

bool Dino_BusSand_App_UI_YachtRacingTrackRow__GoldMedalLater_d__47__MoveNext_21f7bbc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000004f9bc44 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9bc44 = 1;
  }
  puVar2 = PTR_DAT_04caca88;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e20170,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(lVar4 + 0x20) != 0) {
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8
                (*(undefined8 *)(lVar4 + 0x80),*(int *)(*(long *)(lVar4 + 0x20) + 0x28) == 1);
    }
    *(undefined8 *)(lVar4 + 0xe0) = 0;
    thunk_FUN_02134474((undefined8 *)(lVar4 + 0xe0),0);
  }
  return iVar1 == 0;
}

