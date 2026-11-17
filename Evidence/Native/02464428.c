/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$RestoreSnapshot
void Dino_BusSand_Cheat_CheatManager__RestoreSnapshot (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$RestoreSnapshot
   void Dino_BusSand_Cheat_CheatManager__RestoreSnapshot (Dino_BusSand_Cheat_CheatManager_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__RestoreSnapshot_2364428(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  long lStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_04cba458;
                    /* try { // try from 02464438 to 0256443f has its CatchHandler @ 02464684 */
  if ((bRam0000000004f9c770 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
                    /* try { // try from 02464460 to 02564463 has its CatchHandler @ 0246467c */
    FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 02464464 to 025644b7 has its CatchHandler @ 024640b4 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cab2b8);
    FUN_02132f7c(PTR_DAT_04cba8a8);
    FUN_02132f7c(PTR_DAT_04cba8b0);
    bRam0000000004f9c770 = 1;
  }
  Dino_BusSand_Cheat_CheatManager__StopAutoPlay_235def8(param_1,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 024644b8 to 025644bf has its CatchHandler @ 02464754 */
    thunk_FUN_0218fdac();
  }
  uVar11 = Dino_BusSand_Cheat_CheatManager__get_Ready_235da4c();
  if ((uVar11 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = Dino_BusSand_Cheat_CheatManager__get_SnapshotPath_2367f70();
  uVar11 = System_IO_File__Exists_47f230c(uVar12,0);
  puVar4 = PTR_DAT_04cba458;
  if ((uVar11 & 1) != 0) {
    Dino_BusSand_Cheat_CheatManager__ResetTransientState_2367c74(param_1);
                    /* try { // try from 024644f4 to 0256451b has its CatchHandler @ 02464740 */
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar12 = Dino_BusSand_Cheat_CheatManager__get_SnapshotPath_2367f70();
    puVar3 = PTR_DAT_04cabaf8;
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 0246451c to 0256452f has its CatchHandler @ 024646dc */
    uVar13 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0(0);
                    /* try { // try from 02464530 to 0256454b has its CatchHandler @ 02464748 */
    System_IO_File__Copy_47f89f0(uVar12,uVar13,1,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 0246454c to 025645a3 has its CatchHandler @ 024640b4 */
    Dino_BusSand_App_Meta_Profile__Load_226fa7c(0);
    puVar3 = PTR_DAT_04caba50;
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar14 = *(long *)puVar3;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar14 = *(long *)puVar3;
    }
                    /* try { // try from 024645a4 to 025645ab has its CatchHandler @ 024647a4 */
    if (**(long **)(lVar14 + 0xb8) != 0) {
      Dino_BusSand_App_GameApp__GoHall_21678c4(**(long **)(lVar14 + 0xb8),0,0);
      Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
                    /* try { // try from 024645c0 to 025645c7 has its CatchHandler @ 02464750 */
      uVar12 = System_Int32__ToString_482d750(&stack0xffffffffffffffdc,0);
                    /* try { // try from 024645f0 to 025645f3 has its CatchHandler @ 0246466c */
      uVar12 = System_String__Concat_46d2b84
                         (*(undefined8 *)PTR_DAT_04cba8b0,uVar12,*(undefined8 *)PTR_DAT_04cab2b8,0);
                    /* try { // try from 024645f4 to 02564613 has its CatchHandler @ 024646e8 */
      Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar12);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 02464614 to 02564643 has its CatchHandler @ 024640b4 */
  lVar14 = *(long *)PTR_DAT_04cba8a8;
  if ((bRam0000000004f9c77a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cba4d8);
    FUN_02132f7c(PTR_DAT_04cba4e0);
    FUN_02132f7c(PTR_DAT_04cba490);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c77a = 1;
  }
  lStack_40 = 0;
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Cheat_CheatManager__Log_235c924(lVar14);
  uVar11 = Dino_BusSand_Cheat_CheatManager__get_Creative_235c6f4(param_1);
  if ((uVar11 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Application__get_isMobilePlatform_4352d28(0);
  puVar3 = PTR_DAT_04caba50;
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar3;
    }
    uVar12 = **(undefined8 **)(lVar10 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar10 = *(long *)puVar3;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar3;
      }
      puVar3 = PTR_DAT_04cabb08;
      lVar10 = **(long **)(lVar10 + 0xb8);
      if (lVar10 == 0) goto LAB_0245de8c;
      if ((bRam0000000004f9b87c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cabb08,lVar14,0);
        bRam0000000004f9b87c = 1;
      }
      lVar10 = *(long *)(lVar10 + 0x28);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04ca9ae8;
      uVar18 = _UNK_00e20094;
      if ((bRam0000000004f9c314 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cad568,lVar14,0);
        FUN_02132f7c(PTR_DAT_04caa070);
        FUN_02132f7c(PTR_DAT_04cac878);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cad730);
        FUN_02132f7c(PTR_DAT_04cabdb0);
        FUN_02132f7c(PTR_DAT_04cabb08);
        FUN_02132f7c(PTR_DAT_04cad748);
        FUN_02132f7c(PTR_DAT_04cad330);
        FUN_02132f7c(PTR_DAT_04cad4c0);
        FUN_02132f7c(PTR_DAT_04cb4e20);
        FUN_02132f7c(PTR_DAT_04cafbb8);
        FUN_02132f7c(PTR_DAT_04cb6578);
        FUN_02132f7c(PTR_DAT_04ca9c30);
        FUN_02132f7c(PTR_DAT_04cb64b8);
        FUN_02132f7c(PTR_DAT_04cad4a8);
        bRam0000000004f9c314 = 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
      puVar4 = PTR_DAT_04cabb08;
      if ((uVar11 & 1) != 0) {
        return;
      }
      lVar6 = *(long *)PTR_DAT_04cabb08;
      lVar8 = *(long *)PTR_DAT_04ca9c30;
      if (lVar14 != 0) {
        lVar8 = lVar14;
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar4;
      }
      **(long **)(lVar6 + 0xb8) = lVar8;
      thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar4 + 0xb8),lVar8);
      uVar16 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = uVar16;
      if (lVar10 == 0) goto LAB_023bd530;
      uVar12 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar10,4,0);
      plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
      uVar13 = *(undefined8 *)PTR_DAT_04cad730;
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
      }
      lVar10 = System_Type__GetTypeFromHandle_483f0b4(uVar13,0);
      if (plVar7 == (long *)0x0) goto LAB_023bd530;
      if ((lVar10 != 0) &&
         (lVar8 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
        uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar12,0);
      }
      if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar7[4] = lVar10;
      thunk_FUN_02134474(plVar7 + 4,lVar10);
      lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
      UnityEngine_GameObject___ctor_43c2310(lVar10,*(undefined8 *)PTR_DAT_04cb6578,plVar7,0);
      if ((lVar10 == 0) ||
         (lVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0), lVar8 == 0))
      goto LAB_023bd530;
      UnityEngine_Transform__SetParent_43d1e34(lVar8,uVar12,0,0);
      plVar7 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
      if (plVar7 == (long *)0x0) goto LAB_023bd530;
      if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar7);
      }
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar18,plVar7,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar18,plVar7,0);
      puVar5 = PTR_DAT_04cad330;
      lVar8 = *(long *)PTR_DAT_04cad330;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar5;
      }
      puVar15 = *(undefined4 **)(lVar8 + 0xb8);
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      System_Nullable_Color____ctor_2bc9090
                (*puVar15,puVar15[1],puVar15[2],puVar15[3],&uStack_68,
                 *(undefined8 *)PTR_DAT_04cac878);
      uStack_70 = uStack_58;
      uStack_78 = uStack_60;
      uStack_80 = uStack_68;
      lVar8 = Dino_BusSand_App_UI_UiKit__Text_2282314
                        (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar7,
                         *(undefined8 *)PTR_DAT_04cb4e20,lVar14,*(undefined8 *)PTR_DAT_04cad4a8,
                         &uStack_80,0x202,0);
      if (lVar8 == 0) goto LAB_023bd530;
      TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar8,1,0);
      fVar19 = 0.0;
      TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar8,lVar14,0);
      fVar17 = 150.0;
      if (150.0 <= fVar19 + 70.0) {
        fVar17 = fVar19 + 70.0;
      }
      lVar14 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar8,0);
      if (lVar14 == 0) goto LAB_023bd530;
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar17 + -50.0,lVar14,0);
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar17,plVar7,0);
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      fVar19 = 1.0;
      if (fVar17 / 241.0 <= 1.0) {
        fVar19 = fVar17 / 241.0;
      }
      lVar14 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                         (0x44660000,fVar17,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                          (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar19,plVar7,
                          *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98
                          ,0);
      if (lVar14 == 0) goto LAB_023bd530;
      UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar14,0);
      uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
      if ((uVar11 & 1) == 0) {
        fVar17 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
        lVar14 = *(long *)puVar4;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar14 = *(long *)puVar4;
        }
        if (_UNK_00e200f8 < fVar17 - *(float *)(*(long *)(lVar14 + 0xb8) + 0x18)) goto LAB_023bd36c;
      }
      else {
LAB_023bd36c:
        puVar5 = PTR_DAT_04cad568;
        if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar14 = *(long *)puVar5;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar14 = *(long *)puVar5;
        }
        if (**(long **)(lVar14 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar14 + 0xb8),0);
        }
      }
      lVar14 = *(long *)puVar4;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar14 = *(long *)puVar4;
      }
      uVar12 = *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
      if ((uVar11 & 1) != 0) {
        lVar14 = *(long *)puVar4;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar14 = *(long *)puVar4;
        }
        Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
                  (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x10));
      }
      lVar14 = *(long *)puVar4;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar14 = *(long *)puVar4;
      }
      plVar9 = (long *)(*(long *)(lVar14 + 0xb8) + 0x10);
      *plVar9 = lVar10;
      thunk_FUN_02134474(plVar9,lVar10);
      uVar18 = UnityEngine_Time__get_unscaledTime_43cd610(0);
      iVar1 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
      *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = uVar18;
      if (iVar1 == 0) {
        thunk_FUN_0218fdac();
      }
      lVar14 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar10,0);
      if (lVar14 != 0) {
        UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar14,0,0);
        Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                  (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar7,0,0,0);
        Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar7,0,0);
        Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar10);
        return;
      }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x110) + 0x10) != '\0') {
      if (*(long *)(param_1 + 0x100) == 0) goto LAB_0245de8c;
      if (*(char *)(*(long *)(param_1 + 0x100) + 0x3c) == '\0') {
        return;
      }
    }
    lVar10 = *(long *)(param_1 + 0x160);
    uStack_38 = 0;
    lStack_40 = lVar14;
    thunk_FUN_02134474(&lStack_40,lVar14);
    fVar17 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    if (*(long *)(param_1 + 0x100) != 0) {
      uStack_38 = CONCAT44(uStack_38._4_4_,fVar17 + *(float *)(*(long *)(param_1 + 0x100) + 0x38));
      if (lVar10 != 0) {
        lVar14 = *(long *)(lVar10 + 0x10);
        lVar8 = *(long *)PTR_DAT_04cba4d8;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + (long)(int)uVar2 * 0x10;
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            plVar7 = (long *)(lVar14 + 0x20);
            *plVar7 = lStack_40;
            *(undefined8 *)(lVar14 + 0x28) = uStack_38;
            thunk_FUN_02134474(plVar7,0);
          }
          else {
            System_Collections_Generic_List_CheatManager_ToastLine___AddWithResize_3b1d72c
                      (lVar10,lStack_40,uStack_38,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          lVar14 = *(long *)(param_1 + 0x160);
          if (lVar14 != 0) {
            if (3 < *(int *)(lVar14 + 0x18)) {
              System_Collections_Generic_List_CheatManager_ToastLine___RemoveAt_3b1ef38
                        (lVar14,0,*(undefined8 *)PTR_DAT_04cba4e0);
            }
            return;
          }
        }
      }
    }
  }
LAB_0245de8c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

