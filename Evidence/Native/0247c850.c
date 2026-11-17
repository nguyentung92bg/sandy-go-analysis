/* IL2CPP: Dino.BusSand.GameAssets$$GetCubemap
UnityEngine_Cubemap_o* Dino_BusSand_GameAssets__GetCubemap (Dino_BusSand_GameAssets_o* __this, System_String_o* n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAssets$$GetCubemap
   UnityEngine_Cubemap_o* Dino_BusSand_GameAssets__GetCubemap (Dino_BusSand_GameAssets_o* __this,
   System_String_o* n, const MethodInfo* method); */

long * Dino_BusSand_GameAssets__GetCubemap_237c850(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  
  if ((bRam0000000004f9c810 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac3b8);
    FUN_02132f7c(PTR_DAT_04cbb7a0);
    FUN_02132f7c(PTR_DAT_04cbb7a8);
    FUN_02132f7c(PTR_DAT_04cbb7b0);
    FUN_02132f7c(PTR_DAT_04cbb7b8);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbb7c0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c810 = 1;
  }
  puVar4 = PTR_DAT_04cbb7b0;
  puVar3 = PTR_DAT_04cbb7a8;
  puVar2 = PTR_DAT_04cab208;
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  plStack_50 = (long *)0x0;
  if (*(long *)(param_1 + 0x68) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cbb7c0);
    plStack_50 = plStack_68;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_60,*(undefined8 *)puVar4), plVar8 = plStack_50,
          (uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(plVar8,0,0);
      if ((uVar5 & 1) != 0) {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar6 = UnityEngine_Object__get_name_43c71a4(plVar8,0);
        uVar5 = System_String__op_Equality_46d1108(uVar6,param_2,0);
        if ((uVar5 & 1) != 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_60,*(undefined8 *)puVar3);
          return plVar8;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)puVar3);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar2;
    }
    lVar9 = **(long **)(lVar7 + 0xb8);
    if (lVar9 != 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
      }
      uVar6 = *(undefined8 *)PTR_DAT_04cac3b8;
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = System_Type__GetTypeFromHandle_483f0b4(uVar6,0);
      if (lVar9 == 0) goto LAB_0247ca78;
      plVar8 = (long *)(**(code **)(lVar9 + 0x18))
                                 (*(undefined8 *)(lVar9 + 0x40),param_2,uVar6,
                                  *(undefined8 *)(lVar9 + 0x28));
      if (plVar8 != (long *)0x0) {
        if (*plVar8 == *(long *)PTR_DAT_04cbb7a0) {
          return plVar8;
        }
        return (long *)0x0;
      }
    }
    return (long *)0x0;
  }
LAB_0247ca78:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

