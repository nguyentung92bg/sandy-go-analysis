/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$RewardList
System_Collections_Generic_List_object__o* Dino_BusSand_App_Meta_EconomySettings__RewardList (Dino_BusSand_App_Meta_EconomySettings_Parsed_o* p, Il2CppObject* v, System_String_o* label, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$RewardList
   System_Collections_Generic_List_object__o* Dino_BusSand_App_Meta_EconomySettings__RewardList
   (Dino_BusSand_App_Meta_EconomySettings_Parsed_o* p, Il2CppObject* v, System_String_o* label,
   const MethodInfo* method); */

long Dino_BusSand_App_Meta_EconomySettings__RewardList_220aa78
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  double dStack_80;
  double dStack_78;
  long lStack_70;
  int iStack_64;
  
  if ((bRam0000000004f9bce0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04ca9ba0);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04cb2090);
    FUN_02132f7c(PTR_DAT_04cb20c8);
    bRam0000000004f9bce0 = 1;
  }
  iStack_64 = 0;
  lStack_70 = 0;
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b90);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar7,*(undefined8 *)PTR_DAT_04ca9b98);
  lVar8 = Dino_BusSand_App_MiniJson__Arr_2156264(param_2,0);
  puVar5 = PTR_DAT_04cb20c8;
  puVar4 = PTR_DAT_04cb2090;
  puVar3 = PTR_DAT_04cb15c0;
  puVar2 = PTR_DAT_04cab718;
  if ((lVar8 != 0) && (iStack_64 = 0, 0 < *(int *)(lVar8 + 0x18))) {
    do {
      uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar8,iStack_64,*(undefined8 *)puVar3);
      lVar10 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar9,0);
      if ((lVar10 == 0) || (*(int *)(lVar10 + 0x18) != 2)) {
LAB_0230ace8:
        if (param_1 == 0) {
LAB_0230ae9c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar10 = *(long *)(param_1 + 0x40);
        uVar9 = System_Int32__ToString_482d750(&iStack_64,0);
        lVar12 = System_String__Concat_46d30e8
                           (param_3,*(undefined8 *)puVar4,uVar9,*(undefined8 *)puVar5,0);
        if (lVar10 == 0) goto LAB_0230ae9c;
        lVar14 = *(long *)(lVar10 + 0x10);
        lVar15 = *(long *)puVar2;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0230ae9c;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          plVar13 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *plVar13 = lVar12;
          goto LAB_0230ad54;
        }
        lVar14 = *(long *)(lVar15 + 0x20);
LAB_0230ad64:
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar10,lVar12,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x70));
      }
      else {
        uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar10,0,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)PTR_DAT_04cb1d58 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb1d58);
        }
        iVar6 = Dino_BusSand_App_Meta_EconomySettings__ItemId_220aea0(uVar9);
        if (iVar6 == 0) goto LAB_0230ace8;
        uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar10,1,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)PTR_DAT_04cb1d58 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb1d58);
        }
        uVar11 = Dino_BusSand_App_Meta_EconomySettings__Whole_22087a0(uVar9,&lStack_70);
        lVar10 = lStack_70;
        if ((((uVar11 & 1) == 0) || (lStack_70 < 1)) || (100000 < lStack_70)) goto LAB_0230ace8;
        lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b90);
        System_Collections_Generic_List_object____ctor_3a8138c
                  (lVar12,*(undefined8 *)PTR_DAT_04ca9b98);
        dStack_78 = (double)iVar6;
        uVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x80),&dStack_78);
        if (lVar12 == 0) goto LAB_0230ae9c;
        lVar14 = *(long *)(lVar12 + 0x10);
        lVar15 = *(long *)PTR_DAT_04ca9ba0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0230ae9c;
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar12,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                    );
        }
        dStack_80 = (double)lVar10;
        uVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x80),&dStack_80);
        lVar10 = *(long *)(lVar12 + 0x10);
        lVar14 = *(long *)PTR_DAT_04ca9ba0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_0230ae9c;
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar12,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
        }
        if (lVar7 == 0) goto LAB_0230ae9c;
        lVar10 = *(long *)(lVar7 + 0x10);
        lVar14 = *(long *)PTR_DAT_04ca9ba0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_0230ae9c;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (*(uint *)(lVar10 + 0x18) <= uVar1) {
          lVar14 = *(long *)(lVar14 + 0x20);
          lVar10 = lVar7;
          goto LAB_0230ad64;
        }
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        plVar13 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *plVar13 = lVar12;
LAB_0230ad54:
        thunk_FUN_02134474(plVar13,lVar12);
      }
      iStack_64 = iStack_64 + 1;
    } while (iStack_64 < *(int *)(lVar8 + 0x18));
  }
                    /* try { // try from 0230ae8c to 0240ae93 has its CatchHandler @ 0230af00 */
                    /* try { // try from 0230ae94 to 0240af07 has its CatchHandler @ 0230a96c */
  return lVar7;
}

