/* IL2CPP: Dino.BusSand.App.UI.RaceView$$<Rows>b__7_1
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_RaceView___Rows_b__7_1 (Dino_BusSand_App_UI_RaceView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RaceView$$<Rows>b__7_1
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_UI_RaceView___Rows_b__7_1 (Dino_BusSand_App_UI_RaceView_o* __this, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_RaceView___Rows_b__7_1_21ba708(long param_1)

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
  long lVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar6 = Dino_BusSand_App_Meta_YachtRacingCore__OnClaimReward_2258b14(*(long *)(param_1 + 0x10),0);
  puVar3 = PTR_DAT_04caca60;
  puVar2 = PTR_DAT_04caca50;
  if (iVar6 < 1) {
    return 0;
  }
  if ((bRam0000000004f9bad1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae8f8);
    FUN_02132f7c(PTR_DAT_04cae900);
    FUN_02132f7c(PTR_DAT_04cae908);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04cae918);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9bad1 = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar7,*(undefined8 *)puVar2);
  lVar8 = Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(iVar6,0);
  puVar5 = PTR_DAT_04cae910;
  puVar4 = PTR_DAT_04cae900;
  puVar3 = PTR_DAT_04cae8f8;
  puVar2 = PTR_DAT_04cae058;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_ActivityRewardEntry___GetEnumerator_39e28ec
            (&uStack_70,lVar8,*(undefined8 *)PTR_DAT_04cae918);
  uStack_80 = 0;
  puStack_78 = &uStack_70;
  while( true ) {
    do {
      uVar9 = System_Collections_Generic_List_Enumerator_ActivityRewardEntry___MoveNext_35bed20
                        (&uStack_70,*(undefined8 *)puVar4);
      if ((uVar9 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_ActivityRewardEntry___Dispose_35bed1c
                  (&uStack_70,*(undefined8 *)puVar3);
        return lVar7;
      }
    } while ((uStack_50 & 1) != 0);
    uStack_90 = 0;
    uStack_88 = 0;
    System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
              (&uStack_90,uStack_60 & 0xffffffff,uStack_58,*(undefined8 *)puVar5);
    if (lVar7 == 0) break;
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)puVar2;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) break;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + 0x20) = uStack_90;
      *(undefined8 *)(lVar8 + 0x28) = uStack_88;
    }
    else {
      System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                (lVar7,uStack_90,uStack_88,
                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

