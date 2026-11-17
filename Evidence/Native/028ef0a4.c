/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$Get<object>
Il2CppObject* Dino_BusSand_App_Meta_LiveOps__Get_object_ (const MethodInfo_27EF0A4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$Get<object>
   Il2CppObject* Dino_BusSand_App_Meta_LiveOps__Get_object_ (const MethodInfo_27EF0A4* method); */

long Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cb37f8);
    FUN_02132f7c(PTR_DAT_04cb3800);
    FUN_02132f7c(PTR_DAT_04cb3808);
    FUN_02132f7c(PTR_DAT_04cb3818);
    FUN_02132f7c(PTR_DAT_04cac668);
    if (*(long *)(param_1 + 0x38) == 0) {
      FUN_0216b4cc(param_1);
    }
  }
  puVar1 = PTR_DAT_04cac668;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  lVar3 = *(long *)PTR_DAT_04cac668;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_38,**(long **)(lVar3 + 0xb8),*(undefined8 *)PTR_DAT_04cb3818);
    puVar1 = PTR_DAT_04cb3800;
    do {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_38,*(undefined8 *)puVar1);
      uVar2 = uStack_28;
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_38,*(undefined8 *)PTR_DAT_04cb37f8);
        return 0;
      }
      lVar3 = **(long **)(param_1 + 0x38);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0216b470(lVar3);
      }
      lVar3 = thunk_FUN_0216e7a0(uVar2,lVar3);
    } while (lVar3 == 0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_38,*(undefined8 *)PTR_DAT_04cb37f8);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

