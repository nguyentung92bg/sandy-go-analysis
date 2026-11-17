/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$OnTipsClick
void Dino_BusSand_App_UI_BattleRoyalePanel__OnTipsClick (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$OnTipsClick
   void Dino_BusSand_App_UI_BattleRoyalePanel__OnTipsClick (Dino_BusSand_App_UI_BattleRoyalePanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyalePanel__OnTipsClick_218e05c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((bRam0000000004f9b994 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cade70);
    FUN_02132f7c(PTR_DAT_04cade78);
    FUN_02132f7c(PTR_DAT_04cade80);
    bRam0000000004f9b994 = 1;
  }
  if ((*(long *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x4c) != '\0')) {
    return;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
LAB_0228e204:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)(param_1 + 0x38) + 0x10) == 2) {
    iVar3 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                      (*(long *)(param_1 + 0x40),0);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0228e204;
    iVar4 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc
                      (*(long *)(param_1 + 0x40),0);
    if (iVar3 == iVar4 + -1) {
      return;
    }
  }
  if (cRam0000000004f9b94d == '\0') {
                    /* catch() { ... } // from try @ 0228e218 with catch @ 0228e114 */
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar1 = PTR_DAT_04cad1b0;
  uVar7 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
    if (lVar6 == 0) goto LAB_0228e204;
    uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar6,*(undefined8 *)PTR_DAT_04cade70);
                    /* try { // try from 0228e1a4 to 0238e1af has its CatchHandler @ 0228e258 */
    if ((uVar5 & 1) == 0) {
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar6 == 0) goto LAB_0228e204;
                    /* try { // try from 0228e1ec to 0238e1f7 has its CatchHandler @ 0228e244 */
      Dino_BusSand_App_UI_UIManager__Open_object__2945314
                (lVar6,*(undefined8 *)PTR_DAT_04cade80,3,0,*(undefined8 *)PTR_DAT_04cade78);
    }
  }
  if ((bRam0000000004f9b993 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cade68);
    bRam0000000004f9b993 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar2 = PTR_DAT_04cad1b0;
  uVar7 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  lVar6 = 0;
  if ((uVar5 & 1) != 0) {
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_0228dfa4;
    lVar6 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                      (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)PTR_DAT_04cade68);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (lVar6 != 0) {
    if ((bRam0000000004f9b9c5 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004f9b9c5 = 1;
    }
    puVar1 = PTR_DAT_04ca9ae8;
    if (*(char *)(lVar6 + 0x9d) == '\0') {
      if (*(int *)(lVar6 + 0x98) != -1) {
        uVar7 = *(undefined8 *)(lVar6 + 0x60);
        *(undefined4 *)(lVar6 + 0x98) = 0xffffffff;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((uVar5 & 1) != 0) {
          if ((*(long *)(lVar6 + 0x60) == 0) ||
             (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar6 + 0x60),0),
             lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((bRam0000000004fa8360 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
            bRam0000000004fa8360 = 1;
          }
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar8 = *(long *)(lVar6 + 0x10);
          if (lVar8 != 0) {
            if (pcRam0000000004fa8430 == (code *)0x0) {
              pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
            }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8430)(lVar8,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
        }
      }
    }
    else {
      *(undefined1 *)(lVar6 + 0x9d) = 0;
    }
    return;
  }
LAB_0228dfa4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

