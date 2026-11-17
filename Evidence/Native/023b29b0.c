/* IL2CPP: Dino.BusSand.App.UI.PurchaseItemPanel$$FlyBooster
void Dino_BusSand_App_UI_PurchaseItemPanel__FlyBooster (Dino_BusSand_App_UI_PurchaseItemPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PurchaseItemPanel$$FlyBooster
   void Dino_BusSand_App_UI_PurchaseItemPanel__FlyBooster (Dino_BusSand_App_UI_PurchaseItemPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PurchaseItemPanel__FlyBooster_22b29b0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 uVar11;
  
  puVar4 = PTR_DAT_04cad4f8;
  if ((bRam0000000004f9c2d6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4f8);
    FUN_02132f7c(PTR_DAT_04cb5028);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c2d6 = 1;
  }
  uVar1 = *(undefined4 *)(param_5 + 0x44);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_UI_BoosterFly__IsBooster_217f61c(uVar1,0);
  puVar3 = PTR_DAT_04cb5028;
  if ((uVar5 & 1) != 0) {
    uVar6 = Dino_BusSand_App_UI_KitParts__ItemIcon_23100d0(*(undefined4 *)(param_5 + 0x44),0);
    lVar7 = UnityEngine_Component__GetComponentsInChildren_object__26fa290
                      (param_5,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_04ca9ae8;
    if (lVar7 == 0) {
LAB_023b2bbc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar2) {
      uVar10 = 0;
      do {
        if (uVar2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar8 = *(long *)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_023b2bbc;
        uVar9 = *(undefined8 *)(lVar8 + 0xd8);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar9,uVar6,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
          if ((uVar5 & 1) != 0) {
            uVar1 = *(undefined4 *)(param_5 + 0x44);
            lVar7 = UnityEngine_Component__get_transform_43bcd18(lVar8,0);
            if (lVar7 != 0) {
              uVar11 = UnityEngine_Transform__get_position_43d0e48(lVar7,0);
              lVar7 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar8,0);
              if (lVar7 != 0) {
                UnityEngine_RectTransform__get_rect_43cf450(lVar7,0);
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_UI_BoosterFly__Fly_217f630
                          (uVar11,param_2,param_3,param_4,uVar1,uVar6,0,0,0);
                lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
                if (lVar7 != 0) {
                  if ((bRam0000000004fa8360 & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
                    bRam0000000004fa8360 = 1;
                  }
                  if (lVar7 != 0) {
                    lVar8 = *(long *)(lVar7 + 0x10);
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0)
                      ;
                    }
                    if (pcRam0000000004fa8430 == (code *)0x0) {
                      pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
                    }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000004fa8430)(lVar8,0);
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
              }
            }
            goto LAB_023b2bbc;
          }
        }
        uVar2 = *(uint *)(lVar7 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar2);
    }
  }
  return;
}

