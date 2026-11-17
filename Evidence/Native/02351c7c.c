/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$Rewards
System_Collections_Generic_List_ActivityRewardEntry__o* Dino_BusSand_App_Meta_StreakTowerUtil__Rewards (int32_t rewardId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$Rewards
   System_Collections_Generic_List_ActivityRewardEntry__o*
   Dino_BusSand_App_Meta_StreakTowerUtil__Rewards (int32_t rewardId, const MethodInfo* method); */

long Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  
  puVar6 = PTR_DAT_04cb13a8;
  puVar5 = PTR_DAT_04cb13a0;
  puVar2 = PTR_DAT_04cac018;
  if ((bRam0000000004f9bfd0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04cb3c98);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04cb13a8);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04cb13a0);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb07f8);
    FUN_02132f7c(PTR_DAT_04cad280);
    bRam0000000004f9bfd0 = 1;
  }
  puVar4 = PTR_DAT_04cb07f8;
  puVar3 = PTR_DAT_04cad280;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_ActivityRewardEntry____ctor_39e1448(lVar10,*(undefined8 *)puVar6);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar4,param_1,0);
  uVar11 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar11,*(undefined8 *)puVar3,0);
  lVar12 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar11,0);
  puVar3 = PTR_DAT_04cb3c98;
  puVar6 = PTR_DAT_04cb20b0;
  puVar5 = PTR_DAT_04cb20a8;
  puVar2 = PTR_DAT_04cb15c0;
  if (lVar12 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,lVar12,*(undefined8 *)PTR_DAT_04cb20c0);
    uStack_80 = CONCAT44(uStack_64,uStack_68);
    uStack_88 = uStack_70;
LAB_02351e1c:
    uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                       (&uStack_90,*(undefined8 *)puVar6);
    if ((uVar13 & 1) != 0) {
      lVar12 = Dino_BusSand_App_MiniJson__Arr_2156264(uStack_80,0);
      if ((lVar12 != 0) && (1 < *(int *)(lVar12 + 0x18))) {
        uVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar12,0,*(undefined8 *)puVar2);
        uVar8 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar11,0,0);
        uVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar12,1,*(undefined8 *)puVar2);
        uVar11 = Dino_BusSand_App_MiniJson__Long_2156378(uVar11,0,0);
        if (*(int *)(lVar12 + 0x18) < 3) {
          bVar7 = false;
        }
        else {
          uVar14 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar12,2,*(undefined8 *)puVar2);
          iVar9 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
          bVar7 = iVar9 != 0;
        }
        if (lVar10 != 0) {
          lVar12 = *(long *)(lVar10 + 0x10);
          lVar15 = *(long *)puVar3;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              lVar12 = lVar12 + (long)(int)uVar1 * 0x18;
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              *(bool *)(lVar12 + 0x30) = bVar7;
              *(undefined4 *)(lVar12 + 0x20) = uVar8;
              *(undefined4 *)(lVar12 + 0x24) = 0;
              *(undefined8 *)(lVar12 + 0x28) = uVar11;
              *(undefined4 *)(lVar12 + 0x31) = 0;
              *(undefined4 *)(lVar12 + 0x34) = 0;
            }
            else {
              uStack_64 = 0;
              uStack_74 = 0;
              uStack_68 = (uint)bVar7;
              uStack_78 = uVar8;
              uStack_70 = uVar11;
              System_Collections_Generic_List_ActivityRewardEntry___AddWithResize_39e1d50
                        (lVar10,&uStack_78,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_02351e1c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_02351e1c;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_90,*(undefined8 *)puVar5);
  }
  return lVar10;
}

