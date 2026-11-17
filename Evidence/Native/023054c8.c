/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Row
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Meta_EconomySettings__Row (System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Row
   System_Collections_Generic_Dictionary_string__object__o*
   Dino_BusSand_App_Meta_EconomySettings__Row (System_String_o* id, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_EconomySettings__Row_22054c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9bcd3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac020);
    FUN_02132f7c(PTR_DAT_04cac028);
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb1d70);
    bRam0000000004f9bcd3 = 1;
  }
  uStack_28 = 0;
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_EconomySettings__Ensure_2205454();
  if (param_1 == 0) {
    uStack_38 = 0;
  }
  else {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    puVar1 = PTR_DAT_04cac020;
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x10), lVar4 == 0)) {
LAB_023056a8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar4,param_1,&uStack_28,*(undefined8 *)PTR_DAT_04cac020);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uStack_38 = Dino_BusSand_App_Tables__Row_215ee18(*(undefined8 *)PTR_DAT_04cb1d70,param_1,0);
    }
    else {
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x50);
      if (lVar4 == 0) goto LAB_023056a8;
      uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (lVar4,param_1,&uStack_38,*(undefined8 *)puVar1);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = Dino_BusSand_App_Tables__Row_215ee18(*(undefined8 *)PTR_DAT_04cb1d70,param_1,0);
        uVar3 = uStack_28;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uStack_38 = Dino_BusSand_App_Meta_EconomySettings__Merge_22056ac(uVar6,uVar3);
        lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
        if (lVar4 == 0) goto LAB_023056a8;
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar4,param_1,uStack_38,*(undefined8 *)PTR_DAT_04cac028);
      }
    }
  }
  return uStack_38;
}

