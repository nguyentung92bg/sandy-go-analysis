/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$PickByWeight
Dino_BusSand_App_Meta_RacingRobotGroupConfig_o* Dino_BusSand_App_Meta_RacingRobotLineup__PickByWeight (System_Collections_Generic_List_RacingRobotGroupConfig__o* groups, System_Random_o* rng, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$PickByWeight
   Dino_BusSand_App_Meta_RacingRobotGroupConfig_o*
   Dino_BusSand_App_Meta_RacingRobotLineup__PickByWeight
   (System_Collections_Generic_List_RacingRobotGroupConfig__o* groups, System_Random_o* rng, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_RacingRobotLineup__PickByWeight_2264af4(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  
  if ((bRam0000000004f9c053 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4428);
    FUN_02132f7c(PTR_DAT_04cb4430);
    FUN_02132f7c(PTR_DAT_04cb4438);
    FUN_02132f7c(PTR_DAT_04cb4440);
    FUN_02132f7c(PTR_DAT_04cb4450);
    FUN_02132f7c(PTR_DAT_04cb45e8);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c053 = 1;
  }
  puVar5 = PTR_DAT_04cb4440;
  puVar4 = PTR_DAT_04cb4430;
  puVar3 = PTR_DAT_04cb4428;
  puVar2 = PTR_DAT_04caa200;
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  if (param_1 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_88,param_1,*(undefined8 *)PTR_DAT_04cb4440);
    iVar11 = 0;
    lStack_60 = lStack_78;
    puStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
    while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_70,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar1 = *(undefined4 *)(lStack_60 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar6 = System_Math__Max_4830fc8(0,uVar1,0);
      iVar11 = iVar6 + iVar11;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_70,*(undefined8 *)puVar3);
    if (iVar11 < 1) {
      iVar11 = 0;
      uVar10 = *(undefined8 *)PTR_DAT_04cb45e8;
LAB_02364d0c:
      lVar9 = System_Collections_Generic_List_object___get_Item_3a81924(param_1,iVar11,uVar10);
    }
    else {
      if (param_2 == (long *)0x0) goto LAB_02364d3c;
      iVar6 = (**(code **)(*param_2 + 0x198))(param_2,0,iVar11,*(undefined8 *)(*param_2 + 0x1a0));
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_88,param_1,*(undefined8 *)puVar5);
      iVar11 = 0;
      lStack_60 = lStack_78;
      puStack_68 = puStack_80;
      uStack_70 = uStack_88;
      uStack_88 = 0;
      puStack_80 = &uStack_70;
      do {
        uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_70,*(undefined8 *)puVar4);
        lVar9 = lStack_60;
        if ((uVar8 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_70,*(undefined8 *)puVar3);
          uVar10 = *(undefined8 *)PTR_DAT_04cb45e8;
          iVar11 = *(int *)(param_1 + 0x18) + -1;
          goto LAB_02364d0c;
        }
        if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar1 = *(undefined4 *)(lStack_60 + 0x28);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar7 = System_Math__Max_4830fc8(0,uVar1,0);
        iVar11 = iVar7 + iVar11;
      } while (iVar11 <= iVar6);
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_70,*(undefined8 *)puVar3);
    }
    return lVar9;
  }
LAB_02364d3c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

