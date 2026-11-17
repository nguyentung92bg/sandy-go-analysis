/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$OnLevelStart
void Dino_BusSand_App_Meta_WinStreak__OnLevelStart (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$OnLevelStart
   void Dino_BusSand_App_Meta_WinStreak__OnLevelStart (const MethodInfo* method); */

void Dino_BusSand_App_Meta_WinStreak__OnLevelStart_2293bfc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((bRam0000000004f9c1f0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c1f0 = 1;
  }
  iVar3 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690();
  if (iVar3 != 3) {
    return;
  }
  lVar8 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x34) != '\0') {
      return;
    }
    lVar8 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
    if (lVar8 != 0) {
      *(undefined1 *)(lVar8 + 0x34) = 1;
      Dino_BusSand_App_Meta_WinStreak__Store_229359c();
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
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
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar1;
      }
      puVar2 = PTR_DAT_04cabb68;
      if (*(long *)(*(long *)(lVar8 + 0xb8) + 0x10) != 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
        uVar4 = System_String__Concat_46c82e0(uVar4,*(undefined8 *)puVar2,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar1;
        }
        uVar5 = UnityEngine_JsonUtility__ToJson_44323ac
                          (*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),0);
        if (*(int *)(*(long *)PTR_DAT_04cac008 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_DataPack__Seal_237a35c(uVar5,0);
        uVar6 = Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0();
        iVar3 = UnityEngine_PlayerPrefs__GetInt_43b5358(uVar6,0,0);
        System_IO_File__WriteAllBytes_47f9a38(uVar4,uVar5,0);
        if (iVar3 == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
          uVar6 = System_String__Concat_46c82e0(uVar6,*(undefined8 *)PTR_DAT_04cb4730,0);
          System_IO_File__WriteAllBytes_47f9a38(uVar6,uVar5,0);
        }
        else {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
          uVar7 = System_IO_File__Exists_47f230c(uVar5,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
            uVar6 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
            uVar6 = System_String__Concat_46c82e0(uVar6,*(undefined8 *)PTR_DAT_04cb4730,0);
            System_IO_File__Copy_47f89f0(uVar5,uVar6,1,0);
          }
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
        System_IO_File__Copy_47f89f0(uVar4,uVar5,1,0);
        System_IO_File__Delete_47f8b84(uVar4,0);
        if (iVar3 == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0();
          UnityEngine_PlayerPrefs__SetInt_43b5300(uVar4,1,0);
          UnityEngine_PlayerPrefs__Save_43b5e3c(0);
        }
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar1;
        }
        *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x28) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

