/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel.<CoinStackVibrate>d__22$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleResultPanel__CoinStackVibrate_d__22__MoveNext (Dino_BusSand_App_UI_BattleRoyaleResultPanel__CoinStackVibrate_d__22_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel.<CoinStackVibrate>d__22$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleResultPanel__CoinStackVibrate_d__22__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleResultPanel__CoinStackVibrate_d__22_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_BattleRoyaleResultPanel__CoinStackVibrate_d__22__MoveNext_2191024(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((bRam0000000004f9b9a8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab230);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cae048);
    bRam0000000004f9b9a8 = 1;
  }
  puVar2 = PTR_DAT_04caca88;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar1 = *(int *)(param_1 + 0x20) + 1;
    *(int *)(param_1 + 0x20) = iVar1;
    if (2 < iVar1) {
      return 0;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e207cc,uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
      uVar4 = 1;
      goto LAB_02291154;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (*(int *)(*(long *)PTR_DAT_04cab230 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Haptics__Vibrate_214dd74(*(undefined8 *)PTR_DAT_04cae048,0);
                    /* try { // try from 0229111c to 02391143 has its CatchHandler @ 02291440 */
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
  UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e20754,uVar3,0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
                    /* try { // try from 0229114c to 02391157 has its CatchHandler @ 02291444 */
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
  uVar4 = 2;
LAB_02291154:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
                    /* try { // try from 0229115c to 02391213 has its CatchHandler @ 02291448 */
  return 1;
}

