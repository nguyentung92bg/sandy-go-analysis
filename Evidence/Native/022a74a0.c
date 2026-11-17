/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel.<TipsAnim>d__59$$MoveNext
bool Dino_BusSand_App_UI_ClimbTowerPanel__TipsAnim_d__59__MoveNext (Dino_BusSand_App_UI_ClimbTowerPanel__TipsAnim_d__59_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel.<TipsAnim>d__59$$MoveNext
   bool Dino_BusSand_App_UI_ClimbTowerPanel__TipsAnim_d__59__MoveNext
   (Dino_BusSand_App_UI_ClimbTowerPanel__TipsAnim_d__59_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_ClimbTowerPanel__TipsAnim_d__59__MoveNext_21a74a0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((bRam0000000004f9ba49 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadf40);
    FUN_02132f7c(PTR_DAT_04cada48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba49 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  fVar8 = _UNK_00e203f0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(float *)(param_1 + 0x48) < fVar8) goto LAB_022a75f8;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x20),0),
       lVar3 == 0)) goto LAB_022a780c;
    UnityEngine_GameObject__SetActive_43c1408(lVar3,1,0);
    lVar3 = *(long *)(param_1 + 0x20);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar3 == 0) goto LAB_022a780c;
    lVar7 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
               *(undefined4 *)(lVar7 + 0x14),lVar3,0);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_022a780c;
    uVar4 = UnityEngine_Component__GetComponent_object__26f97e8
                      (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cadf40);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar4);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_022a780c;
    uVar4 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                      (*(long *)(param_1 + 0x20),1,*(undefined8 *)PTR_DAT_04cada48);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x40),uVar4);
    *(undefined4 *)(param_1 + 0x48) = 0;
LAB_022a75f8:
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x20),0),
         lVar3 == 0)) goto LAB_022a780c;
      uVar5 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar3,0);
      if ((uVar5 & 1) != 0) {
        fVar11 = *(float *)(param_1 + 0x48);
        fVar8 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
        fVar11 = fVar11 + fVar8;
        *(float *)(param_1 + 0x48) = fVar11;
        fVar8 = _UNK_00e20838;
        if (*(long *)(param_1 + 0x20) != 0) {
          fVar12 = 1.0;
          fVar11 = fVar11 / _UNK_00e20838;
          fVar10 = 1.0;
          if (fVar11 <= 1.0) {
            fVar10 = fVar11;
          }
          fVar9 = 0.0;
          if (0.0 <= fVar11) {
            fVar9 = fVar10;
          }
          fVar11 = 0.0;
          if (0.0 <= fVar9) {
            fVar11 = fVar9;
          }
          fVar10 = (float)*(undefined8 *)(param_1 + 0x28);
          fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                    (fVar10 + ((float)*(undefined8 *)(param_1 + 0x30) - fVar10) * fVar11,
                     fVar9 + ((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) - fVar9) *
                             fVar11,*(long *)(param_1 + 0x20),0);
          fVar11 = *(float *)(param_1 + 0x48);
          if (0.5 <= fVar11) {
            if (fVar8 <= fVar11) {
              fVar12 = 1.0 - (fVar11 + _UNK_00e20100 + fVar11 + _UNK_00e20100);
            }
          }
          else {
            fVar12 = fVar11 + fVar11;
          }
          uVar4 = *(undefined8 *)(param_1 + 0x38);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
          if ((uVar5 & 1) == 0) {
            lVar3 = *(long *)(param_1 + 0x40);
            if (lVar3 != 0) {
              uVar1 = *(uint *)(lVar3 + 0x18);
              fVar8 = 1.0;
              if (fVar12 <= 1.0) {
                fVar8 = fVar12;
              }
              fVar11 = 0.0;
              if (0.0 <= fVar12) {
                fVar11 = fVar8;
              }
              if (0 < (int)uVar1) {
                lVar7 = 0;
                do {
                  if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  lVar6 = *(long *)(lVar3 + 0x20 + lVar7 * 8);
                  if (lVar6 == 0) goto LAB_022a780c;
                  TMPro_TMP_Text__set_alpha_42cbac0(fVar11,lVar6,0);
                  uVar1 = *(uint *)(lVar3 + 0x18);
                  lVar7 = lVar7 + 1;
                } while ((int)lVar7 < (int)uVar1);
              }
              goto LAB_022a77f0;
            }
          }
          else if (*(long *)(param_1 + 0x38) != 0) {
            fVar8 = 1.0;
            if (fVar12 <= 1.0) {
              fVar8 = fVar12;
            }
            fVar11 = 0.0;
            if (0.0 <= fVar12) {
              fVar11 = fVar8;
            }
            UnityEngine_CanvasGroup__set_alpha_467ad3c(fVar11,*(long *)(param_1 + 0x38),0);
LAB_022a77f0:
            *(undefined8 *)(param_1 + 0x18) = 0;
            thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
        }
        goto LAB_022a780c;
      }
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x20),0),
       lVar3 == 0)) {
LAB_022a780c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_GameObject__SetActive_43c1408(lVar3,0,0);
  }
  return 0;
}

