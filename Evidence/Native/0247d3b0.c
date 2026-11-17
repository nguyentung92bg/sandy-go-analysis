/* IL2CPP: Dino.BusSand.GameAssets$$GetShader
UnityEngine_Shader_o* Dino_BusSand_GameAssets__GetShader (Dino_BusSand_GameAssets_o* __this, System_String_o* shaderName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAssets$$GetShader
   UnityEngine_Shader_o* Dino_BusSand_GameAssets__GetShader (Dino_BusSand_GameAssets_o* __this,
   System_String_o* shaderName, const MethodInfo* method); */

long Dino_BusSand_GameAssets__GetShader_237d3b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000004f9c818 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbb830);
    FUN_02132f7c(PTR_DAT_04cbb838);
    FUN_02132f7c(PTR_DAT_04cbb840);
    FUN_02132f7c(PTR_DAT_04cbb848);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb850);
    FUN_02132f7c(PTR_DAT_04cbb798);
    bRam0000000004f9c818 = 1;
  }
  puVar3 = PTR_DAT_04cbb838;
  puVar2 = PTR_DAT_04cbb830;
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_68,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_04cbb848);
  lStack_40 = lStack_58;
  uStack_48 = puStack_60;
  uStack_50 = uStack_68;
  uStack_68 = 0;
  puStack_60 = &uStack_50;
  do {
    do {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_50,*(undefined8 *)puVar3);
      lVar6 = lStack_40;
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_50,*(undefined8 *)puVar2);
        lVar6 = UnityEngine_Shader__Find_43750d0(param_2,0);
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar7);
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
        if ((uVar4 & 1) == 0) {
          return lVar6;
        }
        uVar5 = System_String__Concat_46d2b84
                          (*(undefined8 *)PTR_DAT_04cbb850,param_2,*(undefined8 *)PTR_DAT_04cbb798,0
                          );
        if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
        }
        UnityEngine_Debug__LogWarning_4357a30(uVar5,0);
        return lVar6;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    } while ((uVar4 & 1) == 0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = UnityEngine_Object__get_name_43c71a4(lVar6,0);
    uVar4 = System_String__op_Equality_46d1108(uVar5,param_2,0);
  } while ((uVar4 & 1) == 0);
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_50,*(undefined8 *)puVar2);
  return lVar6;
}

