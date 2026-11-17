/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel.<PlayLater>d__15$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingRewardPanel__PlayLater_d__15__MoveNext (Dino_BusSand_App_UI_YachtRacingRewardPanel__PlayLater_d__15_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel.<PlayLater>d__15$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingRewardPanel__PlayLater_d__15__MoveNext
   (Dino_BusSand_App_UI_YachtRacingRewardPanel__PlayLater_d__15_o* __this, const MethodInfo*
   method); */

bool Dino_BusSand_App_UI_YachtRacingRewardPanel__PlayLater_d__15__MoveNext_21f1bcc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
                    /* catch() { ... } // from try @ 022f1b78 with catch @ 022f1be0 */
  if ((bRam0000000004f9bc22 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caca88);
                    /* catch() { ... } // from try @ 022f1b6c with catch @ 022f1c04 */
    bRam0000000004f9bc22 = 1;
  }
  puVar3 = PTR_DAT_04caca88;
  puVar2 = PTR_DAT_04cab1e8;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* try { // try from 022f1c6c to 023f1c77 has its CatchHandler @ 022f1cec */
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar5,uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
                    /* catch() { ... } // from try @ 022f1b44 with catch @ 022f1c18 */
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* catch() { ... } // from try @ 022f1cc4 with catch @ 022f1c2c */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,uVar4,0);
  }
                    /* try { // try from 022f1c94 to 023f1cab has its CatchHandler @ 022f1ce8 */
  return iVar1 == 0;
}

