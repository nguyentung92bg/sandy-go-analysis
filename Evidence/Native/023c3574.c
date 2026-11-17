/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$Pairs
System_Collections_Generic_List_int____o* Dino_BusSand_App_UI_EndOfLevelRules__Pairs (System_Collections_Generic_Dictionary_string__object__o* row, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$Pairs
   System_Collections_Generic_List_int____o* Dino_BusSand_App_UI_EndOfLevelRules__Pairs
   (System_Collections_Generic_Dictionary_string__object__o* row, System_String_o* key, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_EndOfLevelRules__Pairs_22c3574(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar3 = PTR_DAT_04cb2ed8;
  puVar2 = PTR_DAT_04cb2ed0;
  if ((bRam0000000004f9c344 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb2ee0);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04cb2ed8);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04cb2ed0);
    bRam0000000004f9c344 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar8,*(undefined8 *)puVar3);
  uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(param_1,param_2,0);
  lVar10 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar9,0);
  puVar6 = PTR_DAT_04cb2ee0;
  puVar5 = PTR_DAT_04cb20b0;
  puVar4 = PTR_DAT_04cb20a8;
  puVar3 = PTR_DAT_04cb15c0;
  puVar2 = PTR_DAT_04caec70;
  if (lVar10 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_88,lVar10,*(undefined8 *)PTR_DAT_04cb20c0);
    uStack_60 = uStack_78;
    uStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
LAB_023c36bc:
    uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                       (&uStack_70,*(undefined8 *)puVar5);
    if ((uVar11 & 1) != 0) {
      lVar10 = Dino_BusSand_App_MiniJson__Arr_2156264(uStack_60,0);
      if ((lVar10 != 0) && (1 < *(int *)(lVar10 + 0x18))) {
        lVar12 = FUN_02133068(*(undefined8 *)puVar2,2);
        uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar10,0,*(undefined8 *)puVar3);
        uVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined4 *)(lVar12 + 0x20) = uVar7;
        uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar10,1,*(undefined8 *)puVar3);
        uVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
        if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined4 *)(lVar12 + 0x24) = uVar7;
        if (lVar8 != 0) {
          lVar10 = *(long *)(lVar8 + 0x10);
          lVar14 = *(long *)puVar6;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              plVar13 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              *plVar13 = lVar12;
              thunk_FUN_02134474(plVar13,lVar12);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar8,lVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_023c36bc;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_023c36bc;
    }
                    /* try { // try from 023c37bc to 024c3a53 has its CatchHandler @ 023c37bc
                       catch() { ... } // from try @ 023c37bc with catch @ 023c37bc
                       catch() { ... } // from try @ 023c45a0 with catch @ 023c37bc
                       catch() { ... } // from try @ 023c4c3c with catch @ 023c37bc
                       catch() { ... } // from try @ 023c4cd8 with catch @ 023c37bc
                       catch() { ... } // from try @ 023c4d00 with catch @ 023c37bc */
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_70,*(undefined8 *)puVar4);
  }
  return lVar8;
}

