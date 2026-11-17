/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Merge
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Meta_EconomySettings__Merge (System_Collections_Generic_Dictionary_string__object__o* baseRow, System_Collections_Generic_Dictionary_string__object__o* over, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Merge
   System_Collections_Generic_Dictionary_string__object__o*
   Dino_BusSand_App_Meta_EconomySettings__Merge
   (System_Collections_Generic_Dictionary_string__object__o* baseRow,
   System_Collections_Generic_Dictionary_string__object__o* over, const MethodInfo* method); */

long Dino_BusSand_App_Meta_EconomySettings__Merge_22056ac(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar4 = PTR_DAT_04ca9b08;
  if ((bRam0000000004f9bcd5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04caaf48);
    FUN_02132f7c(PTR_DAT_04ca9b58);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04caa2f8);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    bRam0000000004f9bcd5 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  if (param_1 == 0) {
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (lVar5,*(undefined8 *)PTR_DAT_04ca9b50);
    puVar1 = (undefined8 *)PTR_DAT_04ca9b58;
    puVar2 = (undefined8 *)PTR_DAT_04caa2f8;
    puVar3 = (undefined8 *)PTR_DAT_04caa300;
  }
  else {
    System_Collections_Generic_Dictionary_object__object____ctor_34b3704
              (lVar5,param_1,*(undefined8 *)PTR_DAT_04caaf48);
    puVar1 = (undefined8 *)PTR_DAT_04ca9b58;
    puVar2 = (undefined8 *)PTR_DAT_04caa2f8;
    puVar3 = (undefined8 *)PTR_DAT_04caa300;
  }
  PTR_DAT_04ca9b58 = (undefined *)puVar1;
  PTR_DAT_04caa2f8 = (undefined *)puVar2;
  PTR_DAT_04caa300 = (undefined *)puVar3;
  if (param_2 != 0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
              (&uStack_60,param_2,*(undefined8 *)PTR_DAT_04caa2f0);
    while (uVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                             (&uStack_60,*puVar3), (uVar6 & 1) != 0) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar5,uStack_50,uStack_48,*puVar1);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
              (&uStack_60,*puVar2);
  }
  return lVar5;
}

