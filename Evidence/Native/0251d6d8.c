/* IL2CPP: Dino.BusSand.Core.StageEngine$$TapTruck
System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__TapTruck (Dino_BusSand_Core_StageEngine_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$TapTruck
   System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__TapTruck
   (Dino_BusSand_Core_StageEngine_o* __this, int32_t id, const MethodInfo* method); */

undefined8 Dino_BusSand_Core_StageEngine__TapTruck_241d6d8(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 auStack_40 [2];
  long lStack_28;
  
  if ((bRam0000000004f9cbab & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbea60);
    FUN_02132f7c(PTR_DAT_04cbc4c0);
    FUN_02132f7c(PTR_DAT_04cb1880);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    bRam0000000004f9cbab = 1;
  }
  lVar6 = *(long *)(param_1 + 0x98);
  lStack_28 = 0;
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  if (lVar6 == 0) goto LAB_0251db5c;
  iVar4 = *(int *)(lVar6 + 0x18);
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  if (0 < iVar4) {
    System_Array__Clear_4851dc8(*(undefined8 *)(lVar6 + 0x10),0,iVar4,0);
  }
  if (*(char *)(param_1 + 0x80) == '\0') {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0251db5c;
    uVar5 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c
                      (*(long *)(param_1 + 0x28),param_2,&lStack_28);
    if ((uVar5 & 1) == 0) goto LAB_0251db44;
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0251db5c;
    lVar6 = Dino_BusSand_Core_TruckGrid__ChainOf_241c9f8(*(long *)(param_1 + 0x28),lStack_28);
    uVar3 = Dino_BusSand_Core_StageEngine__WaitingReason_242796c(lStack_28,lVar6);
    if (uVar3 == 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0251db5c;
      uVar5 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(*(long *)(param_1 + 0x28),lStack_28);
      if ((uVar5 & 1) != 0) {
        if (lStack_28 == 0) goto LAB_0251db5c;
        if (*(char *)(lStack_28 + 0x44) == '\0') {
          if (((*(long *)(param_1 + 0x20) == 0) ||
              (iVar4 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(param_1 + 0x20),0),
              lVar6 == 0)) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_0251db5c;
          if (*(int *)(*(long *)(param_1 + 0x20) + 0x38) < *(int *)(lVar6 + 0x18) + iVar4) {
            lVar6 = *(long *)(param_1 + 0x98);
            uStack_50 = CONCAT44(param_2,1);
            auStack_40[0] = 0;
            puStack_48 = (undefined8 *)0x0;
            thunk_FUN_02134474(auStack_40,0);
            if (lVar6 != 0) {
              puStack_98 = puStack_48;
              uStack_a0 = uStack_50;
              uStack_90 = auStack_40[0];
              FUN_01e7b760(lVar6,&uStack_a0,*(undefined8 *)PTR_DAT_04cb58d0);
              Dino_BusSand_Core_StageEngine__EvaluateTermination_2426550
                        (param_1,*(undefined8 *)(param_1 + 0x98));
              goto LAB_0251db44;
            }
            goto LAB_0251db5c;
          }
        }
        Dino_BusSand_Core_StageEngine__ExpireExits_24258e0(param_1,*(undefined8 *)(param_1 + 0x98));
        if (lStack_28 == 0) goto LAB_0251db5c;
        if (*(char *)(lStack_28 + 0x44) == '\0') {
          if (lVar6 == 0) goto LAB_0251db5c;
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_50,lVar6,*(undefined8 *)PTR_DAT_04cbc4c0);
          puVar1 = PTR_DAT_04cab9e8;
          puStack_68 = puStack_48;
          uStack_70 = uStack_50;
          uStack_60 = auStack_40[0];
          uStack_50 = 0;
          puStack_48 = &uStack_70;
          while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                   (&uStack_70,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
            Dino_BusSand_Core_StageEngine__CommitExit_2427e1c
                      (param_1,uStack_60,0,*(undefined8 *)(param_1 + 0x98));
          }
          FUN_01e77e4c(&uStack_50);
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_0251db5c;
          Dino_BusSand_Core_TruckGrid__ApplyExit_24281d8
                    (*(long *)(param_1 + 0x28),lVar6,*(undefined8 *)(param_1 + 0x98));
          Dino_BusSand_Core_StageEngine__SyncStations_2428bbc
                    (param_1,*(undefined8 *)(param_1 + 0x98));
        }
        else {
          Dino_BusSand_Core_StageEngine__SaveFireTruck_2427bf8
                    (param_1,lStack_28,*(undefined8 *)(param_1 + 0x98));
        }
        Dino_BusSand_Core_StageEngine__AfterInput_2428d10(param_1,*(undefined8 *)(param_1 + 0x98));
        goto LAB_0251db44;
      }
      Dino_BusSand_Core_StageEngine__ExpireExits_24258e0(param_1,*(undefined8 *)(param_1 + 0x98));
      if (lVar6 == 0) goto LAB_0251db5c;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_50,lVar6,*(undefined8 *)PTR_DAT_04cbc4c0);
      puVar1 = PTR_DAT_04cab9e8;
      puStack_68 = puStack_48;
      uStack_70 = uStack_50;
      uStack_60 = auStack_40[0];
      uStack_50 = 0;
      puStack_48 = &uStack_70;
      do {
        uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_70,*(undefined8 *)puVar1);
        uVar2 = uStack_60;
        if ((uVar5 & 1) == 0) goto LAB_0251d9a8;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar5 = Dino_BusSand_Core_TruckGrid__CanEscape_2427af4
                          (*(long *)(param_1 + 0x28),uStack_60,1);
      } while ((uVar5 & 1) != 0);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = Dino_BusSand_Core_TruckGrid__BlockersOf_241cd5c(*(long *)(param_1 + 0x28),uVar2,1);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lVar6 + 0x18) < 1) {
LAB_0251d9a8:
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = System_Collections_Generic_List_int___get_Item_3a2bd74
                          (lVar6,0,*(undefined8 *)PTR_DAT_04cae230);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_70,*(undefined8 *)PTR_DAT_04cab9e0);
      lVar6 = *(long *)(param_1 + 0x98);
      uStack_88._0_4_ = 0;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x98);
      uStack_88._0_4_ = 0x20;
    }
    uStack_80 = (ulong)uVar3;
    uStack_78 = 0;
    uStack_88 = CONCAT44(param_2,(undefined4)uStack_88);
    thunk_FUN_02134474(&uStack_78,0);
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *(long *)PTR_DAT_04cb58d0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar3 = *(uint *)(lVar6 + 0x18);
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar3 * 0x18;
          *(uint *)(lVar6 + 0x18) = uVar3 + 1;
          *(undefined8 *)(lVar7 + 0x30) = uStack_78;
          *(ulong *)(lVar7 + 0x28) = uStack_80;
          *(undefined8 *)(lVar7 + 0x20) = uStack_88;
          thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30),0);
        }
        else {
          puStack_48 = (undefined8 *)uStack_80;
          uStack_50 = uStack_88;
          auStack_40[0] = uStack_78;
          System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                    (lVar6,&uStack_50,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_0251db44;
      }
    }
LAB_0251db5c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_0251db44:
  return *(undefined8 *)(param_1 + 0x98);
}

