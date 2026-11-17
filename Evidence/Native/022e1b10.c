/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$FakeAddReward
void Dino_BusSand_App_UI_StreakRateHallBar__FakeAddReward (int32_t rewardId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$FakeAddReward
   void Dino_BusSand_App_UI_StreakRateHallBar__FakeAddReward (int32_t rewardId, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_StreakRateHallBar__FakeAddReward_21e1b10(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
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
  
  puVar2 = PTR_DAT_04cae9a8;
  if ((bRam0000000004f9bbb2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cae8f8);
    FUN_02132f7c(PTR_DAT_04cae900);
    FUN_02132f7c(PTR_DAT_04cae908);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04cae918);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04cb0b68);
    FUN_02132f7c(PTR_DAT_04cb0c90);
    FUN_02132f7c(PTR_DAT_04cb0b80);
    bRam0000000004f9bbb2 = 1;
  }
  lVar5 = *(long *)puVar2;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if (lVar5 != 0) {
    lVar5 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)PTR_DAT_04cb0b68,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if (lVar5 != 0) {
                    /* try { // try from 022e1c7c to 023e1c7f has its CatchHandler @ 022e1c80 */
                    /* catch() { ... } // from try @ 022e1a58 with catch @ 022e1c80
                       catch() { ... } // from try @ 022e1c7c with catch @ 022e1c80
                       try { // try from 022e1c80 to 023e1c93 has its CatchHandler @ 022e19e4 */
      uVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                        (lVar5,*(undefined8 *)PTR_DAT_04cada30);
      if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8);
      }
      Dino_BusSand_App_UI_CommerceUi__Play_22a8904(uVar7,*(undefined8 *)PTR_DAT_04cb0b80,0);
      if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cb0c90,0);
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
      System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
                (lVar8,*(undefined8 *)PTR_DAT_04caca50);
      lVar9 = Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(param_1,0);
      if (lVar9 != 0) {
        System_Collections_Generic_List_ActivityRewardEntry___GetEnumerator_39e28ec
                  (&uStack_70,lVar9,*(undefined8 *)PTR_DAT_04cae918);
        puVar4 = PTR_DAT_04cae910;
        puVar3 = PTR_DAT_04cae900;
        puVar2 = PTR_DAT_04cae058;
        uStack_80 = 0;
        puStack_78 = &uStack_70;
        while( true ) {
                    /* try { // try from 022e1d60 to 023e1de3 has its CatchHandler @ 022e1d60
                       catch(type#1 @ 00000000) { ... } // from try @ 022e1d60 with catch @ 022e1d60
                       catch(type#1 @ 00000000) { ... } // from try @ 022e1e08 with catch @ 022e1d60
                        */
          uVar6 = System_Collections_Generic_List_Enumerator_ActivityRewardEntry___MoveNext_35bed20
                            (&uStack_70,*(undefined8 *)puVar3);
          if ((uVar6 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_ActivityRewardEntry___Dispose_35bed1c
                      (&uStack_70,*(undefined8 *)PTR_DAT_04cae8f8);
                    /* try { // try from 022e1e00 to 023e1e07 has its CatchHandler @ 022e1e40 */
                    /* try { // try from 022e1e08 to 023e1e57 has its CatchHandler @ 022e1d60 */
            UnityEngine_Transform__get_position_43d0e48(lVar5,0);
            Dino_BusSand_App_UI_CommerceRewardFly__Fly_22a8d24(lVar8,0,0,0);
            return;
          }
          uStack_90 = 0;
          uStack_88 = 0;
          uVar7 = uStack_58;
          if ((uStack_50 & 1) != 0) {
            uVar7 = 1;
          }
          System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                    (&uStack_90,uStack_60 & 0xffffffff,uVar7,*(undefined8 *)puVar4);
          if (lVar8 == 0) break;
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar10 = *(long *)puVar2;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) break;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar9 + 0x20) = uStack_90;
            *(undefined8 *)(lVar9 + 0x28) = uStack_88;
          }
          else {
                    /* try { // try from 022e1de4 to 023e1df7 has its CatchHandler @ 022e1e44 */
            System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                      (lVar8,uStack_90,uStack_88,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
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

