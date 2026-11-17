/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$Finish
void Dino_BusSand_App_UI_ClimbTowerPanel__Finish (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$Finish
   void Dino_BusSand_App_UI_ClimbTowerPanel__Finish (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerPanel__Finish_21a6508
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  float *pfVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uStack_68;
  
  puVar4 = PTR_DAT_04cae6e8;
  puVar2 = PTR_DAT_04cad880;
  if ((bRam0000000004f9ba3d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae6e8);
    FUN_02132f7c(PTR_DAT_04cad880);
    bRam0000000004f9ba3d = 1;
  }
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_4,*(undefined8 *)puVar2,0,0);
  lVar12 = *(long *)puVar4;
  *(undefined1 *)(param_4 + 0xb4) = 0;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cae6e8;
  if ((bRam0000000004f9ba14 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae6e8);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cae718);
    FUN_02132f7c(PTR_DAT_04cadcc0);
    FUN_02132f7c(PTR_DAT_04cadcd0);
    FUN_02132f7c(PTR_DAT_04cae720);
    FUN_02132f7c(PTR_DAT_04cae728);
    FUN_02132f7c(PTR_DAT_04cae730);
    FUN_02132f7c(PTR_DAT_04cadce0);
    FUN_02132f7c(PTR_DAT_04cadc88);
    FUN_02132f7c(PTR_DAT_04cadcf8);
    FUN_02132f7c(PTR_DAT_04cadd08);
    bRam0000000004f9ba14 = 1;
  }
  uStack_68 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = Dino_BusSand_App_UI_ClimbTowerHallButton__get_Alive_219f1e4();
  if ((uVar10 & 1) == 0) {
    return;
  }
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar12 + 0xb8) + 0x18) == 0) {
    return;
  }
  uVar10 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(2,0);
  if ((uVar10 & 1) == 0) {
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)puVar2;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
    if (lVar12 == 0) goto LAB_022a01b4;
    uVar10 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasData_2229490(lVar12,0);
    if ((uVar10 & 1) == 0) goto LAB_0229fa2c;
    lVar12 = *(long *)puVar2;
    iVar9 = *(int *)(lVar12 + 0xe4);
joined_r0x0229fa18:
    if (iVar9 == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)puVar2;
    }
    lVar13 = *(long *)(lVar12 + 0xb8);
LAB_0229fbf8:
    if ((*(long *)(lVar13 + 8) != 0) &&
       (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar13 + 8),0), lVar12 != 0
       )) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar12 != 0) {
        lVar13 = *(long *)(lVar12 + 0x10);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar12,0);
        }
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8430)(lVar13,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    goto LAB_022a01b4;
  }
