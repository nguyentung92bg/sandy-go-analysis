/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$OnClaim
void Dino_BusSand_App_UI_ClimbTowerPanel__OnClaim (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, Dino_BusSand_App_UI_ClimbTowerItemView_o* view, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$OnClaim
   void Dino_BusSand_App_UI_ClimbTowerPanel__OnClaim (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this,
   Dino_BusSand_App_UI_ClimbTowerItemView_o* view, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerPanel__OnClaim_21a2c98(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9ba44 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae6e8);
    FUN_02132f7c(PTR_DAT_04cae8f8);
    FUN_02132f7c(PTR_DAT_04cae900);
    FUN_02132f7c(PTR_DAT_04cae908);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04cae918);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae7a8);
    FUN_02132f7c(PTR_DAT_04cae920);
    bRam0000000004f9ba44 = 1;
  }
  uStack_34 = 0;
  uStack_50 = 0;
  puStack_68 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    uVar7 = Dino_BusSand_App_Meta_ClimbTowerFeature__Claim_222c5f4
                      (*(long *)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x34),&uStack_34,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0xa0);
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar8 + 0x10);
      uVar2 = *(undefined4 *)(param_2 + 0x34);
      lVar10 = *(long *)PTR_DAT_04caa160;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar3 = *(uint *)(lVar8 + 0x18);
        if (uVar3 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = uVar2;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar8,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
          ;
        }
        lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
        System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
                  (lVar8,*(undefined8 *)PTR_DAT_04caca50);
        lVar9 = Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(uStack_34,0);
        if (lVar9 != 0) {
          System_Collections_Generic_List_ActivityRewardEntry___GetEnumerator_39e28ec
                    (&uStack_98,lVar9,*(undefined8 *)PTR_DAT_04cae918);
          puVar6 = PTR_DAT_04cae910;
          puVar5 = PTR_DAT_04cae900;
          puVar4 = PTR_DAT_04cae058;
          puStack_68 = puStack_90;
          uStack_70 = uStack_98;
          puStack_90 = &uStack_70;
          uStack_58 = uStack_80;
          uStack_60 = uStack_88;
          uStack_50 = uStack_78;
          uStack_98 = 0;
          while (uVar7 = System_Collections_Generic_List_Enumerator_ActivityRewardEntry___MoveNext_35bed20
                                   (&uStack_70,*(undefined8 *)puVar5), (uVar7 & 1) != 0) {
            uStack_a8 = 0;
            uStack_a0 = 0;
            uVar1 = uStack_58;
            if ((uStack_50 & 1) != 0) {
              uVar1 = 1;
            }
            System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                      (&uStack_a8,uStack_60 & 0xffffffff,uVar1,*(undefined8 *)puVar6);
            if (lVar8 == 0) {
LAB_022a300c:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar9 = *(long *)(lVar8 + 0x10);
            lVar10 = *(long *)puVar4;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_022a300c;
            uVar3 = *(uint *)(lVar8 + 0x18);
            if (uVar3 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar3 * 0x10;
              *(uint *)(lVar8 + 0x18) = uVar3 + 1;
              *(undefined8 *)(lVar9 + 0x20) = uStack_a8;
              *(undefined8 *)(lVar9 + 0x28) = uStack_a0;
            }
            else {
              System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                        (lVar8,uStack_a8,uStack_a0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
          }
          System_Collections_Generic_List_Enumerator_ActivityRewardEntry___Dispose_35bed1c
                    (&uStack_70,*(undefined8 *)PTR_DAT_04cae8f8);
          lVar9 = UnityEngine_Component__get_transform_43bcd18(param_2,0);
          if (lVar9 != 0) {
            lVar9 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cae7a8,0);
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
            }
            uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
            if ((uVar7 & 1) == 0) {
              lVar9 = UnityEngine_Component__get_transform_43bcd18(param_2,0);
            }
            if (lVar9 != 0) {
              UnityEngine_Transform__get_position_43d0e48(lVar9,0);
              Dino_BusSand_App_UI_CommerceRewardFly__Fly_22a8d24(lVar8,0,0,0);
              if (*(long *)(param_1 + 0x38) != 0) {
                uVar7 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsOldPeriodClaimDone_222a780
                                  (*(long *)(param_1 + 0x38),0);
                if ((uVar7 & 1) != 0) {
                  Dino_BusSand_App_UI_UIPanel__Show_21f4018
                            (param_1,*(undefined8 *)PTR_DAT_04cae920,1,0);
                }
                if (*(int *)(*(long *)PTR_DAT_04cae6e8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_UI_ClimbTowerHallButton__UpdateState_219f894();
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

