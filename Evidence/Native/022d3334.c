/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$FitScroll
void Dino_BusSand_App_UI_PassportPanel__FitScroll (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$FitScroll
   void Dino_BusSand_App_UI_PassportPanel__FitScroll (Dino_BusSand_App_UI_PassportPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__FitScroll_21d3334(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  float in_s3;
  float fVar10;
  
  puVar1 = PTR_DAT_04cadaf8;
  if ((bRam0000000004f9bb4e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cadf50);
    FUN_02132f7c(PTR_DAT_04cadaf8);
    bRam0000000004f9bb4e = 1;
  }
  puVar3 = PTR_DAT_04cadf50;
  puVar2 = PTR_DAT_04cabdb0;
  plVar4 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar1,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else if (*plVar4 != *(long *)puVar2) {
    plVar4 = (long *)0x0;
  }
                    /* try { // try from 022d33e4 to 023d35c7 has its CatchHandler @ 022d35e0 */
  plVar5 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar3,0);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else if (*plVar5 != *(long *)puVar2) {
    plVar5 = (long *)0x0;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  plVar9 = (long *)0x0;
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_022d3558;
    plVar9 = (long *)UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x58),0);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else if (*plVar9 != *(long *)puVar2) {
      plVar9 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(plVar4,0,0);
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(plVar5,0,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Equality_43c6f30(plVar9,0,0);
      if ((uVar6 & 1) == 0) {
        UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
        if ((plVar4 != (long *)0x0) &&
           (UnityEngine_RectTransform__get_rect_43cf450(plVar4,0), plVar5 != (long *)0x0)) {
          fVar10 = in_s3;
          UnityEngine_RectTransform__get_rect_43cf450(plVar5,0);
          if (in_s3 - fVar10 <= 100.0) {
            return;
          }
          if (plVar9 != (long *)0x0) {
            UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar9,0);
            if ((bRam0000000004fa8a8a & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7bc8,0);
              bRam0000000004fa8a8a = 1;
            }
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar7 = plVar9[2];
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
            }
            if (pcRam0000000004fa8ae0 == (code *)0x0) {
              pcRam0000000004fa8ae0 = (code *)FUN_02132f40(&UNK_00e51f73);
            }
            (*pcRam0000000004fa8ae0)(lVar7,&stack0xffffffffffffffe8);
            return;
          }
        }
LAB_022d3558:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
  return;
}

