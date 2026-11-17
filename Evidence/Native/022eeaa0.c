/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel.<CountDownLoop>d__35$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingPanel__CountDownLoop_d__35__MoveNext (Dino_BusSand_App_UI_YachtRacingPanel__CountDownLoop_d__35_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel.<CountDownLoop>d__35$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingPanel__CountDownLoop_d__35__MoveNext
   (Dino_BusSand_App_UI_YachtRacingPanel__CountDownLoop_d__35_o* __this, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_UI_YachtRacingPanel__CountDownLoop_d__35__MoveNext_21eeaa0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000004f9bc0b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9bc0b = 1;
  }
  puVar1 = PTR_DAT_04caca88;
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f800000,uVar2,0);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
                    /* try { // try from 022eeb34 to 023eeb3b has its CatchHandler @ 022eeb9c */
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar2);
    if (lVar3 == 0) goto LAB_022eeb70;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) {
LAB_022eeb70:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar3 + 0x93) == '\0') {
      return 0;
    }
    Dino_BusSand_App_UI_YachtRacingPanel__CountDownTime_21eca38(lVar3);
  }
                    /* try { // try from 022eeb3c to 023eebc7 has its CatchHandler @ 022eea84 */
  if (*(char *)(lVar3 + 0x93) == '\0') {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

