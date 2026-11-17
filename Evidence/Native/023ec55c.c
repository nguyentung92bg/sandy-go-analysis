/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$PlayWinStreakPlus
void Dino_BusSand_App_UI_HomePanel__PlayWinStreakPlus (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$PlayWinStreakPlus
   void Dino_BusSand_App_UI_HomePanel__PlayWinStreakPlus (Dino_BusSand_App_UI_HomePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel__PlayWinStreakPlus_22ec55c(long param_1)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  int iStack_44;
  
  puVar3 = PTR_DAT_04cb75f0;
  if ((bRam0000000004f9c446 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb75f8);
    FUN_02132f7c(PTR_DAT_04cb7600);
    FUN_02132f7c(PTR_DAT_04cb7608);
    FUN_02132f7c(PTR_DAT_04cb7610);
    FUN_02132f7c(PTR_DAT_04cb75f0);
    FUN_02132f7c(PTR_DAT_04cad558);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb7618);
    FUN_02132f7c(PTR_DAT_04cad978);
    FUN_02132f7c(PTR_DAT_04cb7620);
    bRam0000000004f9c446 = 1;
  }
  iStack_44 = 0;
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar5,0);
  puVar3 = PTR_DAT_04ca9ae8;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x20) = param_1;
    thunk_FUN_02134474((long *)(lVar5 + 0x20),param_1);
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x88),0),
       lVar7 != 0)) {
      uVar6 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar7,0);
      if ((uVar6 & 1) == 0) {
        return;
      }
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      puVar4 = PTR_DAT_04cad1b0;
      uVar10 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
      if ((uVar6 & 1) != 0) {
        if (cRam0000000004f9b94d == '\0') {
          FUN_02132f7c(PTR_DAT_04cad1b0);
          cRam0000000004f9b94d = '\x01';
        }
        if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_023ecb90;
        uVar6 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                          (**(long **)(*(long *)puVar4 + 0xb8),*(undefined8 *)PTR_DAT_04cad558);
        if ((uVar6 & 1) != 0) {
          return;
        }
      }
      lVar7 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
      if (lVar7 != 0) {
        iStack_44 = *(int *)(lVar7 + 0x2c);
        if (iStack_44 < 1) {
          return;
        }
        Dino_BusSand_App_Meta_WinStreak__ConsumePlus_2295024(0);
        uVar10 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
        uVar8 = System_Int32__ToString_482d750(&iStack_44,0);
        uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cad978,uVar8,0);
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        System_Nullable_Color____ctor_2bc9090
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_58,
                   *(undefined8 *)PTR_DAT_04cac878);
        if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar3 = PTR_DAT_04cb7618;
        uStack_60 = uStack_48;
        uStack_68 = uStack_50;
        uStack_70 = uStack_58;
        lVar7 = Dino_BusSand_App_UI_UiKit__Text_2282314
                          (0x42b40000,0x43700000,0x42dc0000,0,0,uVar10,
                           *(undefined8 *)PTR_DAT_04cb7620,uVar8,*(undefined8 *)PTR_DAT_04cb7618,
                           &uStack_70,0x202,0);
        Dino_BusSand_App_UI_UiKit__GoldGradient_228baa0(lVar7,*(undefined8 *)puVar3,0);
        if (lVar7 != 0) {
          lVar9 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar7,0);
          plVar11 = (long *)(lVar5 + 0x10);
          *plVar11 = lVar9;
          thunk_FUN_02134474(plVar11,lVar9);
          lVar9 = *plVar11;
          if (lVar9 != 0) {
            UnityEngine_RectTransform__set_anchorMax_43cf768(0,0x3f800000,lVar9,0);
            UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f800000,lVar9,0);
            if (*plVar11 != 0) {
              UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                        (0x42f30000,0xc3cf0000,*plVar11,0);
              uVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
              if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
              }
              uVar10 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar10,0);
              *(undefined8 *)(lVar5 + 0x18) = uVar10;
              thunk_FUN_02134474();
              fVar2 = _UNK_00e20590;
              Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                        (0,_UNK_00e207cc,_UNK_00e20590,_UNK_00e20184,*(undefined8 *)(lVar5 + 0x10),0
                         ,0,0);
              puVar3 = PTR_DAT_04cac208;
              uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
              System_Action_float____ctor_35f1448(uVar10,lVar5,*(undefined8 *)PTR_DAT_04cb75f8,0);
              if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar7 = Dino_BusSand_App_Tween__Value_2160f64(_UNK_00e20170,uVar10,0);
              if ((lVar7 != 0) &&
                 (lVar7 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar7,1,0), lVar7 != 0)) {
                lVar7 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar7,param_1,0);
                puVar4 = PTR_DAT_04caa458;
                uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                System_Action___ctor_47b5ed0(uVar10,lVar5,*(undefined8 *)PTR_DAT_04cb7600,0);
                if (lVar7 != 0) {
                  Dino_BusSand_App_Tween__OnDone_2160edc(lVar7,uVar10,0);
                  fVar12 = (float)Dino_BusSand_App_Meta_WinStreak__SegmentProgress_22950c0(0);
                  uVar10 = *(undefined8 *)puVar3;
                  fVar13 = fVar12 + (float)iStack_44 * -0.25;
                  fVar14 = 0.0;
                  if (0.0 <= fVar13) {
                    fVar14 = fVar13;
                  }
                  iVar1 = iStack_44;
                  if (iStack_44 < 2) {
                    iVar1 = 1;
                  }
                  *(float *)(lVar5 + 0x28) = fVar14;
                  *(float *)(lVar5 + 0x2c) = fVar12;
                  uVar10 = thunk_FUN_0216e89c(uVar10);
                  System_Action_float____ctor_35f1448
                            (uVar10,lVar5,*(undefined8 *)PTR_DAT_04cb7608,0);
                  lVar7 = Dino_BusSand_App_Tween__Value_2160f64((float)iVar1 * fVar2,uVar10,0);
                  if (((lVar7 != 0) &&
                      (lVar7 = Dino_BusSand_App_Tween__SetDelay_2160ea8(0x3e800000,lVar7,0),
                      lVar7 != 0)) &&
                     (lVar7 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar7,1,0), lVar7 != 0)) {
                    lVar7 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar7,param_1,0);
                    uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                    System_Action___ctor_47b5ed0(uVar10,lVar5,*(undefined8 *)PTR_DAT_04cb7610,0);
                    if (lVar7 != 0) {
                      Dino_BusSand_App_Tween__OnDone_2160edc(lVar7,uVar10,0);
                      puVar3 = PTR_DAT_04cad568;
                      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      if (cRam0000000004f9b94e == '\0') {
                        FUN_02132f7c(PTR_DAT_04cad568);
                        cRam0000000004f9b94e = '\x01';
                      }
                      lVar5 = *(long *)puVar3;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar5 = *(long *)puVar3;
                      }
                      if (**(long **)(lVar5 + 0xb8) == 0) {
                        return;
                      }
                      Dino_BusSand_GameAudio__UiPop_2382f58(**(long **)(lVar5 + 0xb8),0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_023ecb90:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

