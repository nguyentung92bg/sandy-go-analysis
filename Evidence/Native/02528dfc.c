/* IL2CPP: Dino.BusSand.Core.StageEngine$$PickupTruck
System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__PickupTruck (Dino_BusSand_Core_StageEngine_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$PickupTruck
   System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__PickupTruck
   (Dino_BusSand_Core_StageEngine_o* __this, int32_t id, const MethodInfo* method); */

undefined8 Dino_BusSand_Core_StageEngine__PickupTruck_2428dfc(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  long lStack_28;
  
  if ((bRam0000000004f9cbaf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbea60);
    FUN_02132f7c(PTR_DAT_04cbc4c0);
    FUN_02132f7c(PTR_DAT_04cb1880);
    bRam0000000004f9cbaf = 1;
  }
  lVar6 = *(long *)(param_1 + 0x98);
  lStack_28 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (lVar6 == 0) goto LAB_025290b4;
  iVar3 = *(int *)(lVar6 + 0x18);
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  if (0 < iVar3) {
    System_Array__Clear_4851dc8(*(undefined8 *)(lVar6 + 0x10),0,iVar3,0);
  }
  if (*(char *)(param_1 + 0x80) == '\0') {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_025290b4;
    uVar4 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c
                      (*(long *)(param_1 + 0x28),param_2,&lStack_28);
    if ((uVar4 & 1) == 0) goto LAB_0252909c;
    uVar4 = Dino_BusSand_Core_StageEngine__IsMechanicVehicle_2429114(param_1,lStack_28);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_025290b4;
      lVar6 = Dino_BusSand_Core_TruckGrid__ChainOf_241c9f8(*(long *)(param_1 + 0x28),lStack_28);
      if (((*(long *)(param_1 + 0x20) == 0) ||
          (iVar3 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(param_1 + 0x20),0),
          lVar6 == 0)) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_025290b4;
      if (*(int *)(lVar6 + 0x18) + iVar3 <= *(int *)(*(long *)(param_1 + 0x20) + 0x38)) {
        if (lStack_28 != 0) {
          if (*(char *)(lStack_28 + 0x44) == '\0') {
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_68,lVar6,*(undefined8 *)PTR_DAT_04cbc4c0);
            puVar2 = PTR_DAT_04cab9e8;
            uStack_50 = 0;
            puStack_48 = &uStack_68;
            while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                     (&uStack_68,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
              Dino_BusSand_Core_StageEngine__CommitExit_2427e1c
                        (param_1,uStack_58,1,*(undefined8 *)(param_1 + 0x98));
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_68,*(undefined8 *)PTR_DAT_04cab9e0);
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_025290b4;
            Dino_BusSand_Core_TruckGrid__ApplyExit_24281d8
                      (*(long *)(param_1 + 0x28),lVar6,*(undefined8 *)(param_1 + 0x98));
            Dino_BusSand_Core_StageEngine__SyncStations_2428bbc
                      (param_1,*(undefined8 *)(param_1 + 0x98));
          }
          else {
            Dino_BusSand_Core_StageEngine__SaveFireTruck_2427bf8
                      (param_1,lStack_28,*(undefined8 *)(param_1 + 0x98));
          }
          Dino_BusSand_Core_StageEngine__AfterInput_2428d10(param_1,*(undefined8 *)(param_1 + 0x98))
          ;
          goto LAB_0252909c;
        }
        goto LAB_025290b4;
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0x23;
    }
    uStack_70 = 0;
    uStack_80 = CONCAT44(param_2,uVar5);
    lVar6 = *(long *)(param_1 + 0x98);
    thunk_FUN_02134474(&uStack_70,0);
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *(long *)PTR_DAT_04cb58d0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar1 * 0x18;
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + 0x30) = uStack_70;
          *(undefined8 *)(lVar7 + 0x28) = 0;
          *(undefined8 *)(lVar7 + 0x20) = uStack_80;
          thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30),0);
        }
        else {
          puStack_48 = (undefined8 *)0x0;
          uStack_50 = uStack_80;
          uStack_40 = uStack_70;
          System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                    (lVar6,&uStack_50,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_0252909c;
      }
    }
LAB_025290b4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_0252909c:
  return *(undefined8 *)(param_1 + 0x98);
}

