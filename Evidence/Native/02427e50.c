/* IL2CPP: Dino.BusSand.App.UI.ChestPanel.<>c__DisplayClass9_0$$<OnOpen>b__3
void Dino_BusSand_App_UI_ChestPanel___c__DisplayClass9_0___OnOpen_b__3 (Dino_BusSand_App_UI_ChestPanel___c__DisplayClass9_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ChestPanel.<>c__DisplayClass9_0$$<OnOpen>b__3
   void Dino_BusSand_App_UI_ChestPanel___c__DisplayClass9_0___OnOpen_b__3
   (Dino_BusSand_App_UI_ChestPanel___c__DisplayClass9_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ChestPanel___c__DisplayClass9_0___OnOpen_b__3_2327e50(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c5f2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c5f2 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x2c) != '\0') {
      return;
    }
                    /* try { // try from 02427ed4 to 02527ed7 has its CatchHandler @ 02427ed8 */
    uVar7 = *(undefined8 *)(param_1 + 0x28);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02427dd4 with catch @ 02427ed8
                       catch(type#1 @ 049bb748) { ... } // from try @ 02427ed4 with catch @ 02427ed8
                       try { // try from 02427ed8 to 02527eef has its CatchHandler @ 02427c3c */
    uVar5 = Dino_BusSand_App_Meta_Monetization__get_WinChestAdMultiplier_2267e58(0);
                    /* try { // try from 02427ef0 to 02527f07 has its CatchHandler @ 02427f70 */
    Dino_BusSand_App_UI_RewardPopup__BuildButtons_23249f0(0x442f0000,lVar8,uVar7,uVar5,0);
    puVar4 = PTR_DAT_04cad4c0;
    if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 02427f08 to 02527f5f has its CatchHandler @ 02427c3c */
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48);
      if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = _UNK_00e207cc;
      uVar1 = _UNK_00e2032c;
      uVar5 = _UNK_00e20094;
      Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                (0,_UNK_00e20094,_UNK_00e207cc,_UNK_00e2032c,uVar7,0,0,0);
                    /* try { // try from 02427f60 to 02527f6f has its CatchHandler @ 02427f70 */
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50);
                    /* catch() { ... } // from try @ 02427ef0 with catch @ 02427f70
                       catch() { ... } // from try @ 02427f60 with catch @ 02427f70 */
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 02427f74 to 02527f77 has its CatchHandler @ 02427f80 */
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 02427f78 to 02527f83 has its CatchHandler @ 02427c3c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02427f74 with catch @ 02427f80
                        */
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_02427ff8;
          uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_UiMotion__Appear_228e0dc(_UNK_00e20174,uVar5,uVar2,uVar1,uVar7,0,0,0);
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x42) = 1;
          return;
        }
      }
    }
  }
LAB_02427ff8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

