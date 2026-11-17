/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$GetRankings
System_Collections_Generic_List_RacingRanking__o* Dino_BusSand_App_Meta_RacingRobotSession__GetRankings (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$GetRankings
   System_Collections_Generic_List_RacingRanking__o*
   Dino_BusSand_App_Meta_RacingRobotSession__GetRankings
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_RacingRobotSession__GetRankings_2263304(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined4 uStack_70;
  
  puVar6 = PTR_DAT_04cb4518;
  puVar4 = PTR_DAT_04cb4510;
  puVar5 = PTR_DAT_04cb4508;
  if ((bRam0000000004f9c03f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4520);
    FUN_02132f7c(PTR_DAT_04cb4528);
    FUN_02132f7c(PTR_DAT_04cb4530);
    FUN_02132f7c(PTR_DAT_04cb4538);
    FUN_02132f7c(PTR_DAT_04cb4540);
    FUN_02132f7c(PTR_DAT_04cb4548);
    FUN_02132f7c(PTR_DAT_04cb4550);
    FUN_02132f7c(PTR_DAT_04cb4558);
    FUN_02132f7c(PTR_DAT_04cb4560);
    FUN_02132f7c(PTR_DAT_04cb4510);
    FUN_02132f7c(PTR_DAT_04cb4458);
    FUN_02132f7c(PTR_DAT_04cb4568);
    FUN_02132f7c(PTR_DAT_04cb4488);
    FUN_02132f7c(PTR_DAT_04cb4570);
    FUN_02132f7c(PTR_DAT_04cb4508);
    FUN_02132f7c(PTR_DAT_04cb4578);
    FUN_02132f7c(PTR_DAT_04cb4580);
    FUN_02132f7c(PTR_DAT_04cb4518);
    bRam0000000004f9c03f = 1;
  }
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  Dino_BusSand_App_Meta_RacingRobotSession__Tick_22611fc(param_1);
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_ValueTuple_RacingRanking__float__int_____ctor_39d0d14
            (lVar10,*(undefined8 *)puVar4);
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  System_ValueTuple_RacingRanking__float__int____ctor_310bdb8
            (*(undefined4 *)(param_1 + 100),&uStack_c8,(ulong)*(uint *)(param_1 + 0x50) << 0x20,1,0,
             *(undefined8 *)puVar6);
  puVar5 = PTR_DAT_04cb4540;
  if (lVar10 != 0) {
    lVar13 = *(long *)(lVar10 + 0x10);
    lVar15 = *(long *)PTR_DAT_04cb4540;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar13 != 0) {
      uVar3 = *(uint *)(lVar10 + 0x18);
      if (uVar3 < *(uint *)(lVar13 + 0x18)) {
        lVar13 = lVar13 + (long)(int)uVar3 * 0x14;
        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
        *(undefined4 *)(lVar13 + 0x30) = uStack_b8;
        *(undefined8 *)(lVar13 + 0x28) = uStack_c0;
        *(undefined8 *)(lVar13 + 0x20) = uStack_c8;
      }
      else {
        puStack_78 = (undefined8 *)uStack_c0;
        uStack_80 = uStack_c8;
        uStack_70 = uStack_b8;
        System_Collections_Generic_List_ValueTuple_RacingRanking__float__int____AddWithResize_39d161c
                  (lVar10,&uStack_80,
                   *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      puVar8 = PTR_DAT_04cb4548;
      puVar7 = PTR_DAT_04cb4530;
      puVar4 = PTR_DAT_04cb4488;
      lVar13 = *(long *)(param_1 + 0x28);
      if (lVar13 != 0) {
        iVar16 = 0;
        while( true ) {
          puVar9 = PTR_DAT_04cb4580;
          if (*(int *)(lVar13 + 0x18) <= iVar16) {
            lVar13 = *(long *)PTR_DAT_04cb4580;
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar13 = *(long *)puVar9;
            }
            puVar14 = *(undefined8 **)(lVar13 + 0xb8);
            lVar15 = puVar14[1];
            if (lVar15 == 0) {
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                puVar14 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
              }
              uVar17 = *puVar14;
              lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4520);
              System_Comparison_ValueTuple_RacingRanking__float__int_____ctor_3324120
                        (lVar15,uVar17,*(undefined8 *)PTR_DAT_04cb4578,0);
              plVar11 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
              *plVar11 = lVar15;
              thunk_FUN_02134474(plVar11,lVar15);
            }
            System_Collections_Generic_List_ValueTuple_RacingRanking__float__int____Sort_39d3344
                      (lVar10,lVar15,*(undefined8 *)PTR_DAT_04cb4558);
            uVar1 = *(undefined4 *)(lVar10 + 0x18);
            lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4570);
            System_Collections_Generic_List_RacingRanking____ctor_3a9a110
                      (lVar13,uVar1,*(undefined8 *)PTR_DAT_04cb4560);
            System_Collections_Generic_List_ValueTuple_RacingRanking__float__int____GetEnumerator_39d21b8
                      (&uStack_b0,lVar10,*(undefined8 *)PTR_DAT_04cb4550);
            uStack_80 = 0;
            puStack_78 = &uStack_b0;
            goto LAB_02363710;
          }
          lVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar13,iVar16,*(undefined8 *)puVar4);
          if (((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) || (*(long *)(param_1 + 0x28) == 0)
             ) break;
          uVar1 = *(undefined4 *)(*(long *)(lVar13 + 0x10) + 0x10);
          lVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                             (*(long *)(param_1 + 0x28),iVar16,*(undefined8 *)puVar4);
          if ((lVar13 == 0) || (*(long *)(param_1 + 0x28) == 0)) break;
          uVar2 = *(undefined4 *)(lVar13 + 0x9c);
          lVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                             (*(long *)(param_1 + 0x28),iVar16,*(undefined8 *)puVar4);
          if (lVar13 == 0) break;
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          System_ValueTuple_RacingRanking__float__int____ctor_310bdb8
                    (*(undefined4 *)(lVar13 + 0xac),&uStack_c8,CONCAT44(uVar2,uVar1),0,iVar16 + 1,
                     *(undefined8 *)puVar6);
          lVar13 = *(long *)(lVar10 + 0x10);
          lVar15 = *(long *)puVar5;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar13 == 0) break;
          uVar3 = *(uint *)(lVar10 + 0x18);
          if (uVar3 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar3 * 0x14;
            *(uint *)(lVar10 + 0x18) = uVar3 + 1;
            *(undefined4 *)(lVar13 + 0x30) = uStack_b8;
            *(undefined8 *)(lVar13 + 0x28) = uStack_c0;
            *(undefined8 *)(lVar13 + 0x20) = uStack_c8;
          }
          else {
            puStack_78 = (undefined8 *)uStack_c0;
            uStack_80 = uStack_c8;
            uStack_70 = uStack_b8;
            System_Collections_Generic_List_ValueTuple_RacingRanking__float__int____AddWithResize_39d161c
                      (lVar10,&uStack_80,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          lVar13 = *(long *)(param_1 + 0x28);
          iVar16 = iVar16 + 1;
          if (lVar13 == 0) break;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
LAB_02363710:
  uVar12 = System_Collections_Generic_List_Enumerator_ValueTuple_RacingRanking__float__int____MoveNext_35bdbcc
                     (&uStack_b0,*(undefined8 *)puVar7);
  if ((uVar12 & 1) == 0) {
    System_Collections_Generic_List_Enumerator_ValueTuple_RacingRanking__float__int____Dispose_35bdbc8
              (&uStack_b0,*(undefined8 *)PTR_DAT_04cb4528);
    return lVar13;
  }
  if (lVar13 == 0) {
LAB_023637bc:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar10 = *(long *)(lVar13 + 0x10);
  lVar15 = *(long *)puVar8;
  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_023637bc;
  uVar3 = *(uint *)(lVar13 + 0x18);
  if (uVar3 < *(uint *)(lVar10 + 0x18)) {
    lVar10 = lVar10 + (long)(int)uVar3 * 0xc;
    *(uint *)(lVar13 + 0x18) = uVar3 + 1;
    *(undefined8 *)(lVar10 + 0x20) = uStack_a0;
    *(undefined4 *)(lVar10 + 0x28) = (undefined4)uStack_98;
  }
  else {
    System_Collections_Generic_List_RacingRanking___AddWithResize_3a9a954
              (lVar13,uStack_a0,uStack_98 & 0xffffffff,
               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
  }
  goto LAB_02363710;
}

