/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$ShowPencil
void Dino_BusSand_App_UI_HomeAtelier__ShowPencil (Dino_BusSand_App_UI_HomeAtelier_o* __this, Dino_BusSand_App_UI_HomeAtelier_Sheet_o* s, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$ShowPencil
   void Dino_BusSand_App_UI_HomeAtelier__ShowPencil (Dino_BusSand_App_UI_HomeAtelier_o* __this,
   Dino_BusSand_App_UI_HomeAtelier_Sheet_o* s, bool on, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__ShowPencil_22da20c
               (long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  puVar5 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3e1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0890);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb6950);
    FUN_02132f7c(PTR_DAT_04cb4db8);
    FUN_02132f7c(PTR_DAT_04cb7060);
    bRam0000000004f9c3e1 = 1;
  }
  plVar13 = (long *)(param_1 + 0xa0);
  lVar14 = *plVar13;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
  puVar6 = PTR_DAT_04cb7060;
  puVar5 = PTR_DAT_04cad330;
  if ((uVar10 & 1) != 0) {
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar14 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                       (0x42080000,0x432a0000,0,0,uVar15,*(undefined8 *)puVar6,0,0,0);
    *plVar13 = lVar14;
    thunk_FUN_02134474(plVar13,lVar14);
    if (*plVar13 != 0) {
      UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0,*plVar13,0);
      if (((*plVar13 != 0) &&
          (lVar14 = UnityEngine_Component__get_gameObject_43bcde8(*plVar13,0), lVar14 != 0)) &&
         (lVar14 = UnityEngine_GameObject__AddComponent_object__275a54c
                             (lVar14,*(undefined8 *)PTR_DAT_04cb0890), lVar14 != 0)) {
        UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar14,0,0);
        puVar9 = PTR_DAT_04cb6950;
        puVar8 = PTR_DAT_04cb4db8;
        puVar7 = PTR_DAT_04cacfc0;
        puVar6 = PTR_DAT_04cacf98;
        uVar4 = _UNK_00e20aec;
        uVar3 = _UNK_00e207dc;
        uVar2 = _UNK_00e20754;
        uVar18 = _UNK_00e201f4;
        iVar16 = 0;
        do {
          lVar14 = *plVar13;
          puVar1 = (undefined8 *)puVar9;
          if (iVar16 != 0) {
            puVar1 = (undefined8 *)puVar8;
          }
          uVar15 = *puVar1;
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar14 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                             (0x42080000,0x432a0000,0,0,lVar14,uVar15,0,0,0);
          if (lVar14 == 0) goto LAB_023da5b8;
          UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0,lVar14,0);
          UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0,lVar14,0);
          UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0,lVar14,0);
          if (iVar16 == 0) {
            uVar17 = 0x41100000;
            uVar19 = 0xc0c00000;
          }
          else {
            if (cRam0000000004f9b948 == '\0') {
              FUN_02132f7c(puVar7);
              cRam0000000004f9b948 = '\x01';
            }
            puVar12 = *(undefined4 **)(*(long *)puVar7 + 0xb8);
            uVar17 = *puVar12;
            uVar19 = puVar12[1];
          }
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(uVar17,uVar19,lVar14,0);
          lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0);
          if (lVar14 == 0) goto LAB_023da5b8;
          plVar11 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                      (lVar14,*(undefined8 *)puVar6);
          uVar15 = Dino_BusSand_App_UI_AtelierArt__get_Pencil_22da5bc();
          if (plVar11 == (long *)0x0) goto LAB_023da5b8;
          UnityEngine_UI_Image__set_sprite_44a7258(plVar11,uVar15,0);
          (**(code **)(*plVar11 + 0x2c8))(plVar11,0,*(undefined8 *)(*plVar11 + 0x2d0));
          if (iVar16 == 0) {
            (**(code **)(*plVar11 + 0x2a8))
                      (uVar18,uVar2,uVar3,uVar4,plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 != 2);
        goto LAB_023da52c;
      }
    }
LAB_023da5b8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_023da52c:
  uVar18 = 0;
  if ((param_3 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x130) = param_2;
    thunk_FUN_02134474(param_1 + 0x130);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    uVar18 = 0x3f800000;
    uVar15 = **(undefined8 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0xa8) = uVar15;
  }
  *(undefined4 *)(param_1 + 0x13c) = uVar18;
  return;
}

