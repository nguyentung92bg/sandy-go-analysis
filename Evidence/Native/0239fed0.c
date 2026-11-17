/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController.<>c__DisplayClass123_0$$<UseItem>b__0
bool Dino_BusSand_App_Gameplay_GameplayController___c__DisplayClass123_0___UseItem_b__0 (Dino_BusSand_App_Gameplay_GameplayController___c__DisplayClass123_0_o* __this, int32_t truck, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController.<>c__DisplayClass123_0$$<UseItem>b__0
   bool Dino_BusSand_App_Gameplay_GameplayController___c__DisplayClass123_0___UseItem_b__0
   (Dino_BusSand_App_Gameplay_GameplayController___c__DisplayClass123_0_o* __this, int32_t truck,
   const MethodInfo* method); */

undefined8
Dino_BusSand_App_Gameplay_GameplayController___c__DisplayClass123_0___UseItem_b__0_229fed0
          (long param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f9c256 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5648);
    FUN_02132f7c(PTR_DAT_04cb5650);
    FUN_02132f7c(PTR_DAT_04cb5658);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cb5660);
    bRam0000000004f9c256 = 1;
  }
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(),
      puVar2 = PTR_DAT_04caba90, lVar7 == 0)) || (*(long *)(lVar7 + 0x28) == 0)) goto LAB_023a01e4;
  uVar8 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c(*(long *)(lVar7 + 0x28),param_2,&lStack_48,0);
  if ((uVar8 & 1) != 0) {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(), lVar7 == 0))
    goto LAB_023a01e4;
    uVar8 = Dino_BusSand_Core_StageEngine__IsMechanicVehicle_2429114(lVar7,lStack_48,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar9 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248();
        uVar11 = *(undefined4 *)(param_1 + 0x18);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        Dino_BusSand_App_Meta_JourneyTracking__Boost_221c4bc(uVar9,uVar11,3,0xffffffffffffffff,0);
        if (*(long *)(param_1 + 0x10) != 0) {
          Dino_BusSand_App_Gameplay_GameplayController__BoosterRefused_229f360
                    (*(long *)(param_1 + 0x10),param_2);
          return 1;
        }
      }
      goto LAB_023a01e4;
    }
  }
  if (lStack_48 != 0) {
    if (((*(long *)(param_1 + 0x10) == 0) ||
        (lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(), lVar7 == 0)) ||
       (*(long *)(lVar7 + 0x20) == 0)) goto LAB_023a01e4;
    iVar6 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(lVar7 + 0x20),0);
    if (((*(long *)(param_1 + 0x10) == 0) ||
        (lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248
                           (*(long *)(param_1 + 0x10)), lVar7 == 0)) ||
       (*(long *)(lVar7 + 0x20) == 0)) goto LAB_023a01e4;
    if (*(int *)(*(long *)(lVar7 + 0x20) + 0x38) < iVar6 + 1) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_023a01e4;
      uVar9 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248();
      uVar11 = *(undefined4 *)(param_1 + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      Dino_BusSand_App_Meta_JourneyTracking__Boost_221c4bc(uVar9,uVar11,3,0xffffffffffffffff,0);
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_023a01e4;
      lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x90);
      goto joined_r0x023a01b4;
    }
  }
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (Dino_BusSand_App_Gameplay_GameplayController__CaptureItemState_229b468
                 (*(long *)(param_1 + 0x10),param_2,0), *(long *)(param_1 + 0x10) != 0)) &&
     ((lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(), lVar7 != 0 &&
      (lVar7 = Dino_BusSand_Core_StageEngine__PickupTruck_2428dfc(lVar7,param_2,0),
      puVar4 = PTR_DAT_04cb5650, puVar3 = PTR_DAT_04cb5648, lVar7 != 0)))) {
    System_Collections_Generic_List_SimEvent___GetEnumerator_3ac0844
              (&uStack_70,lVar7,*(undefined8 *)PTR_DAT_04cb5660);
    do {
      bVar5 = System_Collections_Generic_List_Enumerator_SimEvent___MoveNext_35e048c
                        (&uStack_70,*(undefined8 *)puVar4);
    } while ((bVar5 & (int)uStack_60 != 2) != 0);
    System_Collections_Generic_List_Enumerator_SimEvent___Dispose_35e0488
              (&uStack_70,*(undefined8 *)puVar3);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar9 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248();
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar11 = 0;
      if ((bVar5 & 1) == 0) {
        uVar11 = 3;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_JourneyTracking__Boost_221c4bc(uVar9,uVar1,uVar11,(long)param_2,0);
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x38), lVar10 != 0)) {
        Dino_BusSand_View_GameView__Handle_23a1cb8(lVar10,lVar7,0);
        lVar7 = *(long *)(param_1 + 0x10);
        if ((bVar5 & 1) == 0) {
          if (lVar7 != 0) {
            lVar7 = *(long *)(lVar7 + 0x90);
joined_r0x023a01b4:
            if (lVar7 != 0) {
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
            }
            return 1;
          }
        }
        else if (lVar7 != 0) {
          Dino_BusSand_App_Gameplay_GameplayController__Consumed_229f5dc
                    (lVar7,*(undefined4 *)(param_1 + 0x18));
          return 1;
        }
      }
    }
  }
LAB_023a01e4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

