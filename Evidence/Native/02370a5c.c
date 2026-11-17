/* IL2CPP: Dino.BusSand.App.Meta.Profile$$TryRead
Dino_BusSand_App_Meta_PlayerData_o* Dino_BusSand_App_Meta_Profile__TryRead (System_String_o* path, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$TryRead
   Dino_BusSand_App_Meta_PlayerData_o* Dino_BusSand_App_Meta_Profile__TryRead (System_String_o*
   path, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_Profile__TryRead_2270a5c(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((bRam0000000004f9c0eb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac008);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb47d0);
    FUN_02132f7c(PTR_DAT_04caa228);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb47d8);
    bRam0000000004f9c0eb = 1;
  }
  uVar3 = System_IO_File__Exists_47f230c(param_1,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = System_IO_File__ReadAllBytes_47f92cc(param_1,0);
    puVar1 = PTR_DAT_04cac008;
    if (*(int *)(*(long *)PTR_DAT_04cac008 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_DataPack__IsSealed_237b3a4(uVar4,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0();
      iVar2 = UnityEngine_PlayerPrefs__GetInt_43b5358(uVar5,0,0);
      if (iVar2 != 0) {
        if (*(int *)(*(long *)PTR_DAT_04caa228 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = System_IO_Path__GetFileName_4807f9c(param_1,0);
        uVar4 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb47d8,uVar4,0);
        if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        UnityEngine_Debug__LogWarning_4357a30(uVar4,0);
        return 0;
      }
      plVar6 = (long *)System_Text_Encoding__get_UTF8_46eb380(0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar4 = (**(code **)(*plVar6 + 0x358))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x360));
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_DataPack__Unseal_237b48c(uVar4,0);
    }
    uVar3 = System_String__IsNullOrWhiteSpace_46d20a0(uVar4,0);
    if ((uVar3 & 1) == 0) {
      uVar4 = UnityEngine_JsonUtility__FromJson_object__27dae58
                        (uVar4,*(undefined8 *)PTR_DAT_04cb47d0);
      return uVar4;
    }
  }
  return 0;
}

