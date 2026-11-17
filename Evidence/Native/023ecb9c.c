/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$OnWinStreak
void Dino_BusSand_App_UI_HomePanel__OnWinStreak (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a45de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$OnWinStreak
   void Dino_BusSand_App_UI_HomePanel__OnWinStreak (Dino_BusSand_App_UI_HomePanel_o* __this, const
   MethodInfo* method); */

long * Dino_BusSand_App_UI_HomePanel__OnWinStreak_22ecb9c(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  undefined8 *puVar18;
  long *plVar19;
  char cVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  uint uVar24;
  long lStack_c8;
  long *plStack_c0;
  undefined1 *puStack_b8;
  undefined8 *puStack_b0;
  undefined4 uStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  undefined1 auStack_70 [4];
  char acStack_6c [4];
  undefined8 uStack_68;
  
  if ((bRam0000000004f9c447 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cb7628);
    FUN_02132f7c(PTR_DAT_04cad558);
    FUN_02132f7c(PTR_DAT_04cac7d0);
    FUN_02132f7c(PTR_DAT_04cb7630);
    FUN_02132f7c(PTR_DAT_04cb7638);
    FUN_02132f7c(PTR_DAT_04cb7640);
                    /* try { // try from 023ecc08 to 024ecf0b has its CatchHandler @ 023ecc08
                       catch() { ... } // from try @ 023ecc08 with catch @ 023ecc08
                       catch() { ... } // from try @ 023ecf38 with catch @ 023ecc08
                       catch() { ... } // from try @ 023ecf98 with catch @ 023ecc08
                       catch() { ... } // from try @ 023ecfc4 with catch @ 023ecc08
                       catch() { ... } // from try @ 023ed00c with catch @ 023ecc08 */
    FUN_02132f7c(PTR_DAT_04cac7d8);
    FUN_02132f7c(PTR_DAT_04cb7648);
    bRam0000000004f9c447 = 1;
  }
  iVar7 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690(0);
  if (iVar7 == 2) {
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar3 = PTR_DAT_04cad1b0;
    if (**(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8) == 0) goto LAB_023ece08;
    plVar10 = (long *)Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                (**(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8),
                                 *(undefined8 *)PTR_DAT_04cb7628);
    if (((ulong)plVar10 & 1) != 0) {
      return plVar10;
    }
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
    plVar10 = (long *)PTR_DAT_04cb7630;
    plVar19 = (long *)PTR_DAT_04cb7640;
  }
  else {
    if (iVar7 == 4) {
      lVar11 = Dino_BusSand_App_Meta_WinStreak__ClaimAll_2294ac4(0);
      if (lVar11 == 0) goto LAB_023ece08;
      if (0 < *(int *)(lVar11 + 0x18)) {
        if (cRam0000000004f9b94d == '\0') {
          FUN_02132f7c(PTR_DAT_04cad1b0);
          cRam0000000004f9b94d = '\x01';
        }
        if (**(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8) == 0) goto LAB_023ece08;
        Dino_BusSand_App_UI_UIManager__Open_object__2945314
                  (**(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8),*(undefined8 *)PTR_DAT_04cac7d8,4,
                   lVar11,*(undefined8 *)PTR_DAT_04cac7d0);
      }
      puVar3 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004f9c444 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caa458,0);
        FUN_02132f7c(PTR_DAT_04ca9d18);
        FUN_02132f7c(PTR_DAT_04cb75c8);
        FUN_02132f7c(PTR_DAT_04cb5428);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cac1e8);
        FUN_02132f7c(PTR_DAT_04cad330);
        FUN_02132f7c(PTR_DAT_04cb75d0);
        FUN_02132f7c(PTR_DAT_04cb75d8);
        FUN_02132f7c(PTR_DAT_04cb75e0);
        FUN_02132f7c(PTR_DAT_04cb75e8);
        bRam0000000004f9c444 = 1;
      }
      uVar22 = *(undefined8 *)(param_1 + 0x88);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      plVar10 = (long *)UnityEngine_Object__op_Equality_43c6f30(uVar22,0,0);
      if (((ulong)plVar10 & 1) != 0) {
        return plVar10;
      }
      iVar7 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690(0);
      if ((*(long *)(param_1 + 0x88) == 0) ||
         (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x88),0),
         lVar11 == 0)) goto LAB_023ec490;
      plVar10 = (long *)UnityEngine_GameObject__get_activeSelf_43c14cc(lVar11,0);
      uVar8 = (uint)(iVar7 - 3U < 2 || iVar7 == 2);
      if (uVar8 != ((uint)plVar10 & 1)) {
        if ((*(long *)(param_1 + 0x88) == 0) ||
           (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x88),0),
           lVar11 == 0)) goto LAB_023ec490;
        plVar10 = (long *)UnityEngine_GameObject__SetActive_43c1408(lVar11,uVar8,0);
      }
      if (iVar7 - 5U < 0xfffffffd) {
        *(int *)(param_1 + 0xb0) = iVar7;
        return plVar10;
      }
      lVar11 = Dino_BusSand_App_Meta_WinStreak__ReachedUnclaimed_22937e4(0);
      if (lVar11 == 0) goto LAB_023ec490;
      iVar1 = *(int *)(lVar11 + 0x18);
      if ((*(long *)(param_1 + 0x98) == 0) ||
         (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x98),0),
         lVar11 == 0)) goto LAB_023ec490;
      UnityEngine_GameObject__SetActive_43c1408
                (lVar11,(iVar7 != 2 && iVar1 != 0) && (iVar7 == 2 || -1 < iVar1),0);
      plVar10 = *(long **)(param_1 + 0xa8);
      uVar22 = System_Int32__ToString_482d750(&stack0xffffffffffffffcc,0);
      if (plVar10 == (long *)0x0) goto LAB_023ec490;
      (**(code **)(*plVar10 + 0x518))(plVar10,uVar22,*(undefined8 *)(*plVar10 + 0x520));
      if (iVar7 == 3) {
        Dino_BusSand_App_Meta_WinStreak__SegmentProgress_22950c0(0);
        Dino_BusSand_App_UI_HomePanel__SetWinStreakBar_22ec494(param_1);
        plVar10 = *(long **)(param_1 + 0xa0);
LAB_023ec188:
        lVar11 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
        if (lVar11 == 0) goto LAB_023ec490;
        uVar9 = *(undefined4 *)(lVar11 + 0x18);
        if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
        }
        uVar22 = Dino_BusSand_App_UI_UiKit__LevelText_2282d78(uVar9,0);
      }
      else {
        Dino_BusSand_App_UI_HomePanel__SetWinStreakBar_22ec494(0,param_1);
        plVar10 = *(long **)(param_1 + 0xa0);
        if (iVar7 == 2) {
          lVar23 = *(long *)PTR_DAT_04ca9d18;
          lVar11 = *(long *)(lVar23 + 0x38);
          if (lVar11 == 0) {
            FUN_0216b4cc(lVar23);
            lVar11 = *(long *)(lVar23 + 0x38);
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0216b470();
          }
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar11 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0216b470();
          }
          uVar22 = **(undefined8 **)(lVar11 + 0xb8);
          puVar18 = (undefined8 *)PTR_DAT_04cb75d0;
          puVar21 = (undefined8 *)PTR_DAT_04cb75e0;
          if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
            puVar18 = (undefined8 *)PTR_DAT_04cb75d0;
            puVar21 = (undefined8 *)PTR_DAT_04cb75e0;
          }
        }
        else {
          if (iVar7 != 4) goto LAB_023ec188;
          lVar23 = *(long *)PTR_DAT_04ca9d18;
          lVar11 = *(long *)(lVar23 + 0x38);
          if (lVar11 == 0) {
            FUN_0216b4cc(lVar23);
            lVar11 = *(long *)(lVar23 + 0x38);
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0216b470();
          }
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar11 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0216b470();
          }
          uVar22 = **(undefined8 **)(lVar11 + 0xb8);
          puVar18 = (undefined8 *)PTR_DAT_04cb75e8;
          puVar21 = (undefined8 *)PTR_DAT_04cb75d8;
          if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
            puVar18 = (undefined8 *)PTR_DAT_04cb75e8;
            puVar21 = (undefined8 *)PTR_DAT_04cb75d8;
          }
        }
        uVar22 = Dino_BusSand_App_UI_UiKit__T_2285e1c(*puVar18,*puVar21,uVar22,0);
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x518))(plVar10,uVar22,*(undefined8 *)(*plVar10 + 0x520));
        puVar3 = PTR_DAT_04cad330;
        uVar22 = *(undefined8 *)(param_1 + 0x88);
        if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        plVar10 = (long *)Dino_BusSand_App_UI_UiKit__IsBreathing_2288f68(uVar22,0);
        uVar8 = (uint)(iVar7 == 3 && iVar1 < 1);
        if (uVar8 == 0 && ((ulong)plVar10 & 1) == 0) {
          uVar22 = *(undefined8 *)(param_1 + 0x88);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          plVar10 = (long *)Dino_BusSand_App_UI_UiKit__Breathe_2289058
                                      (_UNK_00e2043c,_UNK_00e20170,uVar22,0);
        }
        else if ((uVar8 & (uint)plVar10) == 1) {
          uVar22 = *(undefined8 *)(param_1 + 0x88);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          plVar10 = (long *)Dino_BusSand_App_UI_UiKit__StopBreathing_228972c(uVar22,0);
        }
        *(int *)(param_1 + 0xb0) = iVar7;
        if (*(char *)(param_1 + 0xb8) == '\0') {
          plVar10 = (long *)Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
          puVar3 = PTR_DAT_04caa458;
          if (plVar10 == (long *)0x0) goto LAB_023ec490;
          if ((iVar7 == 3) && (0 < *(int *)((long)plVar10 + 0x2c))) {
            *(undefined1 *)(param_1 + 0xb8) = 1;
            uVar22 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
            System_Action___ctor_47b5ed0(uVar22,param_1,*(undefined8 *)PTR_DAT_04cb75c8,0);
            if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar11 = Dino_BusSand_App_Tween__Delayed_2161264(_UNK_00e20994,uVar22,0);
            if ((lVar11 == 0) ||
               (lVar11 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar11,1,0), lVar11 == 0))
            goto LAB_023ec490;
            plVar10 = (long *)Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar11,param_1,0);
          }
        }
        return plVar10;
      }
