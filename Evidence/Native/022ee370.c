/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel.<BounceSoundLoop>d__49$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingPanel__BounceSoundLoop_d__49__MoveNext (Dino_BusSand_App_UI_YachtRacingPanel__BounceSoundLoop_d__49_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel.<BounceSoundLoop>d__49$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingPanel__BounceSoundLoop_d__49__MoveNext
   (Dino_BusSand_App_UI_YachtRacingPanel__BounceSoundLoop_d__49_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_YachtRacingPanel__BounceSoundLoop_d__49__MoveNext_21ee370(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((bRam0000000004f9bc09 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
                    /* try { // try from 022ee39c to 023ee3a3 has its CatchHandler @ 022ee404 */
    FUN_02132f7c(PTR_DAT_04caca88);
                    /* try { // try from 022ee3a4 to 023ee42f has its CatchHandler @ 022ee2ec */
    FUN_02132f7c(PTR_DAT_04cb1298);
    bRam0000000004f9bc09 = 1;
  }
  puVar2 = PTR_DAT_04caca88;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3e800000,uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
                    /* catch() { ... } // from try @ 022ee39c with catch @ 022ee404 */
      uVar4 = 1;
      goto LAB_022ee498;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 022ee430 to 023ee4df has its CatchHandler @ 022ee430
                       catch() { ... } // from try @ 022ee430 with catch @ 022ee430
                       catch() { ... } // from try @ 022ee4e8 with catch @ 022ee430 */
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e1fe4c,uVar3,0);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar3);
  }
  puVar2 = PTR_DAT_04cb1298;
  if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)puVar2,0);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  thunk_FUN_02134474();
  uVar4 = 2;
LAB_022ee498:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return 1;
}

