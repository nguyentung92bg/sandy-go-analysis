/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$Golden
Dino_BusSand_App_Meta_GiftPackTrack_Gift_o* Dino_BusSand_App_Meta_GiftPackTrack__Golden (Dino_BusSand_App_Meta_GiftPackFeature_o* f, int32_t packId, System_String_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$Golden
   Dino_BusSand_App_Meta_GiftPackTrack_Gift_o* Dino_BusSand_App_Meta_GiftPackTrack__Golden
   (Dino_BusSand_App_Meta_GiftPackFeature_o* f, int32_t packId, System_String_o* source, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackTrack__Golden_22402c0
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  long lVar15;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9bef3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caeea8);
    FUN_02132f7c(PTR_DAT_04caeeb0);
    FUN_02132f7c(PTR_DAT_04caeeb8);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cb0098);
    FUN_02132f7c(PTR_DAT_04ca9ba0);
    FUN_02132f7c(PTR_DAT_04caeec0);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04cb36c0);
    bRam0000000004f9bef3 = 1;
  }
  puVar5 = PTR_DAT_04caec48;
  puVar4 = PTR_DAT_04ca9b98;
  puVar3 = PTR_DAT_04ca9b90;
  puStack_78 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_1 != 0) {
    lVar7 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
    lVar8 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
    lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc(param_1,param_2);
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar10,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar11 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(param_2);
    puVar6 = PTR_DAT_04cb0098;
    puVar5 = PTR_DAT_04caeeb0;
    puVar4 = PTR_DAT_04caeea8;
    puVar3 = PTR_DAT_04ca9ba0;
    if (lVar11 != 0) {
      System_Collections_Generic_List_GiftPackFeature_GoldenStage___GetEnumerator_3b3b948
                (&uStack_a0,lVar11,*(undefined8 *)PTR_DAT_04caeec0);
      uStack_80 = uStack_a0;
      uStack_a0 = 0;
      puStack_78 = puStack_98;
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      puStack_98 = &uStack_80;
      while (uVar12 = System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___MoveNext_3610858
                                (&uStack_80,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
        uVar13 = Dino_BusSand_App_Meta_GiftPackTrack__Item_223e8ec(0x3e9,(long)(int)uStack_68);
        if (lVar10 == 0) {
LAB_023405b4:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar15 = *(long *)puVar3;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_023405b4;
        uVar2 = *(uint *)(lVar10 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar10,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
      System_Collections_Generic_List_Enumerator_GiftPackFeature_GoldenStage___Dispose_3610854
                (&uStack_80,*(undefined8 *)puVar4);
      lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
      System_Object___ctor_4870e5c(lVar11,0);
      puVar3 = PTR_DAT_04cb36c0;
      if (lVar7 == 0) {
        uVar14 = 0xfa2;
      }
      else {
        uVar14 = *(undefined4 *)(lVar7 + 0x18);
      }
      if (lVar11 != 0) {
        *(undefined4 *)(lVar11 + 0x10) = uVar14;
        *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar3;
        thunk_FUN_02134474();
        *(undefined8 *)(lVar11 + 0x20) = param_3;
        thunk_FUN_02134474((undefined8 *)(lVar11 + 0x20),param_3);
        if (lVar8 != 0) {
          *(undefined4 *)(lVar11 + 0x28) = *(undefined4 *)(lVar8 + 0x18);
          uVar13 = Dino_BusSand_App_Meta_GiftPackFeature__PackTotalDuration_223a660(param_1,param_2)
          ;
          *(undefined8 *)(lVar11 + 0x38) = uVar13;
          *(long *)(lVar11 + 0x40) = lVar9;
          lVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
          *(long *)(lVar11 + 0x48) = lVar7 / 1000 + lVar9;
          *(undefined4 *)(lVar11 + 0x2c) = *(undefined4 *)(lVar8 + 0x14);
          lVar7 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(param_1);
          if (lVar7 != 0) {
            bVar1 = *(byte *)(lVar7 + 0x28);
            *(long *)(lVar11 + 0x50) = lVar10;
            *(uint *)(lVar11 + 0x30) = (uint)bVar1;
            thunk_FUN_02134474((long *)(lVar11 + 0x50),lVar10);
            return lVar11;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

