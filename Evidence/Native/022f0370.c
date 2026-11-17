/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$.ctor
void Dino_BusSand_App_UI_YachtRacingRewardPanel___ctor (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$.ctor
   void Dino_BusSand_App_UI_YachtRacingRewardPanel___ctor
   (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_YachtRacingRewardPanel___ctor_21f0370(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_04cb13a8;
  puVar3 = PTR_DAT_04cb13a0;
  puVar2 = PTR_DAT_04cad588;
  puVar1 = PTR_DAT_04cad580;
                    /* catch() { ... } // from try @ 022f0340 with catch @ 022f03a8 */
  if ((bRam0000000004f9bc1b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad588);
    FUN_02132f7c(PTR_DAT_04cb13a8);
    FUN_02132f7c(PTR_DAT_04cad580);
                    /* catch() { ... } // from try @ 022f0478 with catch @ 022f03d4
                       catch() { ... } // from try @ 022f04d4 with catch @ 022f03d4
                       catch() { ... } // from try @ 022f0554 with catch @ 022f03d4
                       catch() { ... } // from try @ 022f0610 with catch @ 022f03d4 */
    FUN_02132f7c(PTR_DAT_04cb13a0);
    bRam0000000004f9bc1b = 1;
  }
  uVar5 = *(undefined8 *)puVar1;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  uVar5 = thunk_FUN_0216e89c(uVar5);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x50),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x58),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_ActivityRewardEntry____ctor_39e1448(uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x60),uVar5);
  puVar2 = PTR_DAT_04cb1698;
  puVar1 = PTR_DAT_04cb1690;
                    /* try { // try from 022f0470 to 023f0477 has its CatchHandler @ 022f06cc */
  if ((bRam0000000004f9bc9e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1698,0);
    FUN_02132f7c(PTR_DAT_04cb1690);
    bRam0000000004f9bc9e = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar5);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

