/* IL2CPP: Dino.BusSand.App.UiAssets$$Map
System_Collections_Generic_Dictionary_string__string__o* Dino_BusSand_App_UiAssets__Map (System_Collections_Generic_List_UiAssetsMap_Entry__o* list, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UiAssets$$Map
   System_Collections_Generic_Dictionary_string__string__o* Dino_BusSand_App_UiAssets__Map
   (System_Collections_Generic_List_UiAssetsMap_Entry__o* list, const MethodInfo* method); */

long Dino_BusSand_App_UiAssets__Map_2162f30(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f9b83d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab528);
    FUN_02132f7c(PTR_DAT_04cac308);
    FUN_02132f7c(PTR_DAT_04caaf80);
    FUN_02132f7c(PTR_DAT_04caa788);
    FUN_02132f7c(PTR_DAT_04cac310);
    FUN_02132f7c(PTR_DAT_04cac318);
    FUN_02132f7c(PTR_DAT_04cac320);
    FUN_02132f7c(PTR_DAT_04cac328);
    FUN_02132f7c(PTR_DAT_04cac330);
    bRam0000000004f9b83d = 1;
  }
  puVar7 = PTR_DAT_04cac328;
  puVar6 = PTR_DAT_04cac318;
  puVar5 = PTR_DAT_04cac310;
  puVar4 = PTR_DAT_04cac308;
  puVar3 = PTR_DAT_04cab528;
  puVar2 = PTR_DAT_04caaf80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa788);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3640
              (lVar10,uVar1,*(undefined8 *)puVar4);
    System_Collections_Generic_List_UiAssetsMap_Entry___GetEnumerator_2ab9bc8
              (&uStack_70,param_1,*(undefined8 *)puVar7);
    while( true ) {
      do {
        uVar11 = System_Collections_Generic_List_Enumerator_UiAssetsMap_Entry___MoveNext_36183cc
                           (&uStack_70,*(undefined8 *)puVar6);
        uVar9 = uStack_58;
        uVar8 = uStack_60;
        if ((uVar11 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_UiAssetsMap_Entry___Dispose_36183c8
                    (&uStack_70,*(undefined8 *)puVar5);
          return lVar10;
        }
        uVar11 = System_String__IsNullOrEmpty_46d2084(uStack_60,0);
      } while ((uVar11 & 1) != 0);
      if (lVar10 == 0) break;
      uVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey_34b4598
                         (lVar10,uVar8,*(undefined8 *)puVar3);
      if ((uVar11 & 1) == 0) {
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar10,uVar8,uVar9,*(undefined8 *)puVar2);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

