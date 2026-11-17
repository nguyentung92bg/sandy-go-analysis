/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$RebuildAfterItemsChanged
void Dino_BusSand_App_UI_ContinueBottomPager__RebuildAfterItemsChanged (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$RebuildAfterItemsChanged
   void Dino_BusSand_App_UI_ContinueBottomPager__RebuildAfterItemsChanged
   (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPager__RebuildAfterItemsChanged_22be8dc
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  
  puVar4 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c323 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad7a0);
    FUN_02132f7c(PTR_DAT_04cb65a0);
    FUN_02132f7c(PTR_DAT_04cadb40);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c323 = 1;
  }
  Dino_BusSand_App_UI_ContinueBottomPager__EnsureRefs_22be060(param_4);
  uVar14 = *(undefined8 *)(param_4 + 0x40);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar14,0,0);
  if ((uVar9 & 1) == 0) {
    uVar14 = *(undefined8 *)(param_4 + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar14,0,0);
    if ((uVar9 & 1) == 0) {
      UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
      if (*(long *)(param_4 + 0x48) != 0) {
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_4 + 0x48),0);
        puVar7 = PTR_DAT_04cb65a0;
        puVar6 = PTR_DAT_04cad7a0;
        puVar5 = PTR_DAT_04cabdb0;
        if (param_3 <= 0.0) {
LAB_023beb3c:
          uVar14 = *(undefined8 *)(param_4 + 0x40);
          if (*(int *)(*(long *)PTR_DAT_04cadb40 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate_46873dc(uVar14,0);
          UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
          iVar8 = Dino_BusSand_App_UI_ContinueBottomPager__get_PageCount_22bdf80(param_4);
          iVar13 = iVar8 + -1;
          if (iVar13 == 0 || iVar8 < 1) {
            if (*(long *)(param_4 + 0x38) != 0) {
              UnityEngine_UI_ScrollRect__set_horizontalNormalizedPosition_46906cc
                        (0,*(long *)(param_4 + 0x38),0);
              *(undefined4 *)(param_4 + 0x68) = 0;
              if (*(int *)(param_4 + 0x58) == 0) {
                return;
              }
              lVar10 = *(long *)(param_4 + 0x28);
              *(undefined4 *)(param_4 + 0x58) = 0;
              if (lVar10 == 0) {
                return;
              }
              iVar13 = 0;
              goto LAB_023bec18;
            }
          }
          else {
            iVar2 = *(int *)(param_4 + 0x68);
            iVar8 = iVar2;
            if (iVar13 <= iVar2) {
              iVar8 = iVar13;
            }
            iVar1 = 0;
            if (-1 < iVar2) {
              iVar1 = iVar8;
            }
            *(int *)(param_4 + 0x68) = iVar1;
            if (*(long *)(param_4 + 0x38) != 0) {
              fVar15 = (float)iVar1 / (float)iVar13;
              fVar16 = 1.0;
              if (fVar15 <= 1.0) {
                fVar16 = fVar15;
              }
              fVar3 = 0.0;
              if (0.0 <= fVar15) {
                fVar3 = fVar16;
              }
              UnityEngine_UI_ScrollRect__set_horizontalNormalizedPosition_46906cc
                        (fVar3,*(long *)(param_4 + 0x38),0);
              iVar13 = *(int *)(param_4 + 0x68);
              if (*(int *)(param_4 + 0x58) == iVar13) {
                return;
              }
              lVar10 = *(long *)(param_4 + 0x28);
              *(int *)(param_4 + 0x58) = iVar13;
              if (lVar10 == 0) {
                return;
              }
LAB_023bec18:
                    /* WARNING: Could not recover jumptable at 0x023bec3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar10 + 0x18))
                        (*(undefined8 *)(lVar10 + 0x40),iVar13,*(undefined8 *)(lVar10 + 0x28));
              return;
            }
          }
        }
        else {
          lVar10 = *(long *)(param_4 + 0x40);
          if (lVar10 != 0) {
            iVar13 = 0;
            do {
              iVar8 = UnityEngine_Transform__get_childCount_43d4480(lVar10,0);
              if (iVar8 <= iVar13) goto LAB_023beb3c;
              if (*(long *)(param_4 + 0x40) == 0) break;
              plVar11 = (long *)UnityEngine_Transform__GetChild_43d5294
                                          (*(long *)(param_4 + 0x40),iVar13,0);
              if (plVar11 == (long *)0x0) {
                plVar11 = (long *)0x0;
              }
              else if (*plVar11 != *(long *)puVar5) {
                plVar11 = (long *)0x0;
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar9 = UnityEngine_Object__op_Equality_43c6f30(plVar11,0,0);
              if ((uVar9 & 1) == 0) {
                if ((plVar11 == (long *)0x0) ||
                   (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(plVar11,0), lVar10 == 0))
                break;
                uVar9 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar10,0);
                if ((uVar9 & 1) != 0) {
                  plVar12 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                              (plVar11,*(undefined8 *)puVar6);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar4);
                  }
                  uVar9 = UnityEngine_Object__op_Equality_43c6f30(plVar12,0,0);
                  if ((uVar9 & 1) != 0) {
                    lVar10 = UnityEngine_Component__get_gameObject_43bcde8(plVar11,0);
                    if (lVar10 == 0) break;
                    plVar12 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                (lVar10,*(undefined8 *)puVar7);
                  }
                  if (plVar12 == (long *)0x0) break;
                  (**(code **)(*plVar12 + 0x338))(param_3,plVar12,*(undefined8 *)(*plVar12 + 0x340))
                  ;
                  (**(code **)(*plVar12 + 0x378))(param_3,plVar12,*(undefined8 *)(*plVar12 + 0x380))
                  ;
                  UnityEngine_RectTransform__SetSizeWithCurrentAnchors_43d09cc(param_3,plVar11,0,0);
                }
              }
              lVar10 = *(long *)(param_4 + 0x40);
              iVar13 = iVar13 + 1;
            } while (lVar10 != 0);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

