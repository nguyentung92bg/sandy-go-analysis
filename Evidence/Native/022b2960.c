/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel.<UnlockSequence>d__29$$MoveNext
bool Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__UnlockSequence_d__29__MoveNext (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__UnlockSequence_d__29_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel.<UnlockSequence>d__29$$MoveNext
   bool Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__UnlockSequence_d__29__MoveNext
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__UnlockSequence_d__29_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__UnlockSequence_d__29__MoveNext_21b2960(long param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  
  if ((bRam0000000004f9ba97 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cad688);
    FUN_02132f7c(PTR_DAT_04cad698);
    FUN_02132f7c(PTR_DAT_04cad6a8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cad6d0);
    FUN_02132f7c(PTR_DAT_04caefe8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae880);
    FUN_02132f7c(PTR_DAT_04caf0c8);
    FUN_02132f7c(PTR_DAT_04caf088);
    FUN_02132f7c(PTR_DAT_04caf140);
    FUN_02132f7c(PTR_DAT_04caf1e0);
    FUN_02132f7c(PTR_DAT_04caf0a0);
    bRam0000000004f9ba97 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar15 = *(long *)(param_1 + 0x28);
  uVar11 = 0;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  lStack_80 = 0;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      uVar14 = 2;
      goto LAB_022b2d38;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(char *)(param_1 + 0x20) != '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar15 != 0) {
        uVar11 = 0;
        if (*(long *)(lVar15 + 0x40) != 0) {
          lVar12 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc
                             (*(long *)(lVar15 + 0x40),0);
          uVar11 = 0;
          if (lVar12 != 0) {
            *(undefined1 *)(lVar12 + 0x41) = 0;
            uVar11 = 0;
            if (*(long *)(lVar15 + 0x40) != 0) {
              Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                        (*(long *)(lVar15 + 0x40),*(undefined8 *)PTR_DAT_04caefe8);
              Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__RefreshAll_21b0404(lVar15,0);
              return 0;
            }
          }
        }
      }
      goto LAB_022b2d68;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (lVar15 != 0) {
    Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__HideTip_21b15d0(lVar15,0);
    puVar5 = PTR_DAT_04cab1e8;
    if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cae880,0);
    Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__RefreshHeader_21b00a4(lVar15,0);
    uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar15,*(undefined8 *)PTR_DAT_04caf088,0);
    puVar7 = PTR_DAT_04caec68;
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
    }
    Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar11,*(undefined8 *)PTR_DAT_04caf0a0,0);
    uVar11 = 0;
    if (*(long *)(lVar15 + 0x50) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_a8,*(long *)(lVar15 + 0x50),*(undefined8 *)PTR_DAT_04cad6d0);
      puVar10 = PTR_DAT_04caf1e0;
      puVar9 = PTR_DAT_04caf140;
      puVar8 = PTR_DAT_04caf0c8;
      puVar6 = PTR_DAT_04cad698;
      puVar4 = PTR_DAT_04ca9ae8;
      fVar17 = 0.0;
      puStack_88 = puStack_a0;
      uStack_90 = uStack_a8;
      lStack_80 = lStack_98;
      puStack_a0 = &uStack_90;
      uStack_a8 = 0;
      bVar2 = false;
      while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_90,*(undefined8 *)puVar6), lVar15 = lStack_80,
            (uVar13 & 1) != 0) {
        if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar11 = UnityEngine_Transform__Find_43d4bec(lStack_80,*(undefined8 *)puVar9,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar13 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
        if ((uVar13 & 1) == 0) {
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,1,0);
          UnityEngine_Transform__SetAsLastSibling_43d4684(lVar15,0);
          fVar16 = (float)Dino_BusSand_App_UI_GiftPackUi__Play_21ada68
                                    (uVar11,*(undefined8 *)puVar8,0);
          if (fVar17 <= fVar16) {
            fVar17 = fVar16;
          }
          bVar3 = !bVar2;
          bVar2 = true;
          if (bVar3) {
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            bVar2 = true;
            Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)puVar10,0);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_90,*(undefined8 *)PTR_DAT_04cad688);
      if (fVar17 <= 0.0) {
        fVar17 = 0.5;
      }
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(fVar17,0);
      if (param_1 != 0) {
        *(undefined8 *)(param_1 + 0x18) = uVar11;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar11);
        uVar14 = 3;
LAB_022b2d38:
        *(undefined4 *)(param_1 + 0x10) = uVar14;
        return 1;
      }
    }
  }
LAB_022b2d68:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(uVar11);
}

