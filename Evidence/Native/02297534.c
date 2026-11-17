/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<GuideStep>d__71$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideStep_d__71__MoveNext (Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideStep_d__71_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<GuideStep>d__71$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideStep_d__71__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideStep_d__71_o* __this, const MethodInfo*
   method); */

undefined4
Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideStep_d__71__MoveNext_2197534(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9b9d4 & 1) == 0) {
                    /* try { // try from 02297554 to 0239758b has its CatchHandler @ 02297554
                       catch() { ... } // from try @ 02297554 with catch @ 02297554
                       catch() { ... } // from try @ 02297594 with catch @ 02297554 */
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae340);
    bRam0000000004f9b9d4 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) {
LAB_02297670:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_BattleRoyaleScenePanel__HideTips_218dfa8(lVar3);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
                    /* try { // try from 0229758c to 02397593 has its CatchHandler @ 022975d4 */
                    /* try { // try from 02297594 to 02397607 has its CatchHandler @ 02297554 */
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 0229758c with catch @ 022975d4 */
      if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cae340,0);
      if (lVar3 != 0) {
        Dino_BusSand_App_UI_BattleRoyaleScenePanel__ShowTips_21956fc
                  (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                   *(undefined4 *)(param_1 + 0x38),_UNK_00e1fe34,lVar3,100,
                   *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40),
                   *(undefined1 *)(param_1 + 0x48),1);
        uVar4 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__WaitTap_21961fc(lVar3);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      goto LAB_02297670;
    }
  }
  return 0;
}

