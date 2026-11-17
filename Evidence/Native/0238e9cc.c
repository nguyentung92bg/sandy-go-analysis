/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$SlideIn
Dino_BusSand_App_Tween_o* Dino_BusSand_App_UI_UiMotion__SlideIn (UnityEngine_RectTransform_o* rt, UnityEngine_Vector2_o offset, float delay, float duration, bool fade, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$SlideIn
   Dino_BusSand_App_Tween_o* Dino_BusSand_App_UI_UiMotion__SlideIn (UnityEngine_RectTransform_o* rt,
   UnityEngine_Vector2_o offset, float delay, float duration, bool fade, const MethodInfo* method);
    */

long Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc
               (undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,long param_5,
               ulong param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  
  puVar1 = PTR_DAT_04cb52a8;
  uVar13 = param_2;
  if ((bRam0000000004f9c1c3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2860);
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb52b0);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb52b8);
    FUN_02132f7c(PTR_DAT_04cb52c0);
    FUN_02132f7c(PTR_DAT_04cb52c8);
    FUN_02132f7c(PTR_DAT_04cb52d0);
    FUN_02132f7c(PTR_DAT_04cb52a8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04caed88);
    bRam0000000004f9c1c3 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar2 != 0) {
    plVar7 = (long *)(lVar2 + 0x18);
    *plVar7 = param_5;
    thunk_FUN_02134474(plVar7,param_5);
    lVar3 = *(long *)puVar1;
    *(undefined4 *)(lVar2 + 0x20) = param_1;
    *(undefined4 *)(lVar2 + 0x24) = param_2;
    lVar10 = *plVar7;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    if (*plVar7 != 0) {
      uVar11 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(*plVar7,0);
      lVar3 = 0;
      *(undefined4 *)(lVar2 + 0x28) = uVar11;
      *(undefined4 *)(lVar2 + 0x2c) = uVar13;
      if ((param_6 & 1) != 0) {
        if (*plVar7 == 0) goto LAB_0238edd8;
        uVar5 = UnityEngine_Component__get_gameObject_43bcde8(*plVar7,0);
        if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
        }
        lVar3 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar5);
      }
      plVar9 = (long *)(lVar2 + 0x30);
      *plVar9 = lVar3;
      thunk_FUN_02134474(plVar9);
      if (*(long *)(lVar2 + 0x18) != 0) {
        uVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar2 + 0x18),0);
        if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac1e8);
        }
        Dino_BusSand_App_Tween__KillAll_2161a90(uVar5,0);
        if (*plVar7 != 0) {
          fVar12 = (float)((ulong)*(undefined8 *)(lVar2 + 0x28) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20);
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                    (CONCAT44(fVar12,(float)*(undefined8 *)(lVar2 + 0x28) +
                                     (float)*(undefined8 *)(lVar2 + 0x20)),fVar12,*plVar7,0);
          uVar5 = *(undefined8 *)(lVar2 + 0x30);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
          if ((uVar4 & 1) != 0) {
            if (*plVar9 == 0) goto LAB_0238edd8;
            UnityEngine_CanvasGroup__set_alpha_467ad3c(0,*plVar9,0);
          }
          puVar1 = PTR_DAT_04cad7b8;
          lVar3 = *plVar7;
          if (*(int *)(*(long *)PTR_DAT_04cad7b8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = Dino_BusSand_App_UI_KitAdopt__Edited_227dd34(lVar3);
          if ((uVar4 & 1) == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = FUN_02133068(*(undefined8 *)PTR_DAT_04caed88,1);
            if (lVar3 == 0) goto LAB_0238edd8;
            if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x28);
          }
          plVar7 = (long *)(lVar2 + 0x10);
          *plVar7 = lVar3;
          thunk_FUN_02134474(plVar7);
          if (*plVar7 != 0) {
            uVar8 = *(undefined8 *)(lVar2 + 0x18);
            uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb52b0);
            System_Func_Vector2____ctor_379f45c(uVar5,lVar2,*(undefined8 *)PTR_DAT_04cb52b8,0);
            uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2860);
            System_Action_Vector2____ctor_35f2774(uVar6,lVar2,*(undefined8 *)PTR_DAT_04cb52c0,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_UI_KitAdopt__RestPos_227e014(uVar8,uVar5,uVar6);
          }
          uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
          System_Action_float____ctor_35f1448(uVar5,lVar2,*(undefined8 *)PTR_DAT_04cb52c8,0);
          if (*(long *)(lVar2 + 0x18) != 0) {
            uVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar2 + 0x18),0);
            uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar8,lVar2,*(undefined8 *)PTR_DAT_04cb52d0,0);
            if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            puVar1 = PTR_DAT_04cac1e8;
            if ((bRam0000000004f9c1bd & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04caa210);
              FUN_02132f7c(PTR_DAT_04cb4ce0);
              FUN_02132f7c(PTR_DAT_04cac1e8);
              bRam0000000004f9c1bd = 1;
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar2 = Dino_BusSand_App_Tween__Value_2160f64(param_4,uVar5,0);
            if (((lVar2 != 0) &&
                (lVar2 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar2,1,0), lVar2 != 0)) &&
               (lVar2 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar2,uVar6,0), lVar2 != 0)) {
              lVar2 = Dino_BusSand_App_Tween__OnDone_2160edc(lVar2,uVar8,0);
              if (0.0 < param_3) {
                if (lVar2 == 0) goto LAB_02390cdc;
                Dino_BusSand_App_Tween__SetDelay_2160ea8(param_3,lVar2,0);
              }
              if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar4 = UnityEngine_Application__get_isPlaying_4351eec(0);
              puVar1 = PTR_DAT_04cb4ce0;
              if ((uVar4 & 1) != 0) {
                lVar3 = *(long *)PTR_DAT_04cb4ce0;
                if (*(int *)(lVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar3 = *(long *)puVar1;
                }
                if (*(char *)(*(long *)(lVar3 + 0xb8) + 1) == '\0') {
                  return lVar2;
                }
              }
              if (lVar2 != 0) {
                Dino_BusSand_App_Tween__Kill_2160f04(lVar2,1,0);
                return lVar2;
              }
            }
LAB_02390cdc:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
      }
    }
  }
LAB_0238edd8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

