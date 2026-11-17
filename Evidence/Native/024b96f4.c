/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$get_Toon
UnityEngine_Shader_o* Dino_BusSand_View_MaterialLibrary__get_Toon (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$get_Toon
   UnityEngine_Shader_o* Dino_BusSand_View_MaterialLibrary__get_Toon (const MethodInfo* method); */

long Dino_BusSand_View_MaterialLibrary__get_Toon_23b96f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = PTR_DAT_04cab208;
  if ((bRam0000000004f9c992 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbca60);
    bRam0000000004f9c992 = 1;
  }
  puVar2 = PTR_DAT_04cbca60;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cab208;
  uVar7 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9c819 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c819 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_GameAssets__get_Instance_2374c6c();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  puVar2 = PTR_DAT_04cf67c0;
  if ((uVar5 & 1) == 0) {
    if ((bRam0000000004fa6a8a & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf67c0,0);
      bRam0000000004fa6a8a = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar8 = (long *)UnityEngine_ResourcesAPI__get_ActiveAPI_43b72f0(0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* WARNING: Could not recover jumptable at 0x04475134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 400));
    return lVar6;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_GameAssets__get_Instance_2374c6c();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
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
  if (*(long *)(lVar6 + 0x58) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_68,*(long *)(lVar6 + 0x58),*(undefined8 *)PTR_DAT_04cbb848);
    lStack_40 = lStack_58;
    uStack_48 = puStack_60;
    uStack_50 = uStack_68;
    uStack_68 = 0;
    puStack_60 = &uStack_50;
    do {
      do {
        uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_50,*(undefined8 *)puVar3);
        lVar6 = lStack_40;
        if ((uVar5 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_50,*(undefined8 *)puVar2);
          lVar6 = UnityEngine_Shader__Find_43750d0(uVar7,0);
          lVar9 = *(long *)puVar1;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar9);
          }
          uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
          if ((uVar5 & 1) == 0) {
            return lVar6;
          }
          uVar7 = System_String__Concat_46d2b84
                            (*(undefined8 *)PTR_DAT_04cbb850,uVar7,*(undefined8 *)PTR_DAT_04cbb798,0
                            );
          if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
          }
          UnityEngine_Debug__LogWarning_4357a30(uVar7,0);
          return lVar6;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
      } while ((uVar5 & 1) == 0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar4 = UnityEngine_Object__get_name_43c71a4(lVar6,0);
      uVar5 = System_String__op_Equality_46d1108(uVar4,uVar7,0);
    } while ((uVar5 & 1) == 0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_50,*(undefined8 *)puVar2);
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

