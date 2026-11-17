/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$Bind
void Dino_BusSand_App_UI_BattleRoyaleHallButton__Bind (Dino_BusSand_App_UI_UIPanel_o* hud, Dino_BusSand_App_Meta_BattleRoyaleFeature_o* feature, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$Bind
   void Dino_BusSand_App_UI_BattleRoyaleHallButton__Bind (Dino_BusSand_App_UI_UIPanel_o* hud,
   Dino_BusSand_App_Meta_BattleRoyaleFeature_o* feature, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleHallButton__Bind_218aae0
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  char cVar18;
  float fVar19;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b97a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadc50);
    FUN_02132f7c(PTR_DAT_04cadc58);
    FUN_02132f7c(PTR_DAT_04cadc60);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadc68);
    bRam0000000004f9b97a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(param_4,0,0);
  if (((uVar6 & 1) != 0) || (param_5 == 0)) {
    return;
  }
  if (param_4 == 0) {
LAB_0228aca0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)PTR_DAT_04cadc68,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (lVar7 == 0) goto LAB_0228aca0;
  lVar8 = UnityEngine_Component__GetComponent_object__26f97e8(lVar7,*(undefined8 *)PTR_DAT_04cadc58)
  ;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  if ((uVar6 & 1) != 0) {
    lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
    if (lVar7 == 0) goto LAB_0228aca0;
    lVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar7,*(undefined8 *)PTR_DAT_04cadc60);
  }
  if (lVar8 == 0) goto LAB_0228aca0;
  *(long *)(lVar8 + 0x20) = param_4;
  thunk_FUN_02134474((long *)(lVar8 + 0x20),param_4);
  Dino_BusSand_App_UI_BattleRoyaleHallButton__Init_218aca4(lVar8);
  puVar1 = PTR_DAT_04cadc50;
  **(long **)(*(long *)PTR_DAT_04cadc50 + 0xb8) = lVar8;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar8);
  lVar7 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(param_5,0);
  if (lVar7 == 0) goto LAB_0228aca0;
  Dino_BusSand_App_Meta_BattleRoyaleCore__RefreshTime_2221ee0(lVar7,0);
  puVar1 = PTR_DAT_04cadca0;
  if ((bRam0000000004f9b97f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cadca8);
    FUN_02132f7c(PTR_DAT_04cadcb0);
    FUN_02132f7c(PTR_DAT_04cadcb8);
    FUN_02132f7c(PTR_DAT_04cadca0);
    FUN_02132f7c(PTR_DAT_04cadcc0);
    FUN_02132f7c(PTR_DAT_04cadcc8);
    FUN_02132f7c(PTR_DAT_04cadcd0);
    FUN_02132f7c(PTR_DAT_04cadcd8);
    FUN_02132f7c(PTR_DAT_04cadce0);
    FUN_02132f7c(PTR_DAT_04cadce8);
    FUN_02132f7c(PTR_DAT_04cadcf0);
    FUN_02132f7c(PTR_DAT_04cadcf8);
    FUN_02132f7c(PTR_DAT_04cadd00);
    FUN_02132f7c(PTR_DAT_04cadd08);
    FUN_02132f7c(PTR_DAT_04cadd10);
    bRam0000000004f9b97f = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar7,0);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x10) = lVar8;
    thunk_FUN_02134474((long *)(lVar7 + 0x10),lVar8);
    lVar9 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0(0);
    plVar16 = (long *)(lVar7 + 0x18);
    *plVar16 = lVar9;
    thunk_FUN_02134474(plVar16,lVar9);
    if (*plVar16 == 0) {
      return;
    }
    lVar9 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_I_2226254(0);
    if (lVar9 == 0) {
      cVar18 = '\0';
    }
    else {
      cVar18 = *(char *)(lVar9 + 0x22);
    }
    lVar9 = *plVar16;
    uVar3 = Dino_BusSand_App_UI_BattleRoyaleHallButton__get_LockedShown_218bae8();
    if (lVar9 == 0) goto LAB_0228b89c;
    uVar3 = Dino_BusSand_App_Meta_BattleRoyaleCore__NeedShowHallButton_2221b70
                      (lVar9,cVar18 != '\0',uVar3 & 1,0);
    lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
    if (lVar9 == 0) goto LAB_0228b89c;
    uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar9,0);
    if ((uVar3 & 1) != (uVar4 & 1)) {
      lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
      if (lVar9 == 0) goto LAB_0228b89c;
      UnityEngine_GameObject__SetActive_43c1408(lVar9,uVar3 & 1,0);
    }
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar9 = UnityEngine_Component__get_transform_43bcd18(lVar8,0);
    if (lVar9 == 0) goto LAB_0228b89c;
    fVar19 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar9,0);
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    puVar1 = PTR_DAT_04caa208;
    pfVar12 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
    if ((param_3 - pfVar12[2]) * (param_3 - pfVar12[2]) +
        (fVar19 - *pfVar12) * (fVar19 - *pfVar12) + (param_2 - pfVar12[1]) * (param_2 - pfVar12[1])
        < _UNK_00e1fea0) {
      lVar9 = UnityEngine_Component__get_transform_43bcd18(lVar8,0);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      if (lVar9 == 0) goto LAB_0228b89c;
      lVar13 = *(long *)(*(long *)puVar1 + 0xb8);
      UnityEngine_Transform__set_localScale_43d1be0
                (*(undefined4 *)(lVar13 + 0xc),*(undefined4 *)(lVar13 + 0x10),
                 *(undefined4 *)(lVar13 + 0x14),lVar9,0);
    }
    puVar1 = PTR_DAT_04ca9ae8;
    uVar17 = *(undefined8 *)(lVar8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar17,0,0);
    if ((uVar6 & 1) != 0) {
      lVar9 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,7);
      if (lVar9 == 0) goto LAB_0228b89c;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0228b8a0;
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_04cadcc0;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20));
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_0228b8a0;
      *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_04cadd08;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x28));
      if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_0228b8a0;
      *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_04cadcd0;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x30));
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) == 0) goto LAB_0228b8a0;
      *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)PTR_DAT_04cadce8;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x38));
      if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_0228b8a0;
      *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_04cadcd8;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x40));
      if (*(uint *)(lVar9 + 0x18) < 6) goto LAB_0228b8a0;
      *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)PTR_DAT_04cadd10;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x48));
      if (*(uint *)(lVar9 + 0x18) < 7) goto LAB_0228b8a0;
      *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)PTR_DAT_04cadce0;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x50));
      if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
        uVar6 = 0;
        uVar14 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        do {
          if (uVar14 <= uVar6) goto LAB_0228b8a0;
          if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0228b89c;
          uVar17 = UnityEngine_Transform__Find_43d4bec
                             (*(long *)(lVar8 + 0x28),*(undefined8 *)(lVar9 + 0x20 + uVar6 * 8),0);
          Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar17,0,0);
          uVar14 = (ulong)*(uint *)(lVar9 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar9 + 0x18));
      }
    }
    Dino_BusSand_App_UI_BattleRoyaleHallButton__StopTimer_218bb60(lVar8);
    Dino_BusSand_App_UI_BattleRoyaleHallButton__UpdateSlider_218bba4(lVar8);
    uVar17 = *(undefined8 *)(lVar8 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar17,0,0);
    uVar17 = 0;
    if ((uVar6 & 1) != 0) {
      if (*(long *)(lVar8 + 0x40) == 0) goto LAB_0228b89c;
      uVar17 = UnityEngine_Transform__Find_43d4bec
                         (*(long *)(lVar8 + 0x40),*(undefined8 *)PTR_DAT_04cadcf0,0);
    }
    puVar2 = PTR_DAT_04ca9d18;
    lVar13 = *(long *)PTR_DAT_04ca9d18;
    lVar9 = *(long *)(lVar13 + 0x38);
    if (lVar9 == 0) {
      FUN_0216b4cc(lVar13);
      lVar9 = *(long *)(lVar13 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar9 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    uVar10 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                       (*(undefined8 *)PTR_DAT_04cadd00,**(undefined8 **)(lVar9 + 0xb8),0);
    Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar17,uVar10,0);
    uVar3 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0);
    Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8
              (*(undefined8 *)(lVar8 + 0x30),(uVar3 ^ 0xffffffff) & 1,0);
    uVar17 = *(undefined8 *)(lVar8 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar17,0,0);
    uVar17 = 0;
    if ((uVar6 & 1) != 0) {
      if (*(long *)(lVar8 + 0x30) == 0) goto LAB_0228b89c;
      uVar17 = UnityEngine_Transform__Find_43d4bec
                         (*(long *)(lVar8 + 0x30),*(undefined8 *)PTR_DAT_04cadcf0,0);
    }
    plVar11 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    uStack_64 = Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(4,0);
    lVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_64);
    if (plVar11 != (long *)0x0) {
      if ((lVar9 != 0) &&
         (lVar13 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0)) {
        uVar17 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar17,0);
      }
      if ((int)plVar11[3] == 0) {
LAB_0228b8a0:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar11[4] = lVar9;
      thunk_FUN_02134474(plVar11 + 4,lVar9);
      uVar10 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                         (*(undefined8 *)PTR_DAT_04cadcf8,plVar11,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar17,uVar10,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8
                (*(undefined8 *)(lVar8 + 0x38),uVar3 & 1,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8
                (*(undefined8 *)(lVar8 + 0x40),uVar3 & 1,0);
      if ((uVar3 & 1) == 0) {
        Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(*(undefined8 *)(lVar8 + 0x38),0,0);
        Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(*(undefined8 *)(lVar8 + 0x40),0,0);
        return;
      }
      if (*plVar16 != 0) {
        iVar5 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_State_2221138(*plVar16,0);
        lVar9 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
        if (*plVar16 != 0) {
          uVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_HaveHallCommand_221f168(*plVar16,0);
          if (((uVar6 & 1) == 0) || (iVar5 != 1)) {
            if (iVar5 - 4U < 2) {
              if (*plVar16 == 0) goto LAB_0228b89c;
              uVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsInColdTimeStamp_222123c(*plVar16,0);
              if ((uVar6 & 1) != 0) {
                if ((*plVar16 != 0) && (lVar9 = *(long *)(*plVar16 + 0x10), lVar9 != 0)) {
                  lVar13 = *(long *)(lVar9 + 0x18);
                  uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                  puVar15 = (undefined8 *)PTR_DAT_04cadcb0;
                  goto LAB_0228b7ec;
                }
                goto LAB_0228b89c;
              }
            }
            else {
              if (iVar5 == 2) {
                uVar17 = FUN_01e782f0(*(undefined8 *)puVar2);
                uVar17 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                                   (*(undefined8 *)PTR_DAT_04cadcc8,uVar17,0);
                Dino_BusSand_App_UI_BattleRoyaleHallButton__SetStatus_218bd9c(lVar8,0,uVar17);
                lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
                if (lVar7 != 0) {
                  UnityEngine_GameObject__SetActive_43c1408(lVar7,0,0);
                  return;
                }
                goto LAB_0228b89c;
              }
              if (iVar5 != 0) {
                if ((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0x10), lVar13 == 0))
                goto LAB_0228b89c;
                lVar13 = *(long *)(lVar13 + 0x30);
                if (lVar9 < lVar13) {
                  uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                  puVar15 = (undefined8 *)PTR_DAT_04cadcb8;
                  goto LAB_0228b7ec;
                }
              }
            }
            uVar10 = 1;
            uVar17 = 0;
          }
          else {
            if ((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0x10), lVar13 == 0))
            goto LAB_0228b89c;
            lVar13 = *(long *)(lVar13 + 0x30);
            if (lVar9 < lVar13) {
              uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
              puVar15 = (undefined8 *)PTR_DAT_04cadca8;
LAB_0228b7ec:
              System_Action___ctor_47b5ed0(uVar17,lVar7,*puVar15,0);
              Dino_BusSand_App_UI_BattleRoyaleHallButton__StartTimer_218bcf4(lVar8,lVar13,uVar17);
              return;
            }
            lVar9 = *(long *)puVar2;
            lVar7 = *(long *)(lVar9 + 0x38);
            if (lVar7 == 0) {
              FUN_0216b4cc(lVar9);
              lVar7 = *(long *)(lVar9 + 0x38);
            }
            lVar7 = *(long *)(lVar7 + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_0216b470();
            }
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_0216b470();
            }
            uVar17 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                               (*(undefined8 *)PTR_DAT_04cadcc8,**(undefined8 **)(lVar7 + 0xb8),0);
            uVar10 = 0;
          }
          Dino_BusSand_App_UI_BattleRoyaleHallButton__SetStatus_218bd9c(lVar8,uVar10,uVar17);
          return;
        }
      }
    }
  }
LAB_0228b89c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

