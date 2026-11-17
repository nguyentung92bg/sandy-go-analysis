/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$AppQuitting
void Dino_BusSand_App_Meta_GameTracking__AppQuitting (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$AppQuitting
   void Dino_BusSand_App_Meta_GameTracking__AppQuitting (const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__AppQuitting_2214c74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd52 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd52 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_04cac498;
  if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x10) != 0) {
    lVar5 = *(long *)PTR_DAT_04cac498;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_04caba90;
    if (**(char **)(lVar5 + 0xb8) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_Meta_JourneyTracking__LevelSnapshot_2214db8(1);
      lVar5 = *(long *)puVar3;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar5);
      }
      Dino_BusSand_App_Meta_GameTracking__SaveOpenAttempt_2211ba8(uVar6,1);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_JourneyTracking__PersistUi_22119a0();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cabaf8;
    if ((bRam0000000004f9c0ed & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac008);
      FUN_02132f7c(PTR_DAT_04cabaf8);
      FUN_02132f7c(PTR_DAT_04cabb68);
      FUN_02132f7c(PTR_DAT_04cb4730);
      bRam0000000004f9c0ed = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_04cabb68;
    if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x10) != 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
      uVar6 = System_String__Concat_46c82e0(uVar6,*(undefined8 *)puVar3,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      uVar7 = UnityEngine_JsonUtility__ToJson_44323ac
                        (*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),0);
      if (*(int *)(*(long *)PTR_DAT_04cac008 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = Dino_BusSand_DataPack__Seal_237a35c(uVar7,0);
      uVar8 = Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0();
      iVar4 = UnityEngine_PlayerPrefs__GetInt_43b5358(uVar8,0,0);
      System_IO_File__WriteAllBytes_47f9a38(uVar6,uVar7,0);
      if (iVar4 == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
        uVar8 = System_String__Concat_46c82e0(uVar8,*(undefined8 *)PTR_DAT_04cb4730,0);
        System_IO_File__WriteAllBytes_47f9a38(uVar8,uVar7,0);
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
        uVar9 = System_IO_File__Exists_47f230c(uVar7,0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
          uVar8 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
          uVar8 = System_String__Concat_46c82e0(uVar8,*(undefined8 *)PTR_DAT_04cb4730,0);
          System_IO_File__Copy_47f89f0(uVar7,uVar8,1,0);
        }
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
      System_IO_File__Copy_47f89f0(uVar6,uVar7,1,0);
      System_IO_File__Delete_47f8b84(uVar6,0);
      if (iVar4 == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0();
        UnityEngine_PlayerPrefs__SetInt_43b5300(uVar6,1,0);
        UnityEngine_PlayerPrefs__Save_43b5e3c(0);
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 0x28) = 0;
    }
    return;
  }
  return;
}

