/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Ints
System_Collections_Generic_List_object__o* Dino_BusSand_App_Meta_EconomySettings__Ints (Il2CppObject* v, int64_t min, int64_t max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Ints
   System_Collections_Generic_List_object__o* Dino_BusSand_App_Meta_EconomySettings__Ints
   (Il2CppObject* v, int64_t min, int64_t max, const MethodInfo* method); */

long Dino_BusSand_App_Meta_EconomySettings__Ints_220a50c
               (undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  if ((bRam0000000004f9bce2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04ca9ba0);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    bRam0000000004f9bce2 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  lVar7 = Dino_BusSand_App_MiniJson__Arr_2156264(param_1,0);
  puVar6 = PTR_DAT_04cb20c0;
  puVar5 = PTR_DAT_04cb20b0;
  puVar4 = PTR_DAT_04cb1d58;
  puVar3 = PTR_DAT_04ca9ba0;
  puVar2 = PTR_DAT_04ca9b98;
  if (lVar7 == 0) {
LAB_0230a720:
    lVar8 = 0;
  }
  else {
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b90);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar8,*(undefined8 *)puVar2);
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_88,lVar7,*(undefined8 *)puVar6);
    puVar2 = PTR_DAT_04ca9ac8;
    uStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_60 = uStack_78;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
    while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_70,*(undefined8 *)puVar5), uVar10 = uStack_60,
          (uVar9 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = Dino_BusSand_App_Meta_EconomySettings__Whole_22087a0(uVar10,&lStack_48);
      if ((((uVar9 & 1) == 0) || (lStack_48 < param_2)) || (param_3 < lStack_48)) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_70,*(undefined8 *)PTR_DAT_04cb20a8);
        goto LAB_0230a720;
      }
      dStack_90 = (double)lStack_48;
      uVar10 = FUN_02133100(*(undefined8 *)(puVar2 + 0x80),&dStack_90);
      if (lVar8 == 0) {
LAB_0230a744:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar7 = *(long *)(lVar8 + 0x10);
      lVar11 = *(long *)puVar3;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_0230a744;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
        thunk_FUN_02134474();
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar8,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_70,*(undefined8 *)PTR_DAT_04cb20a8);
  }
  return lVar8;
}

