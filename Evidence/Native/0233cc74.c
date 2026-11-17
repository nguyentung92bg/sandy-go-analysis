/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$ClaimGoldenStage
int32_t Dino_BusSand_App_Meta_GiftPackFeature__ClaimGoldenStage (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, int32_t stageId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$ClaimGoldenStage
   int32_t Dino_BusSand_App_Meta_GiftPackFeature__ClaimGoldenStage
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, int32_t stageId, const
   MethodInfo* method); */

ulong Dino_BusSand_App_Meta_GiftPackFeature__ClaimGoldenStage_223cc74
                (undefined8 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if ((bRam0000000004f9bedb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caeea8);
    FUN_02132f7c(PTR_DAT_04caeeb0);
    FUN_02132f7c(PTR_DAT_04caeeb8);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04caeec0);
    FUN_02132f7c(PTR_DAT_04caefe8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caced0);
    bRam0000000004f9bedb = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar7 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(param_1);
  puVar3 = PTR_DAT_04caec48;
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x28) == '\0') {
      return 0;
    }
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar8 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(param_2);
    puVar5 = PTR_DAT_04caeeb0;
    puVar4 = PTR_DAT_04caeea8;
    puVar2 = PTR_DAT_04cad860;
    if (lVar8 != 0) {
      System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                (&uStack_90,lVar8,*(undefined8 *)PTR_DAT_04caeec0);
      uStack_70 = uStack_90;
      uStack_90 = 0;
      uStack_68 = puStack_88;
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      puStack_88 = &uStack_70;
      do {
        do {
          uVar9 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                            (&uStack_70,*(undefined8 *)puVar5);
          if ((uVar9 & 1) == 0) {
            uVar9 = 0;
            goto LAB_0233ce3c;
          }
        } while (((int)uStack_60 != param_3) ||
                (*(int *)(lVar7 + 0x10) < (int)((ulong)uStack_60 >> 0x20)));
        if (*(long *)(lVar7 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar6 = (int)uStack_58;
        uVar9 = uStack_58 & 0xffffffff;
        uVar10 = System_Collections_Generic_List_int___Contains_3a2c3ec
                           (*(long *)(lVar7 + 0x30),param_3,*(undefined8 *)puVar2);
      } while ((uVar10 & 1) != 0);
      lVar7 = *(long *)(lVar7 + 0x30);
      if (lVar7 != 0) {
        lVar8 = *(long *)(lVar7 + 0x10);
        lVar11 = *(long *)PTR_DAT_04caa160;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(int *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = param_3;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar7,param_3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                    (param_1,*(undefined8 *)PTR_DAT_04caefe8);
          if (0 < iVar6) {
            if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Meta_Profile__Add_2272578
                      (0x3e9,uVar9,*(undefined8 *)PTR_DAT_04caced0,0);
          }
          Dino_BusSand_App_Meta_GiftPackTrack__GoldRewardGet_223cf94
                    (param_1,param_2,param_3,0,uVar9);
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar3;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28))
            ;
          }
LAB_0233ce3c:
          System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                    (&uStack_70,*(undefined8 *)puVar4);
          return uVar9;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

