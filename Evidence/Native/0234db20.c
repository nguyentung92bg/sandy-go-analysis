/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$CreateNew
void Dino_BusSand_App_Meta_StreakRateFeature__CreateNew (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, int32_t activityId, int64_t start, int64_t end, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$CreateNew
   void Dino_BusSand_App_Meta_StreakRateFeature__CreateNew
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, int32_t activityId, int64_t start, int64_t
   end, const MethodInfo* method); */

void Dino_BusSand_App_Meta_StreakRateFeature__CreateNew_224db20
               (undefined8 param_1,undefined4 param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  puVar4 = PTR_DAT_04cb3b48;
  if ((bRam0000000004f9bfb0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3b50);
    FUN_02132f7c(PTR_DAT_04cb3b58);
    FUN_02132f7c(PTR_DAT_04cb3b60);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb3bd8);
    FUN_02132f7c(PTR_DAT_04cb3b68);
    FUN_02132f7c(PTR_DAT_04cb3ba8);
    FUN_02132f7c(PTR_DAT_04cb3b48);
    FUN_02132f7c(PTR_DAT_04cb3be0);
    bRam0000000004f9bfb0 = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  lVar12 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                     (param_1,*(undefined8 *)puVar4);
  puVar9 = PTR_DAT_04cb3be0;
  puVar8 = PTR_DAT_04cb3bd8;
  puVar7 = PTR_DAT_04cb3ba8;
  puVar6 = PTR_DAT_04cb3b58;
  puVar5 = PTR_DAT_04cb3b50;
  puVar3 = PTR_DAT_04cac498;
  auVar2._8_8_ = auStack_90._8_8_;
  auVar2._0_8_ = auStack_90._0_8_;
  if ((lVar12 != 0) && (auStack_90 = auVar2, *(long *)(lVar12 + 0x10) != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_a8,*(long *)(lVar12 + 0x10),*(undefined8 *)PTR_DAT_04cb3b68);
    lStack_70 = lStack_98;
    puStack_78 = puStack_a0;
    uStack_80 = uStack_a8;
    uStack_a8 = 0;
    puStack_a0 = &uStack_80;
    while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_80,*(undefined8 *)puVar6), (uVar13 & 1) != 0) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (((*(long *)(lStack_70 + 0x30) <= param_3) && (param_3 <= *(long *)(lStack_70 + 0x38))) ||
         ((*(long *)(lStack_70 + 0x30) <= param_4 && (param_4 <= *(long *)(lStack_70 + 0x38))))) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)puVar5);
        return;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_80,*(undefined8 *)puVar5);
    lVar12 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                       (param_1,*(undefined8 *)puVar4);
    uVar11 = Dino_BusSand_App_Meta_SystemOpen__NextNeedWinTimes_22435b8(3);
    if (lVar12 != 0) {
      uVar15 = *(undefined8 *)puVar9;
      *(undefined4 *)(lVar12 + 0x18) = uVar11;
      lVar12 = thunk_FUN_0216e89c(uVar15);
      Dino_BusSand_App_Meta_StreakRateSlot___ctor_224b5ac();
      if (lVar12 != 0) {
        *(undefined4 *)(lVar12 + 0x10) = param_2;
        auStack_90 = System_Guid__NewGuid_48283c0(0);
        uVar15 = System_Guid__ToString_482a234(auStack_90,0);
        *(undefined8 *)(lVar12 + 0x20) = uVar15;
        thunk_FUN_02134474((undefined8 *)(lVar12 + 0x20),uVar15);
        *(long *)(lVar12 + 0x30) = param_3;
        *(long *)(lVar12 + 0x38) = param_4;
        *(long *)(lVar12 + 0x40) = param_3;
        *(undefined8 *)(lVar12 + 0x48) = 0;
        *(undefined4 *)(lVar12 + 0x28) = 0;
        *(undefined4 *)(lVar12 + 0x50) = 0xffffffff;
        bVar10 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(3);
        uVar15 = *(undefined8 *)puVar4;
        *(undefined1 *)(lVar12 + 0x5d) = 0;
        *(byte *)(lVar12 + 0x5c) = (bVar10 ^ 0xff) & 1;
        lVar14 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar15);
        if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x10), lVar14 != 0)) {
          lVar16 = *(long *)(lVar14 + 0x10);
          lVar18 = *(long *)puVar8;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar16 != 0) {
            uVar1 = *(uint *)(lVar14 + 0x18);
            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar1 + 1;
              plVar17 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
              *plVar17 = lVar12;
              thunk_FUN_02134474(plVar17,lVar12);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar14,lVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            lVar14 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                               (param_1,*(undefined8 *)puVar4);
            if (lVar14 != 0) {
              uVar15 = *(undefined8 *)puVar7;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,uVar15);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Meta_GameTracking__GoldenStreakJoined_221a7e8(lVar12,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

