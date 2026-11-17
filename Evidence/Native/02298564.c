/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<PlaySfx>d__78$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__PlaySfx_d__78__MoveNext (Dino_BusSand_App_UI_BattleRoyaleScenePanel__PlaySfx_d__78_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<PlaySfx>d__78$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__PlaySfx_d__78__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel__PlaySfx_d__78_o* __this, const MethodInfo* method);
    */

bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__PlaySfx_d__78__MoveNext_2198564(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
                    /* catch() { ... } // from try @ 02298540 with catch @ 02298574 */
  if ((bRam0000000004f9b9d8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9b9d8 = 1;
  }
  puVar3 = PTR_DAT_04caca88;
  puVar2 = PTR_DAT_04cab1e8;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* try { // try from 02298608 to 0239860f has its CatchHandler @ 022986ec */
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar5,uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
                    /* try { // try from 022985b0 to 023985d7 has its CatchHandler @ 022985b0
                       catch() { ... } // from try @ 022985b0 with catch @ 022985b0
                       catch() { ... } // from try @ 022986a8 with catch @ 022985b0 */
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022985d8 to 023985eb has its CatchHandler @ 022986e0 */
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,uVar4,0);
  }
  return iVar1 == 0;
}

