/* IL2CPP: Dino.BusSand.GameAssets$$GetMaterial
UnityEngine_Material_o* Dino_BusSand_GameAssets__GetMaterial (Dino_BusSand_GameAssets_o* __this, System_String_o* n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAssets$$GetMaterial
   UnityEngine_Material_o* Dino_BusSand_GameAssets__GetMaterial (Dino_BusSand_GameAssets_o* __this,
   System_String_o* n, const MethodInfo* method); */

long Dino_BusSand_GameAssets__GetMaterial_237c614(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000004f9c80f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cab698);
    FUN_02132f7c(PTR_DAT_04cab6b8);
    FUN_02132f7c(PTR_DAT_04cab6d8);
    FUN_02132f7c(PTR_DAT_04cab728);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb790);
    FUN_02132f7c(PTR_DAT_04cbb798);
    bRam0000000004f9c80f = 1;
  }
  puVar6 = PTR_DAT_04cbb798;
  puVar5 = PTR_DAT_04cbb790;
  puVar4 = PTR_DAT_04cab6b8;
  puVar3 = PTR_DAT_04cab698;
  puVar2 = PTR_DAT_04ca9af8;
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_60 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_88,*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_04cab728);
    lStack_60 = lStack_78;
    uStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
    while( true ) {
      do {
        uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_70,*(undefined8 *)puVar4);
        lVar7 = lStack_60;
        if ((uVar8 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_70,*(undefined8 *)puVar3);
          uVar9 = System_String__Concat_46d2b84
                            (*(undefined8 *)puVar5,param_2,*(undefined8 *)puVar6,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          UnityEngine_Debug__LogWarning_4357a30(uVar9,0);
          return 0;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
      } while ((uVar8 & 1) == 0);
      if (lVar7 == 0) break;
      uVar9 = UnityEngine_Object__get_name_43c71a4(lVar7,0);
      uVar8 = System_String__op_Equality_46d1108(uVar9,param_2,0);
      if ((uVar8 & 1) != 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_70,*(undefined8 *)puVar3);
        return lVar7;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

