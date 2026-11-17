/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$OnMaskClick
void Dino_BusSand_App_UI_BattleRoyalePanel__OnMaskClick (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$OnMaskClick
   void Dino_BusSand_App_UI_BattleRoyalePanel__OnMaskClick (Dino_BusSand_App_UI_BattleRoyalePanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyalePanel__OnMaskClick_218de7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
                    /* catch() { ... } // from try @ 0228de50 with catch @ 0228de7c */
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
  uVar4 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  lVar5 = 0;
  if ((uVar3 & 1) != 0) {
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_0228dfa4;
    lVar5 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                      (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)PTR_DAT_04cade68);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (lVar5 != 0) {
    if ((bRam0000000004f9b9c5 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004f9b9c5 = 1;
    }
    puVar1 = PTR_DAT_04ca9ae8;
    if (*(char *)(lVar5 + 0x9d) == '\0') {
      if (*(int *)(lVar5 + 0x98) != -1) {
        uVar4 = *(undefined8 *)(lVar5 + 0x60);
        *(undefined4 *)(lVar5 + 0x98) = 0xffffffff;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
        if ((uVar3 & 1) != 0) {
          if ((*(long *)(lVar5 + 0x60) == 0) ||
             (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar5 + 0x60),0),
             lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((bRam0000000004fa8360 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
            bRam0000000004fa8360 = 1;
          }
          if (lVar5 != 0) {
            lVar6 = *(long *)(lVar5 + 0x10);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
            }
            if (pcRam0000000004fa8430 == (code *)0x0) {
              pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
            }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8430)(lVar6,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
    else {
      *(undefined1 *)(lVar5 + 0x9d) = 0;
    }
    return;
  }
LAB_0228dfa4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

