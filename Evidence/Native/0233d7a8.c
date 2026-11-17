/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$FinishGoldenSettlement
int32_t Dino_BusSand_App_Meta_GiftPackFeature__FinishGoldenSettlement (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$FinishGoldenSettlement
   int32_t Dino_BusSand_App_Meta_GiftPackFeature__FinishGoldenSettlement
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

int Dino_BusSand_App_Meta_GiftPackFeature__FinishGoldenSettlement_223d7a8
              (undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f9bedd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caeea8);
    FUN_02132f7c(PTR_DAT_04caeeb0);
    FUN_02132f7c(PTR_DAT_04caeeb8);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04caeec0);
    FUN_02132f7c(PTR_DAT_04caefe8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caced0);
    bRam0000000004f9bedd = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar8 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(param_1);
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x28) == '\0') {
      return 0;
    }
    iVar7 = Dino_BusSand_App_Meta_GiftPackFeature__UnclaimedGoldenCoins_223d5dc(param_1,param_2);
    puVar3 = PTR_DAT_04caec48;
    lVar11 = *(long *)(lVar8 + 0x30);
    if (lVar11 != 0) {
      lVar9 = *(long *)PTR_DAT_04caec48;
      *(undefined4 *)(lVar11 + 0x18) = 0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar11 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(param_2);
      puVar6 = PTR_DAT_04caefe8;
      puVar5 = PTR_DAT_04caeeb0;
      puVar4 = PTR_DAT_04caeea8;
      puVar2 = PTR_DAT_04caa160;
      if (lVar11 != 0) {
        System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                  (&uStack_90,lVar11,*(undefined8 *)PTR_DAT_04caeec0);
        uStack_70 = uStack_90;
        uStack_90 = 0;
        uStack_68 = puStack_88;
        uStack_58 = uStack_78;
        uStack_60 = uStack_80;
        puStack_88 = &uStack_70;
        while( true ) {
          do {
            uVar10 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                               (&uStack_70,*(undefined8 *)puVar5);
            if ((uVar10 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                        (&uStack_70,*(undefined8 *)puVar4);
              Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar6)
              ;
              if (0 < iVar7) {
                if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_Meta_Profile__Add_2272578
                          (0x3e9,iVar7,*(undefined8 *)PTR_DAT_04caced0,0);
              }
              Dino_BusSand_App_Meta_GiftPackTrack__GoldRewardGet_223cf94(param_1,param_2,0,1,iVar7);
              lVar8 = *(long *)puVar3;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar8 = *(long *)puVar3;
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
              if (lVar8 == 0) {
                return iVar7;
              }
              (**(code **)(lVar8 + 0x18))
                        (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
              return iVar7;
            }
          } while (*(int *)(lVar8 + 0x10) < uStack_60._4_4_);
          lVar11 = *(long *)(lVar8 + 0x30);
          if (lVar11 == 0) break;
          lVar9 = *(long *)(lVar11 + 0x10);
          lVar12 = *(long *)puVar2;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar9 == 0) break;
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = (undefined4)uStack_60;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar11,uStack_60 & 0xffffffff,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

