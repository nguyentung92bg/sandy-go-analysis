/* IL2CPP: Dino.BusSand.Core.SimBot$$BoxingIn
System_Collections_Generic_HashSet_int__o* Dino_BusSand_Core_SimBot__BoxingIn (Dino_BusSand_Core_StageEngine_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0251c860) */
/* WARNING: Removing unreachable block (ram,0x0251c934) */
/* WARNING: Removing unreachable block (ram,0x0251c980) */
/* IL2CPP: Dino.BusSand.Core.SimBot$$BoxingIn
   System_Collections_Generic_HashSet_int__o* Dino_BusSand_Core_SimBot__BoxingIn
   (Dino_BusSand_Core_StageEngine_o* e, const MethodInfo* method); */

long Dino_BusSand_Core_SimBot__BoxingIn_241c5ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  
  puVar2 = PTR_DAT_04cae208;
  puVar1 = PTR_DAT_04cae200;
  if ((bRam0000000004f9cb89 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04cae218);
    FUN_02132f7c(PTR_DAT_04cae208);
    FUN_02132f7c(PTR_DAT_04cae200);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    bRam0000000004f9cb89 = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_HashSet_int____ctor_37daeb0(lVar8,*(undefined8 *)puVar2);
  puVar7 = PTR_DAT_04cae218;
  puVar6 = PTR_DAT_04cad8c8;
  puVar5 = PTR_DAT_04cad8a0;
  puVar4 = PTR_DAT_04cad890;
  puVar3 = PTR_DAT_04cab9f8;
  puVar2 = PTR_DAT_04cab9e8;
  puVar1 = PTR_DAT_04cab9e0;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x28) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uStack_88 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0();
  Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
            (&uStack_d8,&uStack_88,*(undefined8 *)puVar3);
  uStack_70 = uStack_c8;
  puStack_78 = puStack_d0;
  uStack_80 = uStack_d8;
  while( true ) {
    do {
      uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_80,*(undefined8 *)puVar2);
      if ((uVar9 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)puVar1);
        return lVar8;
      }
      if (uStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while (*(char *)(uStack_70 + 0x44) == '\0');
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar10 = Dino_BusSand_Core_TruckGrid__BlockersOf_241cd5c(*(long *)(param_1 + 0x28),uStack_70,0);
    if (lVar10 == 0) break;
    System_Collections_Generic_List_int___GetEnumerator_3a2ca40
              (&uStack_d8,lVar10,*(undefined8 *)puVar5);
    puStack_98 = puStack_d0;
    uStack_a0 = uStack_d8;
    uStack_90 = uStack_c8;
    while (uVar11 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                              (&uStack_a0,*(undefined8 *)puVar4), uVar9 = uStack_90,
          (uVar11 & 1) != 0) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_HashSet_int___Add_37dc0f0
                (lVar8,uStack_90 & 0xffffffff,*(undefined8 *)puVar7);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar9 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c
                        (*(long *)(param_1 + 0x28),uVar9 & 0xffffffff,&uStack_a8);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar10 = Dino_BusSand_Core_TruckGrid__BlockersOf_241cd5c
                           (*(long *)(param_1 + 0x28),uStack_a8,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                  (&uStack_d8,lVar10,*(undefined8 *)puVar5);
        uStack_c0 = uStack_d8;
        uStack_d8 = 0;
        puStack_b8 = puStack_d0;
        uStack_b0 = uStack_c8;
        puStack_d0 = &uStack_c0;
        while (uVar9 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                                 (&uStack_c0,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          System_Collections_Generic_HashSet_int___Add_37dc0f0
                    (lVar8,uStack_b0 & 0xffffffff,*(undefined8 *)puVar7);
        }
        System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                  (&uStack_c0,*(undefined8 *)puVar6);
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
              (&uStack_a0,*(undefined8 *)puVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