LAB_0229fa2c:
  lVar12 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,4);
  puVar4 = PTR_DAT_04cadcc0;
  if (lVar12 == 0) goto LAB_022a01b4;
  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_022a01b8:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_04cadcc0;
  thunk_FUN_02134474((undefined8 *)(lVar12 + 0x20));
  puVar6 = PTR_DAT_04cadd08;
  if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) goto LAB_022a01b8;
  *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)PTR_DAT_04cadd08;
  thunk_FUN_02134474((undefined8 *)(lVar12 + 0x28));
  puVar5 = PTR_DAT_04cadcd0;
  if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_022a01b8;
  *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_04cadcd0;
  thunk_FUN_02134474((undefined8 *)(lVar12 + 0x30));
  puVar3 = PTR_DAT_04cadc88;
  if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) == 0) goto LAB_022a01b8;
  *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)PTR_DAT_04cadc88;
  thunk_FUN_02134474((undefined8 *)(lVar12 + 0x38));
  if ((int)*(ulong *)(lVar12 + 0x18) < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    uVar14 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
    do {
      if (uVar14 <= uVar10) {
        uStack_68 = CONCAT44(uStack_68._4_4_,(int)uVar10);
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      lVar13 = *(long *)puVar2;
      uVar16 = *(undefined8 *)(lVar12 + 0x20 + uVar10 * 8);
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar13 = *(long *)puVar2;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
      if (lVar13 == 0) {
        uStack_68 = CONCAT44(uStack_68._4_4_,(int)uVar10);
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar16 = UnityEngine_Transform__Find_43d4bec(lVar13,uVar16,0);
      Dino_BusSand_App_UI_ClimbTowerHallButton__SetActive_21a0214(uVar16,0);
      uVar14 = (ulong)*(uint *)(lVar12 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(int)*(uint *)(lVar12 + 0x18));
  }
  lVar12 = *(long *)puVar2;
  uStack_68 = CONCAT44(uStack_68._4_4_,(int)uVar10);
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar2;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
  if (lVar12 == 0) goto LAB_022a01b4;
  iVar7 = Dino_BusSand_App_Meta_ClimbTowerFeature__State_222a414(lVar12,0);
  if (iVar7 == 1) {
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)puVar2;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
    if (lVar12 == 0) goto LAB_022a01b4;
    uVar10 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsForceOldPeriod_222a760(lVar12,0);
    iVar7 = 1;
    if ((uVar10 & 1) != 0) {
      iVar7 = 2;
    }
  }
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar2;
  }
  lVar13 = *(long *)(lVar12 + 0xb8);
  iVar9 = *(int *)(lVar12 + 0xe4);
  *(int *)(lVar13 + 0x20) = iVar7;
  if (iVar7 == 4) {
    if (iVar9 == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    goto LAB_0229fbf8;
  }
  if (iVar9 == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)(*(long *)puVar2 + 0xb8);
  }
  if ((*(long *)(lVar13 + 8) == 0) ||
     (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar13 + 8),0), lVar12 == 0))
  goto LAB_022a01b4;
  UnityEngine_GameObject__SetActive_43c1408(lVar12,1,0);
  lVar12 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (lVar12 == 0) goto LAB_022a01b4;
  fVar17 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar12,0);
  if (cRam0000000004f9b65d == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65d = '\x01';
  }
  puVar1 = PTR_DAT_04caa208;
  pfVar15 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
  if ((param_3 - pfVar15[2]) * (param_3 - pfVar15[2]) +
      (fVar17 - *pfVar15) * (fVar17 - *pfVar15) + (param_2 - pfVar15[1]) * (param_2 - pfVar15[1]) <
      _UNK_00e1fea0) {
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)puVar2;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar12 == 0) goto LAB_022a01b4;
    lVar13 = *(long *)(*(long *)puVar1 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar13 + 0xc),*(undefined4 *)(lVar13 + 0x10),
               *(undefined4 *)(lVar13 + 0x14),lVar12,0);
  }
  if (iVar7 < 2) {
    if (iVar7 == 0) {
      uVar10 = Dino_BusSand_App_Meta_StreakTowerUtil__ShouldShowLockedBtn_2252580(2,0);
      lVar12 = *(long *)puVar2;
      iVar9 = *(int *)(lVar12 + 0xe4);
      if ((uVar10 & 1) == 0) goto joined_r0x0229fa18;
      if (iVar9 == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar2;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
      if (lVar12 == 0) goto LAB_022a01b4;
      uVar16 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)puVar3,0);
      Dino_BusSand_App_UI_ClimbTowerHallButton__SetActive_21a0214(uVar16,1);
      lVar12 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      if (lVar12 == 0) goto LAB_022a01b4;
      uVar16 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04cae730,0);
      lVar12 = FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
      uVar8 = Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(2,0);
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar8);
      uVar11 = System_Int32__ToString_482d750(&uStack_68,0);
      if (lVar12 == 0) goto LAB_022a01b4;
      FUN_01e7704c(lVar12,uVar11);
      FUN_01e76ff0(lVar12,0,uVar11);
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cadcf8,lVar12,0);
    }
    else {
      if (iVar7 != 1) goto LAB_0229ff5c;
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar2;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
      if (lVar12 == 0) goto LAB_022a01b4;
      uVar16 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)puVar4,0);
      Dino_BusSand_App_UI_ClimbTowerHallButton__SetActive_21a0214(uVar16,1);
      lVar12 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      if (lVar12 == 0) goto LAB_022a01b4;
      uVar16 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04cae718,0);
      lVar12 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      if (lVar12 == 0) goto LAB_022a01b4;
      uVar11 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_EndMs_22297d0(lVar12,0);
      uVar11 = Dino_BusSand_App_Meta_StreakTowerUtil__ActivityTimeString_2251b98(uVar11,0);
    }
    Dino_BusSand_App_UI_ClimbTowerHallButton__SetTexts_219f7a4(uVar16,uVar11);
  }
  else {
    if (iVar7 == 2) {
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar2;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
      if (lVar12 == 0) goto LAB_022a01b4;
      uVar16 = *(undefined8 *)puVar5;
    }
    else {
      if (iVar7 != 3) goto LAB_0229ff5c;
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar2;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
      if (lVar12 == 0) goto LAB_022a01b4;
      uVar16 = *(undefined8 *)puVar6;
    }
    uVar16 = UnityEngine_Transform__Find_43d4bec(lVar12,uVar16,0);
    Dino_BusSand_App_UI_ClimbTowerHallButton__SetActive_21a0214(uVar16,1);
  }
