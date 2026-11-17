/* IL2CPP: Dino.BusSand.App.UI.NewBoosterPanel$$Claim
void Dino_BusSand_App_UI_NewBoosterPanel__Claim (Dino_BusSand_App_UI_NewBoosterPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.NewBoosterPanel$$Claim
   void Dino_BusSand_App_UI_NewBoosterPanel__Claim (Dino_BusSand_App_UI_NewBoosterPanel_o* __this,
   const MethodInfo* method); */

ulong Dino_BusSand_App_UI_NewBoosterPanel__Claim_2333b5c
                (undefined1 param_1 [16],undefined4 param_2,float param_3,long *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar10;
  long *plVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  puVar3 = PTR_DAT_04caba50;
  if ((bRam0000000004f9c62f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4f8);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6238);
    bRam0000000004f9c62f = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar4 = PTR_DAT_04ca9ae8;
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar3;
  }
  uVar10 = **(undefined8 **)(lVar8 + 0xb8);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  lVar8 = 0;
  if ((uVar9 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar3;
    }
    if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_02433e64;
    lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x48);
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  uVar10 = 0;
  if ((uVar9 & 1) != 0) {
    if (lVar8 == 0) goto LAB_02433e64;
    uVar10 = Dino_BusSand_App_UI_HudPanel__ItemRect_230e450
                       (lVar8,*(undefined4 *)((long)param_4 + 0x4c),0);
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
  if ((uVar9 & 1) == 0) {
    lVar8 = param_4[10];
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    if ((uVar9 & 1) == 0) {
      lVar8 = param_4[10];
      if (lVar8 == 0) {
LAB_02433e64:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar1 = *(undefined4 *)((long)param_4 + 0x4c);
      uVar10 = *(undefined8 *)(lVar8 + 0xd8);
      lVar8 = UnityEngine_Component__get_transform_43bcd18(lVar8,0);
      if (lVar8 == 0) goto LAB_02433e64;
      uVar12 = UnityEngine_Transform__get_position_43d0e48(lVar8,0);
      if ((param_4[10] == 0) ||
         (fVar15 = param_3, lVar8 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(param_4[10],0)
         , lVar8 == 0)) goto LAB_02433e64;
      UnityEngine_RectTransform__get_rect_43cf450(lVar8,0);
      if ((param_4[10] == 0) ||
         (lVar8 = UnityEngine_Component__get_transform_43bcd18(param_4[10],0), lVar8 == 0))
      goto LAB_02433e64;
      fVar13 = (float)UnityEngine_Transform__get_lossyScale_43d4cf0(lVar8,0);
      if (param_4[7] == 0) goto LAB_02433e64;
      fVar14 = (float)UnityEngine_Transform__get_lossyScale_43d4cf0(param_4[7],0);
      if (*(int *)(*(long *)PTR_DAT_04cad4f8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_BoosterFly__Fly_217f630
                (uVar12,param_2,param_3,(fVar15 * fVar13) / fVar14,uVar1,uVar10,0,0,0);
      if ((param_4[10] == 0) ||
         (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(param_4[10],0), lVar8 == 0))
      goto LAB_02433e64;
      UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
      if (param_4[7] == 0) goto LAB_02433e64;
      lVar8 = UnityEngine_Transform__Find_43d4bec(param_4[7],*(undefined8 *)PTR_DAT_04cb6238,0);
      if (lVar8 != 0) {
        lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
        if (lVar8 == 0) goto LAB_02433e64;
        UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
      }
    }
  }
  uVar10 = 0;
  if ((bRam0000000004f9bc92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004f9bc92 = 1;
    uVar10 = extraout_x1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0,uVar10);
    cRam0000000004f9b94d = '\x01';
  }
  puVar4 = PTR_DAT_04cad1b0;
  uVar10 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar9 & 1) == 0) {
    return uVar9;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar5 = PTR_DAT_04cb1b30;
  puVar3 = PTR_DAT_04ca9ae8;
  lVar8 = **(long **)(*(long *)puVar4 + 0xb8);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9bc7a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cb1b38);
    FUN_02132f7c(PTR_DAT_04cad3f8);
    FUN_02132f7c(PTR_DAT_04cb1b40);
    FUN_02132f7c(PTR_DAT_04cb1b48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1b50);
    FUN_02132f7c(PTR_DAT_04cb1b58);
    FUN_02132f7c(PTR_DAT_04cb1b60);
    FUN_02132f7c(PTR_DAT_04cb1b30);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9bc7a = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Object___ctor_4870e5c(lVar6,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(param_4,0,0);
  if ((uVar9 & 1) != 0) {
    return uVar9;
  }
  if (param_4 != (long *)0x0) {
    if (*(char *)((long)param_4 + 0x2c) != '\0') {
      return uVar9;
    }
    lVar8 = *(long *)(lVar8 + 0x38);
    *(undefined1 *)((long)param_4 + 0x2c) = 1;
    if (lVar8 == 0) goto LAB_022fedc4;
    System_Collections_Generic_List_object___Remove_3a830f8
              (lVar8,param_4,*(undefined8 *)PTR_DAT_04cb1b40);
    (**(code **)(*param_4 + 0x198))(param_4,*(undefined8 *)(*param_4 + 0x1a0));
    Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed_21fee68(param_4);
    lVar8 = UnityEngine_Component__get_gameObject_43bcde8(param_4,0);
    if (lVar6 == 0) goto LAB_022fedc4;
    plVar11 = (long *)(lVar6 + 0x10);
    *plVar11 = lVar8;
    thunk_FUN_02134474(plVar11,lVar8);
    if (*plVar11 == 0) goto LAB_022fedc4;
    lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (*plVar11,*(undefined8 *)PTR_DAT_04cad3f8);
    if (*plVar11 == 0) goto LAB_022fedc4;
    lVar7 = UnityEngine_GameObject__GetComponentInChildren_object__275a8b8
                      (*plVar11,*(undefined8 *)PTR_DAT_04cb1b38);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
    if ((uVar9 & 1) != 0) {
      uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar10,lVar6,*(undefined8 *)PTR_DAT_04cb1b58,0);
      if (lVar7 == 0) goto LAB_022fedc4;
      uVar9 = Dino_BusSand_App_UI_KitPop__PlayOut_228f2ec(lVar7,uVar10,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
        if ((uVar9 & 1) == 0) {
          return uVar9;
        }
        if (lVar8 != 0) {
          if ((bRam0000000004fa82e3 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7608,0,0);
            bRam0000000004fa82e3 = 1;
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar6 = *(long *)(lVar8 + 0x10);
          if (lVar6 != 0) {
            if (pcRam0000000004fa82f0 == (code *)0x0) {
              pcRam0000000004fa82f0 = (code *)FUN_02132f40(&UNK_00e4d81f);
            }
                    /* WARNING: Could not recover jumptable at 0x044bc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar9 = (*pcRam0000000004fa82f0)(lVar6,0);
            return uVar9;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar8,0);
        }
        goto LAB_022fedc4;
      }
    }
    lVar7 = *param_4;
    bVar2 = *(byte *)(*(long *)PTR_DAT_04cb1b48 + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04cb1b48)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_04cb1b50 + 0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04cb1b50))
      goto LAB_022fed94;
    }
    if (*plVar11 != 0) {
      uVar9 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(*plVar11,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Application__get_isPlaying_4351eec(0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
          if ((uVar9 & 1) != 0) {
            if (lVar8 == 0) goto LAB_022fedc4;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar8,0,0);
          }
          lVar8 = *plVar11;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar8 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar8,0);
          if (lVar8 != 0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar8,0,0);
            uVar9 = Dino_BusSand_App_UI_UiMotion__Fade_2291234(0,_UNK_00e207cc,0,lVar8,0);
            uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar10,lVar6,*(undefined8 *)PTR_DAT_04cb1b60,0);
            if (uVar9 != 0) {
              *(undefined8 *)(uVar9 + 0x40) = uVar10;
              thunk_FUN_02134474((undefined8 *)(uVar9 + 0x40),uVar10,0);
              return uVar9;
            }
          }
          goto LAB_022fedc4;
        }
      }
LAB_022fed94:
      lVar8 = *plVar11;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04ca9ae8;
      uVar10 = 0;
      if ((bRam0000000004fa8603 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004fa8603 = 1;
        uVar10 = extraout_x1_00;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar10 = extraout_x1_01;
      }
      puVar3 = PTR_DAT_04cf6418;
      if ((bRam0000000004fa8602 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6418,uVar10);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa8602 = 1;
      }
      if (*(long *)(*(long *)puVar3 + 0x38) == 0) {
        FUN_0216b4cc();
      }
      uVar10 = 0;
      if (lVar8 != 0) {
        uVar10 = *(undefined8 *)(lVar8 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*pcRam0000000004fa8680)(0,uVar10);
      return uVar9;
    }
  }
LAB_022fedc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

