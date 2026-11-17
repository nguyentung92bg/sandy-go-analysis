/* IL2CPP: Dino.BusSand.App.Meta.Profile$$NewPlayer
void Dino_BusSand_App_Meta_Profile__NewPlayer (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$NewPlayer
   void Dino_BusSand_App_Meta_Profile__NewPlayer (const MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__NewPlayer_2270d74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_04cb47e8;
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0e8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb47e8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0e8 = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_App_Meta_PlayerData___ctor_226f0dc();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = Dino_BusSand_App_Meta_Profile__Now_2271090();
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0xa0) = uVar8;
    uVar8 = Dino_BusSand_App_Meta_Profile__Day_2271100();
    *(undefined8 *)(lVar7 + 0xb8) = uVar8;
    uVar8 = Dino_BusSand_App_Meta_Profile__Day_2271100();
    *(undefined8 *)(lVar7 + 0x168) = uVar8;
    if (cRam0000000004f9c128 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9c128 = '\x01';
    }
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar1;
    }
    plVar10 = (long *)(*(long *)(lVar9 + 0xb8) + 0x10);
    *plVar10 = lVar7;
    thunk_FUN_02134474(plVar10,lVar7);
    puVar1 = PTR_DAT_04cabaf8;
    if ((bRam0000000004f9c0ed & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac008);
      FUN_02132f7c(PTR_DAT_04cabaf8);
      FUN_02132f7c(PTR_DAT_04cabb68);
      FUN_02132f7c(PTR_DAT_04cb4730);
      bRam0000000004f9c0ed = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_04cabb68;
    if (*(long *)(*(long *)(lVar7 + 0xb8) + 0x10) != 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
      uVar8 = System_String__Concat_46c82e0(uVar8,*(undefined8 *)puVar2,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar1;
      }
      uVar4 = UnityEngine_JsonUtility__ToJson_44323ac
                        (*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
      if (*(int *)(*(long *)PTR_DAT_04cac008 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_DataPack__Seal_237a35c(uVar4,0);
      uVar5 = Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0();
      iVar3 = UnityEngine_PlayerPrefs__GetInt_43b5358(uVar5,0,0);
      System_IO_File__WriteAllBytes_47f9a38(uVar8,uVar4,0);
      if (iVar3 == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
        uVar5 = System_String__Concat_46c82e0(uVar5,*(undefined8 *)PTR_DAT_04cb4730,0);
        System_IO_File__WriteAllBytes_47f9a38(uVar5,uVar4,0);
      }
      else {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
        uVar6 = System_IO_File__Exists_47f230c(uVar4,0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
          uVar5 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
          uVar5 = System_String__Concat_46c82e0(uVar5,*(undefined8 *)PTR_DAT_04cb4730,0);
          System_IO_File__Copy_47f89f0(uVar4,uVar5,1,0);
        }
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
      System_IO_File__Copy_47f89f0(uVar8,uVar4,1,0);
      System_IO_File__Delete_47f8b84(uVar8,0);
      if (iVar3 == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0();
        UnityEngine_PlayerPrefs__SetInt_43b5300(uVar8,1,0);
        UnityEngine_PlayerPrefs__Save_43b5e3c(0);
      }
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar1;
      }
      *(undefined1 *)(*(long *)(lVar7 + 0xb8) + 0x28) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