LAB_0229ff5c:
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar2;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar12 == 0) goto LAB_022a01b4;
  lVar12 = UnityEngine_Component__GetComponent_object__26f97e8
                     (lVar12,*(undefined8 *)PTR_DAT_04cada30);
  if (iVar7 != 0) {
    lVar13 = *(long *)puVar2;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar2;
    }
    if (*(char *)(*(long *)(lVar13 + 0xb8) + 0x24) == '\0') {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
      puVar4 = PTR_DAT_04cae728;
      if ((uVar10 & 1) != 0) {
        if (lVar12 == 0) goto LAB_022a01b4;
        uVar16 = UnityEngine_Animation__get_Item_4334ee8(lVar12,*(undefined8 *)PTR_DAT_04cae728,0);
        uVar10 = UnityEngine_TrackedReference__op_Inequality_43c6a68(uVar16,0,0);
        if ((uVar10 & 1) != 0) {
          lVar13 = UnityEngine_Animation__get_Item_4334ee8(lVar12,*(undefined8 *)puVar4,0);
          if (lVar13 == 0) goto LAB_022a01b4;
          UnityEngine_AnimationState__set_wrapMode_4337024(lVar13,2,0);
          if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_CommerceUi__Play_22a8904(lVar12,*(undefined8 *)puVar4,0);
          lVar12 = *(long *)puVar2;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar12 = *(long *)puVar2;
          }
          *(undefined1 *)(*(long *)(lVar12 + 0xb8) + 0x24) = 1;
        }
      }
    }
  }
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar2;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
  if (lVar12 != 0) {
    uVar10 = Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimCount_222a188
                       (lVar12,-(int)*(char *)(lVar12 + 0x19),0);
    lVar12 = *(long *)puVar2;
    iVar9 = (int)uVar10;
    uStack_68 = CONCAT44(iVar9,(undefined4)uStack_68);
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar12);
      lVar12 = *(long *)puVar2;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
    if (lVar12 != 0) {
      uVar16 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04cadce0,0);
      Dino_BusSand_App_UI_ClimbTowerHallButton__SetActive_21a0214(uVar16,0 < iVar9);
      if (0 < iVar9) {
        lVar12 = *(long *)puVar2;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar2;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
        if (lVar12 == 0) goto LAB_022a01b4;
        uVar16 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04cae720,0);
        uVar11 = System_Int32__ToString_482d750((long)&uStack_68 + 4,0);
        Dino_BusSand_App_UI_ClimbTowerHallButton__SetTexts_219f7a4(uVar16,uVar11);
        uVar10 = uStack_68 >> 0x20;
      }
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar2;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
      if (lVar12 != 0) {
        Dino_BusSand_App_UI_ClimbTowerHallButton__SliderFill_21a02dc
                  (uVar10 & 0xffffffff,*(undefined1 *)(lVar12 + 0x19));
        Dino_BusSand_App_UI_ClimbTowerHallButton__SetFill_21a043c();
        return;
      }
    }
  }
LAB_022a01b4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

