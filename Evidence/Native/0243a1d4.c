/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<Climb>d__46$$MoveNext
bool Dino_BusSand_App_UI_WinStreakPanel__Climb_d__46__MoveNext (Dino_BusSand_App_UI_WinStreakPanel__Climb_d__46_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0243a4d4) */
/* WARNING: Removing unreachable block (ram,0x0243aa48) */
/* WARNING: Removing unreachable block (ram,0x0243aa64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<Climb>d__46$$MoveNext
   bool Dino_BusSand_App_UI_WinStreakPanel__Climb_d__46__MoveNext
   (Dino_BusSand_App_UI_WinStreakPanel__Climb_d__46_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_WinStreakPanel__Climb_d__46__MoveNext_233a1d4(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = param_1;
  if ((bRam0000000004f9c658 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9350);
    FUN_02132f7c(PTR_DAT_04cb9358);
    FUN_02132f7c(PTR_DAT_04cb9360);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cb9368);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9c658 = 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x20);
  uVar4 = 0;
  plStack_78 = &lStack_58;
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  lStack_80 = 0;
  if (iVar3 < 3) {
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(0);
      }
      *(undefined1 *)(lVar7 + 0xb5) = 0;
      uVar4 = Dino_BusSand_App_UI_WinStreakPanel__Hop_2338f10(_UNK_00e201f4,_UNK_00e2098c,lVar7);
      *(undefined8 *)(lStack_58 + 0x18) = uVar4;
      thunk_FUN_02134474();
      uVar4 = 1;
      *(undefined4 *)(lStack_58 + 0x10) = 1;
      goto LAB_0243aa20;
    }
    if (iVar3 == 1) goto LAB_0243a328;
    if (iVar3 != 2) goto LAB_0243aa20;
    fVar11 = *(float *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar8 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    fVar11 = fVar11 + fVar8;
    bVar2 = fVar11 < _UNK_00e20590;
    *(float *)(lStack_58 + 0x34) = fVar11;
    param_1 = lStack_58;
    if (bVar2) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_0243a368;
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
LAB_0243a56c:
    *(undefined4 *)(lVar7 + 0xb0) = *(undefined4 *)(param_1 + 0x30);
    Dino_BusSand_App_UI_WinStreakPanel__SetFloor_233775c(lVar7,1);
    puVar1 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (lVar5 != 0) {
      fVar11 = *(float *)(lVar7 + 0xb0);
      iVar3 = Dino_BusSand_App_Meta_WinStreak__get_TopFloor_2293148(0);
      fVar8 = 1.0;
      if (1.0 <= (float)iVar3) {
        fVar8 = (float)iVar3;
      }
      Dino_BusSand_GameAudio__UiTick_2383128(fVar11 / fVar8,lVar5,0);
    }
    if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Haptics__Play_2388ed8(0,0);
    uVar4 = *(undefined8 *)(lVar7 + 0x78);
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e208cc,_UNK_00e20390,uVar4,0,0,0);
    if (*(long *)(lVar7 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_b8,*(long *)(lVar7 + 0xa8),*(undefined8 *)PTR_DAT_04cb9368);
    puStack_98 = puStack_b0;
    uStack_a0 = uStack_b8;
    uStack_90 = uStack_a8;
    *(undefined8 **)(lStack_58 + 0x40) = puStack_b0;
    *(undefined8 *)(lStack_58 + 0x38) = uStack_b8;
    *(ulong *)(lStack_58 + 0x48) = uStack_a8;
    thunk_FUN_02134474(lStack_58 + 0x38,0);
    param_1 = lStack_58;
LAB_0243a6b0:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    puVar1 = PTR_DAT_04cb9358;
    do {
      uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (param_1 + 0x38,*(undefined8 *)puVar1);
      if ((uVar6 & 1) == 0) {
        Dino_BusSand_App_UI_WinStreakPanel__Climb_d__46____m__Finally1_233abe0(lStack_58);
        puVar1 = PTR_DAT_04caca88;
        *(undefined8 *)(lStack_58 + 0x40) = 0;
        *(undefined8 *)(lStack_58 + 0x48) = 0;
        uVar4 = *(undefined8 *)puVar1;
        *(undefined8 *)(lStack_58 + 0x38) = 0;
        uVar4 = thunk_FUN_0216e89c(uVar4);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e20754,uVar4,0);
        *(undefined8 *)(lStack_58 + 0x18) = uVar4;
        thunk_FUN_02134474((undefined8 *)(lStack_58 + 0x18),uVar4);
        uVar12 = 4;
        goto LAB_0243aa18;
      }
      lVar5 = *(long *)(lStack_58 + 0x48);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      iVar3 = -0x80000000;
      if (*(float *)(lVar7 + 0xb0) != INFINITY) {
        iVar3 = (int)*(float *)(lVar7 + 0xb0);
      }
      param_1 = lStack_58;
    } while (*(int *)(*(long *)(lVar5 + 0x10) + 0x14) != iVar3);
    Dino_BusSand_App_UI_WinStreakPanel__RefreshStop_2338440(lVar7,lVar5,1);
    if (*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar5 + 0x18),0);
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar8 = _UNK_00e20590;
    Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e20590,_UNK_00e20590,uVar4,0,0,0);
    Dino_BusSand_App_UI_UiMotion__Punch_2283d78
              (0x3e800000,_UNK_00e2098c,*(undefined8 *)(lVar5 + 0x28),0,0,0);
    uVar4 = *(undefined8 *)(lVar7 + 0x40);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    uVar12 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    uVar14 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
    uStack_a0 = 0;
    puStack_98 = (undefined8 *)0x0;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    System_Nullable_Color____ctor_2bc9090
              (0x3f800000,_UNK_00e1fea8,0x3f000000,0x3f800000,&uStack_a0,
               *(undefined8 *)PTR_DAT_04cac878);
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puStack_c8 = puStack_98;
    uStack_d0 = uStack_a0;
    uStack_c0 = (undefined4)uStack_90;
    lVar7 = Dino_BusSand_App_UI_UiKit__Rays_228ce00
                      (0x44020000,uVar12,uVar14,0x3f000000,0x41f00000,uVar4,&uStack_d0,0);
    if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar11 = (float)Dino_BusSand_App_UI_WinStreakPanel__FloorY_2337bac
                              ((float)*(int *)(*(long *)(lVar5 + 0x10) + 0x14));
    Dino_BusSand_App_UI_WinStreakPanel__Place_2337b50(0xc2cf0000,fVar11 + 120.0,lVar7);
    if (*(long *)(lVar5 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = UnityEngine_Transform__GetSiblingIndex_43d48f4(*(long *)(lVar5 + 0x28),0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar6,uVar6 & 0xffffffff);
    }
    UnityEngine_Transform__SetSiblingIndex_43d4730(lVar7,uVar6 & 0xffffffff,0);
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc(0,_UNK_00e207cc,fVar8,_UNK_00e20660,lVar7,0,0,0);
    uVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8018(_UNK_00e205ec,uVar4,0);
    puVar1 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar1;
    }
    if (**(long **)(lVar7 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Sparkle_2382d28(**(long **)(lVar7 + 0xb8),0);
    }
    if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Haptics__Play_2388ed8(1,0);
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(fVar8,uVar4,0);
    *(undefined8 *)(lStack_58 + 0x18) = uVar4;
    thunk_FUN_02134474((undefined8 *)(lStack_58 + 0x18),uVar4);
    uVar12 = 3;
  }
  else {
    if (iVar3 == 3) goto LAB_0243a6b0;
    if (iVar3 != 4) {
      if (iVar3 == 5) {
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      }
      goto LAB_0243aa20;
    }
LAB_0243a328:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    iVar3 = *(int *)(param_1 + 0x28);
    fVar8 = *(float *)(lVar7 + 0xb0);
    if ((float)iVar3 <= fVar8) {
      if (*(char *)(lVar7 + 0xb5) != '\0') goto LAB_0243a438;
LAB_0243a4d8:
      puVar1 = PTR_DAT_04cad568;
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar1;
      }
      if (**(long **)(lVar5 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Fanfare_238433c(**(long **)(lVar5 + 0xb8),0);
      }
      uVar4 = Dino_BusSand_App_UI_WinStreakPanel__Hop_2338f10(_UNK_00e20390,0x3f000000,lVar7);
      *(undefined8 *)(lStack_58 + 0x18) = uVar4;
      thunk_FUN_02134474();
      uVar12 = 5;
    }
    else {
      if (*(char *)(lVar7 + 0xb5) != '\0') {
LAB_0243a438:
        *(undefined1 *)(lVar7 + 0xb5) = 0;
        *(float *)(lVar7 + 0xb0) = (float)iVar3;
        Dino_BusSand_App_UI_WinStreakPanel__SetFloor_233775c(lVar7,1);
        if (*(long *)(lVar7 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_a0,*(long *)(lVar7 + 0xa8),*(undefined8 *)PTR_DAT_04cb9368);
        puVar1 = PTR_DAT_04cb9358;
        puStack_68 = puStack_98;
        uStack_70 = uStack_a0;
        uStack_60 = uStack_90;
        uStack_a0 = 0;
        puStack_98 = &uStack_70;
        while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                 (&uStack_70,*(undefined8 *)puVar1), (uVar6 & 1) != 0) {
          Dino_BusSand_App_UI_WinStreakPanel__RefreshStop_2338440(lVar7,uStack_60,0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_70,*(undefined8 *)PTR_DAT_04cb9350);
        goto LAB_0243a4d8;
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
      fVar11 = 0.0;
      *(float *)(param_1 + 0x2c) = fVar8;
      *(float *)(param_1 + 0x30) = (float)(int)fVar8 + 1.0;
LAB_0243a368:
      if (*(char *)(lVar7 + 0xb5) != '\0') goto LAB_0243a56c;
      fVar8 = *(float *)(param_1 + 0x2c);
      fVar13 = *(float *)(param_1 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar9 = (float)Dino_BusSand_App_UI_UiMotion__OutQuad_228a4fc(fVar11 / _UNK_00e20590,0);
      fVar11 = 1.0;
      if (fVar9 <= 1.0) {
        fVar11 = fVar9;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar9) {
        fVar10 = fVar11;
      }
      Dino_BusSand_App_UI_WinStreakPanel__SetFloor_233775c
                (fVar8 + (fVar13 - fVar8) * fVar10,lVar7,1);
      *(undefined8 *)(lStack_58 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(lStack_58 + 0x18),0);
      uVar12 = 2;
    }
  }
LAB_0243aa18:
  *(undefined4 *)(lStack_58 + 0x10) = uVar12;
  uVar4 = 1;
LAB_0243aa20:
  lVar7 = lStack_80;
  if (lStack_80 != 0) {
    FUN_01e7a3d0(&plStack_78);
                    /* WARNING: Subroutine does not return */
    FUN_0213321c(lVar7);
  }
  return uVar4;
}