LAB_023ec490:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar3 = PTR_DAT_04cad1b0;
    if (**(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8) == 0) goto LAB_023ece08;
    plVar10 = (long *)Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                (**(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8),
                                 *(undefined8 *)PTR_DAT_04cad558);
    if (((ulong)plVar10 & 1) != 0) {
      return plVar10;
    }
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
    plVar10 = (long *)PTR_DAT_04cb7638;
    plVar19 = (long *)PTR_DAT_04cb7648;
  }
  if (lVar11 == 0) {
LAB_023ece08:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar23 = *plVar19;
  lVar16 = *plVar10;
  if (*(long *)(lVar16 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cae1a0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cabab8);
    FUN_02132f7c(PTR_DAT_04cabac0);
    FUN_02132f7c(PTR_DAT_04cabac8);
    FUN_02132f7c(PTR_DAT_04cae1a8);
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04cacf90);
    FUN_02132f7c(PTR_DAT_04cad3f0);
    FUN_02132f7c(PTR_DAT_04cad3f8);
    FUN_02132f7c(PTR_DAT_04cab4a0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cc5280);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4ce0);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cabde0);
    FUN_02132f7c(PTR_DAT_04cabae0);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cabf58);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cab188);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cc5288);
    if (*(long *)(lVar16 + 0x38) == 0) {
      FUN_0216b4cc(lVar16);
    }
  }
  puVar3 = PTR_DAT_04ca9ac8;
  uStack_68 = 0;
  acStack_6c[0] = '\0';
  auStack_70[0] = 0;
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  lStack_80 = 0;
  uVar22 = *(undefined8 *)PTR_DAT_04cc5280;
  uStack_98 = 0;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar10 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar22,0);
  uVar22 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(lVar16 + 0x38),0);
  if (plVar10 == (long *)0x0) goto LAB_02a45eb0;
  uVar8 = (**(code **)(*plVar10 + 0x2b8))(plVar10,uVar22,*(undefined8 *)(*plVar10 + 0x2c0));
  puVar4 = PTR_DAT_04ca9ae8;
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar22 = Dino_BusSand_App_UiAssets__Prefab_21513b8(lVar23,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    uVar13 = UnityEngine_Object__op_Equality_43c6f30(uVar22,0,0);
    if ((uVar13 & 1) != 0) {
      uVar22 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc5288,lVar23,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar22,0);
      return (long *)0x0;
    }
    uVar15 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar11,2,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    lVar12 = UnityEngine_Object__Instantiate_object__2805310
                       (uVar22,uVar15,0,*(undefined8 *)PTR_DAT_04cad390);
