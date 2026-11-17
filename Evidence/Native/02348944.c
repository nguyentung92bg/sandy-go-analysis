/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$GiveAllLeftReward
System_Collections_Generic_List_PassportFeature_Reward__o* Dino_BusSand_App_Meta_PassportFeature__GiveAllLeftReward (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$GiveAllLeftReward
   System_Collections_Generic_List_PassportFeature_Reward__o*
   Dino_BusSand_App_Meta_PassportFeature__GiveAllLeftReward
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_PassportFeature__GiveAllLeftReward_2248944(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf78 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf638);
    FUN_02132f7c(PTR_DAT_04caf640);
    FUN_02132f7c(PTR_DAT_04caf648);
    FUN_02132f7c(PTR_DAT_04cb39e0);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cb39b8);
    FUN_02132f7c(PTR_DAT_04caf650);
                    /* try { // try from 023489d4 to 02448a73 has its CatchHandler @ 023489d4
                       catch() { ... } // from try @ 023489d4 with catch @ 023489d4
                       catch() { ... } // from try @ 02348b50 with catch @ 023489d4
                       catch() { ... } // from try @ 02348ba0 with catch @ 023489d4
                       catch() { ... } // from try @ 02348c0c with catch @ 023489d4 */
    FUN_02132f7c(PTR_DAT_04cb0388);
    FUN_02132f7c(PTR_DAT_04cb03b0);
    FUN_02132f7c(PTR_DAT_04cb0390);
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    FUN_02132f7c(PTR_DAT_04cb25f0);
    bRam0000000004f9bf78 = 1;
  }
  uStack_80 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_a0 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  Dino_BusSand_App_Meta_PassportFeature__CommitPendingKeys_224785c(param_1);
  lVar9 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar3)
  ;
  uVar10 = Dino_BusSand_App_Meta_PassportFeature__AllUnclaimedRewards_2248514(param_1);
  iVar6 = Dino_BusSand_App_Meta_PassportFeature__get_BankStageCount_2246e78(param_1);
  puVar4 = PTR_DAT_04cb39b8;
  puVar3 = PTR_DAT_04cb0388;
  if (lVar9 != 0) {
                    /* try { // try from 02348a74 to 02448a83 has its CatchHandler @ 02348b6c */
    uVar2 = iVar6 - *(int *)(lVar9 + 0x40);
                    /* try { // try from 02348a90 to 02448a9f has its CatchHandler @ 02348b70 */
    if (((int)uVar2 < 1) || (*(char *)(lVar9 + 0x61) == '\0')) {
      puVar18 = (undefined8 *)0x0;
      puVar19 = (undefined8 *)PTR_DAT_04cb0390;
      puVar20 = (undefined8 *)PTR_DAT_04cb0388;
    }
    else {
      lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb0390);
      System_Collections_Generic_List_PassportFeature_Reward____ctor_3b57a78
                (lVar11,*(undefined8 *)puVar3);
                    /* try { // try from 02348ab4 to 02448abb has its CatchHandler @ 02348b64 */
      lVar12 = Dino_BusSand_App_Meta_PassportFeature__get_BonusBankSingleReward_224553c(param_1);
      if (lVar12 == 0) goto LAB_02348f10;
                    /* try { // try from 02348abc to 02448ac3 has its CatchHandler @ 02348b60 */
      System_Collections_Generic_List_PassportFeature_Reward___GetEnumerator_3b58f1c
                (&uStack_c8,lVar12,*(undefined8 *)PTR_DAT_04caf650);
      puVar3 = PTR_DAT_04caf640;
                    /* try { // try from 02348ae0 to 02448ae7 has its CatchHandler @ 02348b58 */
      puVar18 = (undefined8 *)0x0;
      puStack_98 = puStack_c0;
      uStack_a0 = uStack_c8;
      lStack_88 = lStack_b0;
      uStack_90 = uStack_b8;
      uStack_80 = uStack_a8;
      uStack_c8 = 0;
      puStack_c0 = &uStack_a0;
                    /* try { // try from 02348b00 to 02448b07 has its CatchHandler @ 02348b54 */
      while (uVar13 = System_Collections_Generic_List_Enumerator_PassportFeature_Reward___MoveNext_3613ea8
                                (&uStack_a0,*(undefined8 *)puVar3), uVar14 = uStack_90,
            (uVar13 & 1) != 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar12 = *(long *)(lVar11 + 0x10);
                    /* try { // try from 02348b1c to 02448b2b has its CatchHandler @ 02348b68 */
        lVar16 = *(long *)puVar4;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar17 = lStack_88 * (ulong)uVar2;
        uVar1 = *(uint *)(lVar11 + 0x18);
                    /* try { // try from 02348b40 to 02448b47 has its CatchHandler @ 02348b50 */
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          lVar12 = lVar12 + (long)(int)uVar1 * 0x18;
                    /* try { // try from 02348b4c to 02448b4f has its CatchHandler @ 02348b5c */
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02348b40 with catch @ 02348b50
                       try { // try from 02348b50 to 02448b87 has its CatchHandler @ 023489d4 */
          *(undefined8 *)(lVar12 + 0x20) = uStack_90;
          *(long *)(lVar12 + 0x28) = lVar17;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02348b00 with catch @ 02348b54
                        */
          *(undefined8 *)(lVar12 + 0x30) = uStack_80;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02348ae0 with catch @ 02348b58
                        */
        }
        else {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02348b4c with catch @ 02348b5c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02348abc with catch @ 02348b60
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02348ab4 with catch @ 02348b64
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02348b1c with catch @ 02348b68
                        */
          uStack_78 = uStack_90;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02348a74 with catch @ 02348b6c
                        */
          uStack_68 = uStack_80;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02348a90 with catch @ 02348b70
                        */
          lStack_70 = lVar17;
          System_Collections_Generic_List_PassportFeature_Reward___AddWithResize_3b58380
                    (lVar11,&uStack_78,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        if ((int)uVar14 != 0x3e9) {
          lVar17 = 0;
        }
        puVar18 = (undefined8 *)(lVar17 + (long)puVar18);
                    /* try { // try from 02348b88 to 02448b9f has its CatchHandler @ 02348c04 */
      }
                    /* try { // try from 02348ba0 to 02448bf3 has its CatchHandler @ 023489d4 */
      System_Collections_Generic_List_Enumerator_PassportFeature_Reward___Dispose_3613ea4
                (&uStack_a0,*(undefined8 *)PTR_DAT_04caf638);
      puVar19 = (undefined8 *)PTR_DAT_04cb0390;
      puVar20 = (undefined8 *)PTR_DAT_04cb0388;
      if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_PassportFeature__Merge_224864c(uVar10,lVar11);
      *(int *)(lVar9 + 0x40) = iVar6;
    }
    lVar11 = thunk_FUN_0216e89c(*puVar19);
                    /* try { // try from 02348bf4 to 02448c03 has its CatchHandler @ 02348c04 */
    System_Collections_Generic_List_PassportFeature_Reward____ctor_3b57a78(lVar11,*puVar20);
    lVar12 = thunk_FUN_0216e89c(*puVar19);
                    /* catch() { ... } // from try @ 02348b88 with catch @ 02348c04
                       catch() { ... } // from try @ 02348bf4 with catch @ 02348c04 */
                    /* try { // try from 02348c08 to 02448c0b has its CatchHandler @ 02348c14 */
                    /* try { // try from 02348c0c to 02448c17 has its CatchHandler @ 023489d4 */
    System_Collections_Generic_List_PassportFeature_Reward____ctor_3b57a78(lVar12,*puVar20);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02348c08 with catch @ 02348c14
                        */
    iVar6 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1);
    puVar5 = PTR_DAT_04cb39e0;
    puVar3 = PTR_DAT_04caa160;
    if (0 < iVar6) {
      iVar6 = 0;
      do {
        uVar13 = Dino_BusSand_App_Meta_PassportFeature__IsFreeClaimed_2246fe4(param_1,iVar6);
        if ((uVar13 & 1) == 0) {
          uVar13 = Dino_BusSand_App_Meta_PassportFeature__CanClaimFree_2247144(param_1,iVar6);
          if ((uVar13 & 1) != 0) {
            uVar14 = Dino_BusSand_App_Meta_PassportFeature__StageRewards_2245468(param_1,iVar6,0);
            if (lVar11 == 0) goto LAB_02348f10;
            System_Collections_Generic_List_PassportFeature_Reward___AddRange_3b585dc
                      (lVar11,uVar14,*(undefined8 *)puVar5);
          }
          lVar16 = *(long *)(lVar9 + 0x30);
          if (lVar16 == 0) goto LAB_02348f10;
          lVar17 = *(long *)(lVar16 + 0x10);
          lVar15 = *(long *)puVar3;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_02348f10;
          uVar2 = *(uint *)(lVar16 + 0x18);
          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar2 + 1;
            *(int *)(lVar17 + (long)(int)uVar2 * 4 + 0x20) = iVar6;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar16,iVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar13 = Dino_BusSand_App_Meta_PassportFeature__IsPassClaimed_2247094(param_1,iVar6);
        if (((uVar13 & 1) == 0) && (*(char *)(lVar9 + 0x61) != '\0')) {
          uVar13 = Dino_BusSand_App_Meta_PassportFeature__CanClaimPass_2247180(param_1,iVar6);
          if ((uVar13 & 1) != 0) {
            uVar14 = Dino_BusSand_App_Meta_PassportFeature__StageRewards_2245468(param_1,iVar6,1);
            if (lVar12 == 0) goto LAB_02348f10;
            System_Collections_Generic_List_PassportFeature_Reward___AddRange_3b585dc
                      (lVar12,uVar14,*(undefined8 *)puVar5);
          }
          lVar16 = *(long *)(lVar9 + 0x38);
          if (lVar16 == 0) goto LAB_02348f10;
          lVar17 = *(long *)(lVar16 + 0x10);
          lVar15 = *(long *)puVar3;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_02348f10;
          uVar2 = *(uint *)(lVar16 + 0x18);
          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar2 + 1;
            *(int *)(lVar17 + (long)(int)uVar2 * 4 + 0x20) = iVar6;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar16,iVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
        iVar6 = iVar6 + 1;
        iVar7 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1);
      } while (iVar6 < iVar7);
    }
    puVar3 = PTR_DAT_04cb25f0;
    if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_PassportFeature__Grant_22456fc(uVar10,*(undefined8 *)puVar3);
    *(undefined8 **)(param_1 + 0x28) = puVar18;
    if (lVar11 != 0) {
      if (0 < *(int *)(lVar11 + 0x18)) {
        Dino_BusSand_App_Meta_PassportFeature__TrackReward_2247b68(param_1,0,1,0xffffffff,lVar11);
      }
      puVar3 = PTR_DAT_04cb0388;
      if (lVar12 != 0) {
        if (0 < *(int *)(lVar12 + 0x18)) {
          Dino_BusSand_App_Meta_PassportFeature__TrackReward_2247b68(param_1,1,1,0xffffffff,lVar12);
        }
        if ((long)puVar18 < 1) {
LAB_02348ed0:
          puVar3 = PTR_DAT_04cb0558;
          *(undefined4 *)(lVar9 + 0x14) = 2;
          Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar3);
          return uVar10;
        }
        uVar8 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1);
        lVar11 = thunk_FUN_0216e89c(*puVar19);
        System_Collections_Generic_List_PassportFeature_Reward____ctor_3b57a78
                  (lVar11,*(undefined8 *)puVar3);
        if (lVar11 != 0) {
          lVar12 = *(long *)(lVar11 + 0x10);
          lVar16 = *(long *)puVar4;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          uVar14 = _UNK_00e69970;
          if (lVar12 != 0) {
            uVar2 = *(uint *)(lVar11 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              lVar12 = lVar12 + (long)(int)uVar2 * 0x18;
              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar12 + 0x20) = uVar14;
              *(undefined8 **)(lVar12 + 0x28) = puVar18;
              *(undefined8 *)(lVar12 + 0x30) = 0;
            }
            else {
              uStack_c8 = _UNK_00e69970;
              uStack_b8 = 0;
              puStack_c0 = puVar18;
              System_Collections_Generic_List_PassportFeature_Reward___AddWithResize_3b58380
                        (lVar11,&uStack_c8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            Dino_BusSand_App_Meta_PassportFeature__TrackReward_2247b68(param_1,1,2,uVar8,lVar11);
            goto LAB_02348ed0;
          }
        }
      }
    }
  }
LAB_02348f10:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

