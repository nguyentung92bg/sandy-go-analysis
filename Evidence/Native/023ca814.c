/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$Raise
void Dino_BusSand_App_UI_GuidePanel__Raise (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_RectTransform_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$Raise
   void Dino_BusSand_App_UI_GuidePanel__Raise (Dino_BusSand_App_UI_GuidePanel_o* __this,
   UnityEngine_RectTransform_o* target, const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__Raise_22ca814(long param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c374 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5da8);
    FUN_02132f7c(PTR_DAT_04cad3d0);
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c374 = 1;
  }
  plVar10 = (long *)(param_1 + 0xd8);
  *plVar10 = param_2;
  thunk_FUN_02134474(plVar10,param_2);
  lVar7 = *plVar10;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*plVar10 != 0) {
    uVar6 = UnityEngine_Component__GetComponent_object__26f97e8
                      (*plVar10,*(undefined8 *)PTR_DAT_04cb5da8);
    *(undefined8 *)(param_1 + 0xf0) = uVar6;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0xf0),uVar6);
    if (*(long *)(param_1 + 0xd8) != 0) {
      lVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                        (*(long *)(param_1 + 0xd8),*(undefined8 *)PTR_DAT_04cad3d0);
      plVar8 = (long *)(param_1 + 0xe0);
      *plVar8 = lVar7;
      thunk_FUN_02134474(plVar8,lVar7);
      lVar7 = *plVar8;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      bVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
      *(byte *)(param_1 + 0xe8) = bVar2 & 1;
      if ((bVar2 & 1) == 0) {
        if (*plVar8 == 0) goto LAB_023caa0c;
        bVar2 = UnityEngine_Canvas__get_overrideSorting_467feb8(*plVar8,0);
        *(byte *)(param_1 + 0xe9) = bVar2 & 1;
        if (*(long *)(param_1 + 0xe0) == 0) goto LAB_023caa0c;
        uVar3 = UnityEngine_Canvas__get_sortingOrder_4680030(*(long *)(param_1 + 0xe0),0);
        *(undefined4 *)(param_1 + 0xec) = uVar3;
      }
      else {
        if ((*plVar10 == 0) ||
           (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*plVar10,0), lVar7 == 0))
        goto LAB_023caa0c;
        lVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                          (lVar7,*(undefined8 *)PTR_DAT_04cacf88);
        *plVar8 = lVar7;
        thunk_FUN_02134474(plVar8,lVar7);
      }
      if (*plVar8 != 0) {
        UnityEngine_Canvas__set_overrideSorting_467ff6c(*plVar8,1,0);
        if (*plVar8 != 0) {
          UnityEngine_Canvas__set_sortingOrder_46800e4(*plVar8,0x13ec,0);
          lVar7 = *plVar8;
          if (lVar7 != 0) {
            uVar4 = UnityEngine_Canvas__get_additionalShaderChannels_468054c(lVar7,0);
            if ((bRam0000000004fac4df & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04d09c28,uVar4 | 0x19,0);
              bRam0000000004fac4df = 1;
            }
            if (lVar7 != 0) {
              lVar9 = *(long *)(lVar7 + 0x10);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
              }
              if (pcRam0000000004fac5e0 == (code *)0x0) {
                pcRam0000000004fac5e0 = (code *)FUN_02132f40(&UNK_00e4e17f);
              }
                    /* WARNING: Could not recover jumptable at 0x04780678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fac5e0)(lVar9,uVar4 | 0x19);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
      }
    }
  }
LAB_023caa0c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

