/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$ShowIconRaise
void Dino_BusSand_App_UI_GuidePanel__ShowIconRaise (Dino_BusSand_App_UI_GuidePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$ShowIconRaise
   void Dino_BusSand_App_UI_GuidePanel__ShowIconRaise (Dino_BusSand_App_UI_GuidePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__ShowIconRaise_22ca5e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  puVar2 = PTR_DAT_04caebe8;
  puVar1 = PTR_DAT_04cadc30;
  if ((bRam0000000004f9c373 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb68f0);
    FUN_02132f7c(PTR_DAT_04cad708);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caebe8);
    FUN_02132f7c(PTR_DAT_04cadc30);
    bRam0000000004f9c373 = 1;
  }
  plVar6 = (long *)Dino_BusSand_App_UI_UIPanel__Get_object__29460d0
                             (param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_023ca810;
  lVar10 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x18) < 1)) {
LAB_023ca780:
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if ((plVar6 == (long *)0x0) ||
         (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(plVar6,0), lVar10 == 0))
      goto LAB_023ca810;
      UnityEngine_GameObject__SetActive_43c1408(lVar10,1,0);
      (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
      (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
    if ((uVar7 & 1) == 0) goto LAB_023ca780;
    if ((plVar6 == (long *)0x0) ||
       (lVar10 = UnityEngine_Component__get_transform_43bcd18(plVar6,0), lVar10 == 0))
    goto LAB_023ca810;
    uVar8 = UnityEngine_Transform__get_parent_43d0d70(lVar10,0);
    if (*(int *)(*(long *)PTR_DAT_04cb68f0 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb68f0);
    }
    lVar10 = Dino_BusSand_App_UI_GuideDimHoles__Create_22c5a1c(0x3f400000,uVar8);
    plVar11 = (long *)(param_1 + 0xc0);
    *plVar11 = lVar10;
    thunk_FUN_02134474(plVar11,lVar10);
    if (*plVar11 == 0) goto LAB_023ca810;
    lVar10 = UnityEngine_Component__get_transform_43bcd18(*plVar11,0);
    lVar9 = UnityEngine_Component__get_transform_43bcd18(plVar6,0);
    if ((lVar9 == 0) ||
       (uVar4 = UnityEngine_Transform__GetSiblingIndex_43d48f4(lVar9,0), lVar10 == 0))
    goto LAB_023ca810;
    UnityEngine_Transform__SetSiblingIndex_43d4730(lVar10,uVar4,0);
    if ((*(long *)(param_1 + 0x38) == 0) || (*(long *)(param_1 + 0xc0) == 0)) goto LAB_023ca810;
    Dino_BusSand_App_UI_GuideDimHoles__AddTargets_22c5f54
              (*(long *)(param_1 + 0xc0),*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78));
    lVar10 = UnityEngine_Component__get_gameObject_43bcde8(plVar6,0);
    if (lVar10 == 0) goto LAB_023ca810;
    UnityEngine_GameObject__SetActive_43c1408(lVar10,0,0);
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_1 + 0x38) == 0) {
LAB_023ca810:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x38) + 0x28);
  if ((bRam0000000004f9c374 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5da8);
    FUN_02132f7c(PTR_DAT_04cad3d0);
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c374 = 1;
  }
  plVar6 = (long *)(param_1 + 0xd8);
  *plVar6 = lVar10;
  thunk_FUN_02134474(plVar6,lVar10);
  lVar10 = *plVar6;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (*plVar6 != 0) {
    uVar8 = UnityEngine_Component__GetComponent_object__26f97e8
                      (*plVar6,*(undefined8 *)PTR_DAT_04cb5da8);
    *(undefined8 *)(param_1 + 0xf0) = uVar8;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0xf0),uVar8);
    if (*(long *)(param_1 + 0xd8) != 0) {
      lVar10 = UnityEngine_Component__GetComponent_object__26f97e8
                         (*(long *)(param_1 + 0xd8),*(undefined8 *)PTR_DAT_04cad3d0);
      plVar11 = (long *)(param_1 + 0xe0);
      *plVar11 = lVar10;
      thunk_FUN_02134474(plVar11,lVar10);
      lVar10 = *plVar11;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      bVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
      *(byte *)(param_1 + 0xe8) = bVar3 & 1;
      if ((bVar3 & 1) == 0) {
        if (*plVar11 == 0) goto LAB_023caa0c;
        bVar3 = UnityEngine_Canvas__get_overrideSorting_467feb8(*plVar11,0);
        *(byte *)(param_1 + 0xe9) = bVar3 & 1;
        if (*(long *)(param_1 + 0xe0) == 0) goto LAB_023caa0c;
        uVar4 = UnityEngine_Canvas__get_sortingOrder_4680030(*(long *)(param_1 + 0xe0),0);
        *(undefined4 *)(param_1 + 0xec) = uVar4;
      }
      else {
        if ((*plVar6 == 0) ||
           (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*plVar6,0), lVar10 == 0))
        goto LAB_023caa0c;
        lVar10 = UnityEngine_GameObject__AddComponent_object__275a54c
                           (lVar10,*(undefined8 *)PTR_DAT_04cacf88);
        *plVar11 = lVar10;
        thunk_FUN_02134474(plVar11,lVar10);
      }
      if (*plVar11 != 0) {
        UnityEngine_Canvas__set_overrideSorting_467ff6c(*plVar11,1,0);
        if (*plVar11 != 0) {
          UnityEngine_Canvas__set_sortingOrder_46800e4(*plVar11,0x13ec,0);
          lVar10 = *plVar11;
          if (lVar10 != 0) {
            uVar5 = UnityEngine_Canvas__get_additionalShaderChannels_468054c(lVar10,0);
            if ((bRam0000000004fac4df & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04d09c28,uVar5 | 0x19,0);
              bRam0000000004fac4df = 1;
            }
            if (lVar10 != 0) {
              lVar9 = *(long *)(lVar10 + 0x10);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar10,0);
              }
              if (pcRam0000000004fac5e0 == (code *)0x0) {
                pcRam0000000004fac5e0 = (code *)FUN_02132f40(&UNK_00e4e17f);
              }
                    /* WARNING: Could not recover jumptable at 0x04780678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fac5e0)(lVar9,uVar5 | 0x19);
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