LAB_02a45794:
    if (lVar12 == 0) goto LAB_02a45eb0;
  }
  else {
    uVar22 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar11,2,0);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac4f8);
    }
    lVar12 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(lVar23,uVar22,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    uVar13 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
    if ((uVar13 & 1) == 0) goto LAB_02a45794;
    plVar10 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar22 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar3 + 0xe0));
    }
    lVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar22,0);
    if (plVar10 == (long *)0x0) goto LAB_02a45eb0;
    if ((lVar12 != 0) &&
       (lVar14 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0)) {
      uVar22 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar22,0);
    }
    if ((int)plVar10[3] == 0) {
LAB_02a45eb4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar10[4] = lVar12;
    thunk_FUN_02134474(plVar10 + 4,lVar12);
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar12,lVar23,plVar10,0);
    lVar14 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar11,2,0);
    if (((lVar14 == 0) ||
        (lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0), lVar14 == 0)) ||
       (uVar9 = UnityEngine_GameObject__get_layer_43c1118(lVar14,0), lVar12 == 0))
    goto LAB_02a45eb0;
    UnityEngine_GameObject__set_layer_43c11cc(lVar12,uVar9,0);
    lVar14 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
    uVar22 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar11,2,0);
    if (lVar14 == 0) goto LAB_02a45eb0;
    UnityEngine_Transform__SetParent_43d1e34(lVar14,uVar22,0,0);
  }
  UnityEngine_Object__set_name_43c72ec(lVar12,lVar23,0);
  plVar10 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else if (*plVar10 != *(long *)PTR_DAT_04cabdb0) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar13 = UnityEngine_Object__op_Inequality_43c8dec(plVar10,0,0);
  if ((uVar13 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar3 = PTR_DAT_04cacfc0;
    if (plVar10 == (long *)0x0) goto LAB_02a45eb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar10,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc),plVar10,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin_43cfe84
              (**(undefined4 **)(*(long *)puVar3 + 0xb8),
               (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1],plVar10,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (**(undefined4 **)(*(long *)puVar3 + 0xb8),
               (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1],plVar10,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar14 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar14 + 0xc),*(undefined4 *)(lVar14 + 0x10),
               *(undefined4 *)(lVar14 + 0x14),plVar10,0);
  }
  lVar14 = UnityEngine_GameObject__GetComponent_object__275a5dc
                     (lVar12,*(undefined8 *)PTR_DAT_04cad3f0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar13 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
  if ((uVar13 & 1) != 0) {
    lVar14 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar12,*(undefined8 *)PTR_DAT_04cacf88);
  }
  if (lVar14 != 0) {
    UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar14,0x19,0);
    if (*(long *)(lVar11 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_c8,*(long *)(lVar11 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
      puVar3 = PTR_DAT_04cabac0;
      iVar7 = 0;
      plStack_88 = plStack_c0;
      lStack_90 = lStack_c8;
      lStack_80 = (long)puStack_b8;
      lStack_c8 = 0;
      plStack_c0 = &lStack_90;
      while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&lStack_90,*(undefined8 *)puVar3), lVar6 = lStack_80,
            (uVar13 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        if ((uVar13 & 1) != 0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(char *)(lVar6 + 0x2c) == '\0') && (*(int *)(lVar6 + 0x28) == 2)) {
            iVar7 = iVar7 + 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&lStack_90,*(undefined8 *)PTR_DAT_04cabab8);
      UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar14,1,0);
      UnityEngine_Canvas__set_sortingOrder_46800e4(lVar14,iVar7 * 0x14 + 0x7e4,0);
      uVar22 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (lVar12,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar4);
      }
      uVar13 = UnityEngine_Object__op_Equality_43c6f30(uVar22,0,0);
      if ((uVar13 & 1) != 0) {
        UnityEngine_GameObject__AddComponent_object__275a54c(lVar12,*(undefined8 *)PTR_DAT_04cacf90)
        ;
      }
      Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(lVar12,0);
      if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar12,0);
      plVar10 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                  (lVar12,*(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x10));
      lVar16 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar12,1,*(undefined8 *)PTR_DAT_04cab4a0);
      puVar5 = PTR_DAT_04cae1a8;
      puVar3 = PTR_DAT_04cae1a0;
      if (lVar16 != 0) {
        uVar17 = *(uint *)(lVar16 + 0x18);
        if (0 < (int)uVar17) {
          uVar24 = 0;
          do {
            if (uVar17 <= uVar24) goto LAB_02a45eb4;
            lVar14 = *(long *)(lVar16 + (long)(int)uVar24 * 8 + 0x20);
            if (lVar14 == 0) goto LAB_02a45eb0;
            uVar22 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar22,lVar12,0);
            if ((uVar13 & 1) != 0) {
              uVar22 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar14,*(undefined8 *)puVar3);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar4);
              }
              uVar13 = UnityEngine_Object__op_Equality_43c6f30(uVar22,0,0);
              if ((uVar13 & 1) != 0) {
                lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0);
                if (lVar14 == 0) goto LAB_02a45eb0;
                UnityEngine_GameObject__AddComponent_object__275a54c(lVar14,*(undefined8 *)puVar5);
              }
            }
            uVar17 = *(uint *)(lVar16 + 0x18);
            uVar24 = uVar24 + 1;
          } while ((int)uVar24 < (int)uVar17);
        }
        if (plVar10 != (long *)0x0) {
          plVar10[4] = lVar23;
          thunk_FUN_02134474(plVar10 + 4,lVar23);
          *(undefined4 *)(plVar10 + 5) = 2;
          lVar11 = *(long *)(lVar11 + 0x38);
          if (lVar11 != 0) {
            lVar16 = *(long *)(lVar11 + 0x10);
            lVar14 = *(long *)PTR_DAT_04cabde0;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar16 != 0) {
              uVar17 = *(uint *)(lVar11 + 0x18);
              if (uVar17 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar17 + 1;
                plVar19 = (long *)(lVar16 + (long)(int)uVar17 * 8 + 0x20);
                *plVar19 = (long)plVar10;
                thunk_FUN_02134474(plVar19,plVar10);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar11,plVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              puVar4 = PTR_DAT_04cb4ce0;
              puVar3 = PTR_DAT_04cad7b8;
              if ((uVar8 & 1) == 0) {
                lVar11 = *(long *)PTR_DAT_04cb4ce0;
                cVar20 = '\0';
                uStack_68 = 0;
              }
              else {
                uVar22 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
                lVar11 = *(long *)puVar3;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar11);
                }
                uStack_68 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar22,lVar23,0);
                lVar11 = *(long *)puVar4;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar11);
                  lVar11 = *(long *)puVar4;
                }
                cVar20 = **(char **)(lVar11 + 0xb8);
              }
              acStack_6c[0] = cVar20 != '\0';
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar11);
                lVar11 = *(long *)puVar4;
              }
              lVar23 = *(long *)(lVar11 + 0xb8);
              auStack_70[0] = *(undefined1 *)(lVar23 + 1);
              if (acStack_6c[0] != '\0') {
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar11);
                  lVar23 = *(long *)(*(long *)puVar4 + 0xb8);
                }
                *(undefined1 *)(lVar23 + 1) = 1;
              }
              plStack_c0 = (long *)acStack_6c;
              puStack_b8 = auStack_70;
              lStack_c8 = 0;
              puStack_b0 = &uStack_68;
              (**(code **)(*plVar10 + 0x178))(plVar10,0,*(undefined8 *)(*plVar10 + 0x180));
              if ((char)*plStack_c0 != '\0') {
                lVar11 = *(long *)puVar4;
                uVar2 = *puStack_b8;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar11 = *(long *)puVar4;
                }
                *(undefined1 *)(*(long *)(lVar11 + 0xb8) + 1) = uVar2;
              }
              uVar22 = *puStack_b0;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__End_227e4f0(uVar22,0);
              if (lStack_c8 == 0) {
                if (acStack_6c[0] != '\0') {
                  lVar11 = *(long *)puVar4;
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar11 = *(long *)puVar4;
                  }
                  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
                  if (lVar11 != 0) {
                    (**(code **)(lVar11 + 0x18))
                              (*(undefined8 *)(lVar11 + 0x40),plVar10,*(undefined8 *)(lVar11 + 0x28)
                              );
                  }
                }
                uVar22 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
                Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258(uVar22,0);
                uVar22 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
                if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabf58);
                }
                Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar22,0);
                Dino_BusSand_App_UI_UiTweaks__Attach_22a3600(plVar10,0);
                Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened_220008c(plVar10,0);
                return plVar10;
              }
                    /* WARNING: Subroutine does not return */
              FUN_0213321c();
            }
          }
        }
      }
    }
  }
LAB_02a45eb0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

