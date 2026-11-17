/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$OnSlot
void Dino_BusSand_App_UI_LevelEnterPanel__OnSlot (Dino_BusSand_App_UI_LevelEnterPanel_o* __this, int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$OnSlot
   void Dino_BusSand_App_UI_LevelEnterPanel__OnSlot (Dino_BusSand_App_UI_LevelEnterPanel_o* __this,
   int32_t item, const MethodInfo* method); */

void Dino_BusSand_App_UI_LevelEnterPanel__OnSlot_2319e6c(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c57f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cae218);
    FUN_02132f7c(PTR_DAT_04cb8630);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb8548);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb81c8);
    FUN_02132f7c(PTR_DAT_04cb81b8);
    FUN_02132f7c(PTR_DAT_04cb81d0);
    FUN_02132f7c(PTR_DAT_04caf1e0);
    bRam0000000004f9c57f = 1;
  }
  puVar3 = PTR_DAT_04cac440;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar8 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  lVar16 = *(long *)puVar3;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar16);
  }
  iVar9 = Dino_BusSand_App_Meta_Economy__UnlockLevel_2202a00(param_2,0);
  puVar4 = PTR_DAT_04caf1e0;
  puVar2 = PTR_DAT_04caba50;
  if (iVar8 < iVar9) {
    if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)puVar4,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    puVar1 = PTR_DAT_04ca9c20;
    lVar16 = *(long *)puVar2;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar16 = *(long *)puVar2;
    }
    lVar17 = **(long **)(lVar16 + 0xb8);
    plVar11 = (long *)FUN_02133068(*(undefined8 *)puVar1,1);
    lVar16 = *(long *)puVar3;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar16);
    }
    Dino_BusSand_App_Meta_Economy__UnlockLevel_2202a00(param_2,0);
    lVar16 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffcc);
    if (plVar11 != (long *)0x0) {
      if ((lVar16 != 0) &&
         (lVar12 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
        uVar13 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar13,0);
      }
      if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar11[4] = lVar16;
      thunk_FUN_02134474(plVar11 + 4,lVar16);
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb81b8,plVar11,0);
      if (lVar17 != 0) {
        Dino_BusSand_App_GameApp__Toast_2166a6c(lVar17,uVar13,0);
        return;
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = Dino_BusSand_App_Meta_Profile__Count_225b150(param_2,0);
    lVar16 = Dino_BusSand_App_CheatFlags__Usable_214f578(uVar13,0);
    if (lVar16 < 1) {
      if (*(int *)(*(long *)PTR_DAT_04cb8548 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar14 = Dino_BusSand_App_UI_LevelEnterPanel__get_NeedHallGuide_2319d7c();
      if ((uVar14 & 1) == 0) {
        if (cRam0000000004f9b94d == '\0') {
          FUN_02132f7c(PTR_DAT_04cad1b0);
          cRam0000000004f9b94d = '\x01';
        }
        lVar16 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
        uVar13 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffc8);
        if (lVar16 != 0) {
          Dino_BusSand_App_UI_UIManager__Open_object__2945314
                    (lVar16,*(undefined8 *)PTR_DAT_04cb81d0,2,uVar13,*(undefined8 *)PTR_DAT_04cb81c8
                    );
          return;
        }
        goto LAB_0241a244;
      }
    }
    puVar1 = PTR_DAT_04cb8548;
    lVar16 = *(long *)PTR_DAT_04cb8548;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar16 = *(long *)puVar1;
    }
    if (**(long **)(lVar16 + 0xb8) != 0) {
      uVar14 = System_Collections_Generic_HashSet_int___Add_37dc0f0
                         (**(long **)(lVar16 + 0xb8),param_2,*(undefined8 *)PTR_DAT_04cae218);
      if ((uVar14 & 1) == 0) {
        lVar16 = *(long *)puVar1;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar16 = *(long *)puVar1;
        }
        if (**(long **)(lVar16 + 0xb8) == 0) goto LAB_0241a244;
        System_Collections_Generic_HashSet_int___Remove_37db7a8
                  (**(long **)(lVar16 + 0xb8),param_2,*(undefined8 *)PTR_DAT_04cb8630);
      }
      if ((bRam0000000004f9c57e & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb8600);
        FUN_02132f7c(PTR_DAT_04cac440);
        FUN_02132f7c(PTR_DAT_04cb8608);
        FUN_02132f7c(PTR_DAT_04cb8610);
        FUN_02132f7c(PTR_DAT_04cb8618);
        FUN_02132f7c(PTR_DAT_04cae220);
        FUN_02132f7c(PTR_DAT_04cb8620);
        FUN_02132f7c(PTR_DAT_04cb8628);
        FUN_02132f7c(PTR_DAT_04cb8548);
        FUN_02132f7c(PTR_DAT_04cabaf8);
        bRam0000000004f9c57e = 1;
      }
      puVar5 = PTR_DAT_04cb8610;
      puVar4 = PTR_DAT_04cb8548;
      puVar2 = PTR_DAT_04cae220;
      puVar3 = PTR_DAT_04cac440;
      puVar1 = PTR_DAT_04cabaf8;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_Dictionary_int__object___GetEnumerator_3437768
                (&uStack_b8,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cb8600);
      uStack_70 = uStack_98;
      uStack_88 = puStack_b0;
      uStack_90 = uStack_b8;
      lStack_78 = lStack_a0;
      uStack_80 = uStack_a8;
      uStack_b8 = 0;
      puStack_b0 = &uStack_90;
      while( true ) {
        uVar10 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext_363171c
                           (&uStack_90,*(undefined8 *)puVar5);
        lVar16 = lStack_78;
        uVar14 = uStack_80;
        if ((uVar10 & 1) == 0) {
          System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose_3631840
                    (&uStack_90,*(undefined8 *)PTR_DAT_04cb8608);
          return;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar8 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar9 = Dino_BusSand_App_Meta_Economy__UnlockLevel_2202a00(uVar14 & 0xffffffff,0);
        uVar13 = Dino_BusSand_App_Meta_Profile__Count_225b150(uVar14 & 0xffffffff,0);
        lVar17 = Dino_BusSand_App_CheatFlags__Usable_214f578(uVar13,0);
        lVar12 = *(long *)puVar4;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar4;
        }
        if (**(long **)(lVar12 + 0xb8) == 0) break;
        uVar6 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                          (**(long **)(lVar12 + 0xb8),uVar14 & 0xffffffff,*(undefined8 *)puVar2);
        if (iVar8 < iVar9) {
          uVar15 = 0;
        }
        else {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = Dino_BusSand_App_UI_LevelEnterPanel__get_NeedHallGuide_2319d7c();
          if ((uVar10 & 1) == 0) {
            uVar15 = 2;
            if (lVar17 < 1) {
              uVar15 = 3;
            }
          }
          else {
            uVar15 = 1;
          }
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = Dino_BusSand_App_Meta_Economy__UnlockLevel_2202a00(uVar14 & 0xffffffff,0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        Dino_BusSand_App_UI_KitBoosterButton__Set_2288aac(lVar16,uVar15,lVar17,uVar7,uVar6 & 1,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_0241a244:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

