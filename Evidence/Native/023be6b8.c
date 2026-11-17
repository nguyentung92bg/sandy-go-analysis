/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$GoToPage
void Dino_BusSand_App_UI_ContinueBottomPager__GoToPage (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, int32_t page, bool animated, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$GoToPage
   void Dino_BusSand_App_UI_ContinueBottomPager__GoToPage
   (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, int32_t page, bool animated, float duration,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPager__GoToPage_22be6b8
               (float param_1,long param_2,int param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar4 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c324 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c324 = 1;
  }
  Dino_BusSand_App_UI_ContinueBottomPager__EnsureRefs_22be060(param_2);
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
  if ((uVar6 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
    if ((uVar6 & 1) == 0) {
      iVar5 = Dino_BusSand_App_UI_ContinueBottomPager__get_PageCount_22bdf80(param_2);
      iVar3 = iVar5 + -1;
      if (0 < iVar5) {
        iVar1 = param_3;
        if (iVar3 <= param_3) {
          iVar1 = iVar3;
        }
        iVar2 = 0;
        if (-1 < param_3) {
          iVar2 = iVar1;
        }
        Dino_BusSand_App_UI_ContinueBottomPager__StopTween_22be264(param_2);
        lVar9 = *(long *)(param_2 + 0x38);
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0xb8) = **(undefined8 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
          fVar12 = 0.0;
          if (iVar5 != 1) {
            fVar10 = (float)iVar2 / (float)iVar3;
            fVar11 = 1.0;
            if (fVar10 <= 1.0) {
              fVar11 = fVar10;
            }
            fVar12 = 0.0;
            if (0.0 <= fVar10) {
              fVar12 = fVar11;
            }
          }
          if (param_1 < 0.0) {
            param_1 = *(float *)(param_2 + 0x20);
          }
          if ((((param_4 & 1) != 0) && (0.0 < param_1)) &&
             (uVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_2,0),
             (uVar6 & 1) != 0)) {
            uVar8 = Dino_BusSand_App_UI_ContinueBottomPager__Tween_22bec70
                              (fVar12,param_1,param_2,iVar2);
            uVar8 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_2,uVar8,0);
            puVar7 = (undefined8 *)(param_2 + 0x60);
            *puVar7 = uVar8;
            if (iRam00000000051c1b10 != 0) {
              FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                           ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
            }
            return;
          }
          if (*(long *)(param_2 + 0x38) != 0) {
            UnityEngine_UI_ScrollRect__set_horizontalNormalizedPosition_46906cc
                      (fVar12,*(long *)(param_2 + 0x38),0);
            *(int *)(param_2 + 0x68) = iVar2;
            if (*(int *)(param_2 + 0x58) == iVar2) {
              return;
            }
            lVar9 = *(long *)(param_2 + 0x28);
            *(int *)(param_2 + 0x58) = iVar2;
            if (lVar9 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x023be8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),iVar2,*(undefined8 *)(lVar9 + 0x28));
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
  return;
}

