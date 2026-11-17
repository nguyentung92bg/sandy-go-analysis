/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$UseItem
int32_t Dino_BusSand_App_Gameplay_GameplayController__UseItem (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t id, System_String_o** reasonKey, bool guided, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$UseItem
   int32_t Dino_BusSand_App_Gameplay_GameplayController__UseItem
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t id, System_String_o** reasonKey,
   bool guided, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Gameplay_GameplayController__UseItem_229ebbc
          (long param_1,undefined4 param_2,undefined8 *param_3,ulong param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_04cb5880;
  if ((bRam0000000004f9c246 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04caede0);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04cb18a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb5888);
    FUN_02132f7c(PTR_DAT_04cb5890);
    FUN_02132f7c(PTR_DAT_04cb5880);
    FUN_02132f7c(PTR_DAT_04cb5898);
    FUN_02132f7c(PTR_DAT_04cb58a0);
    FUN_02132f7c(PTR_DAT_04cb58a8);
    FUN_02132f7c(PTR_DAT_04cb58b0);
    FUN_02132f7c(PTR_DAT_04cb58b8);
    bRam0000000004f9c246 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  uStack_88 = 0;
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  uVar6 = System_Object___ctor_4870e5c(lVar5,0);
  if (lVar5 == 0) goto LAB_0239f218;
  *(long *)(lVar5 + 0x10) = param_1;
  thunk_FUN_02134474((long *)(lVar5 + 0x10),param_1);
  *(undefined4 *)(lVar5 + 0x18) = param_2;
  *param_3 = 0;
  thunk_FUN_02134474(param_3,0);
  lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if (lVar7 == 0) {
    return 2;
  }
  if (*(int *)(param_1 + 0x20) != 2) {
    return 2;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar8 & 1) != 0) {
    uVar6 = 0;
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0239f218;
    uVar8 = Dino_BusSand_View_GameView__get_BoosterBusy_23a92f0(*(long *)(param_1 + 0x38),0);
    if ((uVar8 & 1) != 0) {
      return 2;
    }
  }
  iVar4 = *(int *)(lVar5 + 0x18);
  uVar6 = 2;
  if (iVar4 < 0x2714) {
    if (iVar4 != 0x2712) {
      if (iVar4 != 0x2713) {
        return 2;
      }
      uVar6 = 0;
      if (*(long *)(lVar7 + 0x28) != 0) {
        uStack_60 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(lVar7 + 0x28),0);
        Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                  (&uStack_58,&uStack_60,*(undefined8 *)PTR_DAT_04cab9f8);
        puVar3 = PTR_DAT_04cab9e8;
        uStack_a0 = 0;
        puStack_98 = &uStack_58;
        do {
          uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_58,*(undefined8 *)puVar3);
          if ((uVar8 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_58,*(undefined8 *)PTR_DAT_04cab9e0);
            puVar11 = (undefined8 *)PTR_DAT_04cb58a0;
            goto LAB_0239f12c;
          }
          uVar8 = Dino_BusSand_Core_StageEngine__IsMechanicVehicle_2429114(lVar7,uStack_48,0);
        } while ((uVar8 & 1) != 0);
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_58,*(undefined8 *)PTR_DAT_04cab9e0);
        uVar6 = 0;
        if (*(long *)(lVar7 + 0x20) != 0) {
          uVar8 = Dino_BusSand_Core_Road__get_IsFull_24121b8(*(long *)(lVar7 + 0x20),0);
          puVar11 = (undefined8 *)PTR_DAT_04cb5898;
          if ((uVar8 & 1) != 0) goto LAB_0239f12c;
          uVar1 = *(undefined4 *)(lVar5 + 0x18);
          lVar9 = *(long *)PTR_DAT_04caba90;
          *(undefined4 *)(param_1 + 0x60) = uVar1;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_JourneyTracking__Boost_221c4bc(lVar7,uVar1,1,0xffffffffffffffff,0);
          lVar7 = *(long *)(param_1 + 0x38);
          uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caede0);
          uVar6 = System_Func_int__bool____ctor_37a2278
                            (uVar10,lVar5,*(undefined8 *)PTR_DAT_04cb5888,0);
          if (lVar7 != 0) {
            puVar11 = (undefined8 *)(lVar7 + 0x88);
            *puVar11 = uVar10;
            goto LAB_0239f1d4;
          }
        }
      }
      goto LAB_0239f218;
    }
    uVar8 = Dino_BusSand_Core_StageEngine__get_CanShuffle_2429a28(lVar7,0);
    puVar11 = (undefined8 *)PTR_DAT_04cb58b8;
    if ((uVar8 & 1) == 0) goto LAB_0239f12c;
    Dino_BusSand_App_Gameplay_GameplayController__CaptureItemState_229b468(param_1,0xffffffff,0);
    lVar9 = *(long *)(lVar7 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04cac868 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (((lVar9 == 0) || ((param_4 & 1) == 0)) || (iVar4 = *(int *)(lVar9 + 0x60), iVar4 == 0)) {
      iVar4 = UnityEngine_Random__Range_43b64e8(0x80000000,0x7fffffff,0);
    }
    uVar1 = *(undefined4 *)(lVar5 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_JourneyTracking__Boost_221c4bc(lVar7,uVar1,0,(long)iVar4,0);
    lVar5 = *(long *)(param_1 + 0x38);
    uVar6 = Dino_BusSand_Core_StageEngine__ShuffleTruckColors_2429a40(lVar7,iVar4,0);
  }
  else {
    if (iVar4 == 0x2714) {
      uVar6 = 0;
      if (*(long *)(lVar7 + 0x20) != 0) {
        uStack_88 = Dino_BusSand_Core_Road__get_Buses_2411e9c(*(long *)(lVar7 + 0x20),0);
        Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                  (&uStack_a0,&uStack_88,*(undefined8 *)PTR_DAT_04cb18a8);
        puVar3 = PTR_DAT_04cb1898;
        bVar2 = false;
        puStack_78 = puStack_98;
        uStack_80 = uStack_a0;
        lStack_70 = lStack_90;
        uStack_a0 = 0;
        puStack_98 = &uStack_80;
        while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                 (&uStack_80,*(undefined8 *)puVar3), lVar9 = lStack_70,
              (uVar8 & 1) != 0) {
          if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(int *)(lStack_70 + 0x28) == 1) &&
             (uVar8 = Dino_BusSand_Core_RoadBus__get_IsComplete_2411838(lStack_70,0),
             (uVar8 & 1) == 0)) {
            bVar2 = (bool)(*(int *)(lVar9 + 0x5c) < 1 | bVar2);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)PTR_DAT_04cb1890);
        puVar11 = (undefined8 *)PTR_DAT_04cb58a8;
        if (!bVar2) goto LAB_0239f12c;
        uVar1 = *(undefined4 *)(lVar5 + 0x18);
        lVar9 = *(long *)PTR_DAT_04caba90;
        *(undefined4 *)(param_1 + 0x60) = uVar1;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_JourneyTracking__Boost_221c4bc(lVar7,uVar1,1,0xffffffffffffffff,0);
        lVar7 = *(long *)(param_1 + 0x38);
        uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caede0);
        uVar6 = System_Func_int__bool____ctor_37a2278
                          (uVar10,lVar5,*(undefined8 *)PTR_DAT_04cb5890,0);
        if (lVar7 != 0) {
          puVar11 = (undefined8 *)(lVar7 + 0x90);
          *puVar11 = uVar10;
LAB_0239f1d4:
          thunk_FUN_02134474(puVar11,uVar10);
          if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar5 = FUN_022c78f0(0);
          if (lVar5 != 0) {
            Dino_BusSand_GameAudio__BoosterArmed_2383e24(lVar5,0);
          }
          return 1;
        }
      }
      goto LAB_0239f218;
    }
    if (iVar4 != 0x2715) {
      return 2;
    }
    if (*(long *)(lVar7 + 0x20) == 0) goto LAB_0239f218;
    puVar11 = (undefined8 *)PTR_DAT_04cb58b0;
    if (7 < *(int *)(*(long *)(lVar7 + 0x20) + 0x38)) {
LAB_0239f12c:
      *param_3 = *puVar11;
      thunk_FUN_02134474(param_3);
      Dino_BusSand_App_Gameplay_GameplayController__NotPossible_229f2d8
                (param_1,*(undefined4 *)(lVar5 + 0x18));
      return 2;
    }
    Dino_BusSand_App_Gameplay_GameplayController__CaptureItemState_229b468(param_1,0xffffffff,0);
    uVar1 = *(undefined4 *)(lVar5 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_JourneyTracking__Boost_221c4bc(lVar7,uVar1,0,0xffffffffffffffff,0);
    lVar5 = *(long *)(param_1 + 0x38);
    uVar6 = Dino_BusSand_Core_StageEngine__ExpandRoadCapacity_2429170(lVar7,0);
  }
  if (lVar5 != 0) {
    Dino_BusSand_View_GameView__Handle_23a1cb8(lVar5,uVar6,0);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    return 0;
  }
LAB_0239f218:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(uVar6);
}

