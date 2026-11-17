/* IL2CPP: Dino.BusSand.App.UI.DailyView$$Action
void Dino_BusSand_App_UI_DailyView__Action (Dino_BusSand_App_UI_DailyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.DailyView$$Action
   void Dino_BusSand_App_UI_DailyView__Action (Dino_BusSand_App_UI_DailyView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_DailyView__Action_21bb21c(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = PTR_DAT_04caf7f0;
  if ((bRam0000000004f9bac0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
                    /* try { // try from 022bb250 to 023bb257 has its CatchHandler @ 022bb2d8 */
                    /* try { // try from 022bb258 to 023bb2b3 has its CatchHandler @ 022bb218 */
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04caf7f8);
    FUN_02132f7c(PTR_DAT_04caf800);
    FUN_02132f7c(PTR_DAT_04caf7f0);
    bRam0000000004f9bac0 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
                    /* try { // try from 022bb2b4 to 023bb2bb has its CatchHandler @ 022bb2bc */
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 022bb2b4 with catch @ 022bb2bc
                       try { // try from 022bb2bc to 023bb2eb has its CatchHandler @ 022bb218 */
    *(long *)(lVar3 + 0x10) = param_1;
    thunk_FUN_02134474((long *)(lVar3 + 0x10),param_1);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar4 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_CanPlay_222fa88
                        (*(long *)(param_1 + 0x10),0);
      puVar1 = PTR_DAT_04caba50;
                    /* catch() { ... } // from try @ 022bb250 with catch @ 022bb2d8 */
      if ((uVar4 & 1) != 0) {
                    /* catch() { ... } // from try @ 022bb32c with catch @ 022bb2ec */
        if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
                    /* try { // try from 022bb324 to 023bb32b has its CatchHandler @ 022bb350 */
          lVar5 = *(long *)puVar1;
        }
                    /* try { // try from 022bb32c to 023bb363 has its CatchHandler @ 022bb2ec */
        uVar6 = **(undefined8 **)(lVar5 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
                    /* catch() { ... } // from try @ 022bb324 with catch @ 022bb350 */
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
        if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 022bb3dc with catch @ 022bb364
                       catch() { ... } // from try @ 022bb4b8 with catch @ 022bb364 */
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b88f == '\0') {
            FUN_02132f7c(PTR_DAT_04caba50);
            cRam0000000004f9b88f = '\x01';
          }
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar5 = *(long *)puVar1;
          }
          puVar1 = PTR_DAT_04caa458;
          lVar5 = **(long **)(lVar5 + 0xb8);
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 022bb3cc to 023bb3db has its CatchHandler @ 022bb4d8 */
          System_Action___ctor_47b5ed0(uVar6,lVar3,*(undefined8 *)PTR_DAT_04caf7f8,0);
          if (lVar5 == 0) goto LAB_022bb46c;
                    /* try { // try from 022bb3dc to 023bb46f has its CatchHandler @ 022bb364 */
          uVar4 = Dino_BusSand_App_GameApp__HasHeartOrRefill_21643c8(lVar5,uVar6,0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_022bb46c;
            uVar2 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_TodayLevel_222fa60
                              (*(long *)(param_1 + 0x10),0);
            uVar6 = *(undefined8 *)puVar1;
            *(undefined4 *)(lVar3 + 0x18) = uVar2;
            uVar6 = thunk_FUN_0216e89c(uVar6);
            System_Action___ctor_47b5ed0(uVar6,lVar3,*(undefined8 *)PTR_DAT_04caf800,0);
            if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_38 = 0;
            Dino_BusSand_App_UI_ScreenFade__Run_2289914(uVar6,&uStack_48,0);
          }
        }
      }
      return;
    }
  }
LAB_022bb46c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

