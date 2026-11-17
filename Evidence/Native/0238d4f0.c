/* IL2CPP: Dino.BusSand.App.UI.KitHeightFit$$LateUpdate
void Dino_BusSand_App_UI_KitHeightFit__LateUpdate (Dino_BusSand_App_UI_KitHeightFit_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitHeightFit$$LateUpdate
   void Dino_BusSand_App_UI_KitHeightFit__LateUpdate (Dino_BusSand_App_UI_KitHeightFit_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_KitHeightFit__LateUpdate_228d4f0
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000004f9c1a1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c1a1 = 1;
  }
  lVar4 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
  puVar3 = PTR_DAT_04cad788;
  puVar2 = PTR_DAT_04cabdb0;
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar4 == 0) goto LAB_0238d7b8;
  plVar5 = (long *)UnityEngine_Transform__get_parent_43d0d70(lVar4,0);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else if (*plVar5 != *(long *)puVar2) {
    plVar5 = (long *)0x0;
  }
  lVar4 = UnityEngine_Component__GetComponent_object__26f97e8(param_5,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(plVar5,0,0);
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
    if ((uVar6 & 1) == 0) {
      if (lVar4 != 0) {
        uVar7 = *(undefined8 *)(lVar4 + 0xd8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
        if ((uVar6 & 1) != 0) {
          return;
        }
        if (plVar5 != (long *)0x0) {
          UnityEngine_RectTransform__get_rect_43cf450(plVar5,0);
          fVar8 = param_3 - *(float *)(param_5 + 0x2c);
          fVar9 = param_4 - *(float *)(param_5 + 0x30);
          if (fVar8 * fVar8 + fVar9 * fVar9 < _UNK_00e1fea0) {
            return;
          }
          *(float *)(param_5 + 0x2c) = param_3;
          *(float *)(param_5 + 0x30) = param_4;
          if (*(long *)(lVar4 + 0xd8) != 0) {
            fVar10 = *(float *)(param_5 + 0x20);
            fVar8 = param_4;
            fVar9 = param_3;
            UnityEngine_Sprite__get_rect_434ee28(*(long *)(lVar4 + 0xd8),0);
            if (*(long *)(lVar4 + 0xd8) != 0) {
              param_4 = param_4 * fVar10;
              UnityEngine_Sprite__get_rect_434ee28(*(long *)(lVar4 + 0xd8),0);
              fVar9 = (param_4 * fVar9) / fVar8;
              if (param_3 <= fVar9) {
                uVar6 = CONCAT44(param_4,fVar9);
              }
              else {
                if (*(long *)(lVar4 + 0xd8) == 0) goto LAB_0238d7b8;
                UnityEngine_Sprite__get_rect_434ee28(*(long *)(lVar4 + 0xd8),0);
                if (*(long *)(lVar4 + 0xd8) == 0) goto LAB_0238d7b8;
                UnityEngine_Sprite__get_rect_434ee28(*(long *)(lVar4 + 0xd8),0);
                uVar6 = CONCAT44((param_3 * fVar8) / param_4,param_3);
              }
              plVar5 = (long *)UnityEngine_Component__get_transform_43bcd18(param_5,0);
              if (plVar5 != (long *)0x0) {
                if (*plVar5 != *(long *)puVar2) {
                    /* WARNING: Subroutine does not return */
                  FUN_021335a4(plVar5);
                }
                UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f000000,plVar5,0);
                UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f000000,plVar5,0);
                UnityEngine_RectTransform__set_sizeDelta_43cfa70(uVar6,uVar6 >> 0x20,plVar5,0);
                if ((bRam0000000004fa8a88 & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf7bc8,0);
                  bRam0000000004fa8a88 = 1;
                }
                if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar4 = plVar5[2];
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
                }
                if (pcRam0000000004fa8ad0 == (code *)0x0) {
                  pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
                }
                (*pcRam0000000004fa8ad0)(lVar4,&stack0xffffffffffffffe8);
                return;
              }
            }
          }
        }
      }
LAB_0238d7b8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

