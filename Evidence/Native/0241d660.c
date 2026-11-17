/* IL2CPP: Dino.BusSand.App.UI.PausePanel$$OnClose
void Dino_BusSand_App_UI_PausePanel__OnClose (Dino_BusSand_App_UI_PausePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PausePanel$$OnClose
   void Dino_BusSand_App_UI_PausePanel__OnClose (Dino_BusSand_App_UI_PausePanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_PausePanel__OnClose_231d660(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c594 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 0241d694 to 0251d697 has its CatchHandler @ 0241d768 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* try { // try from 0241d698 to 0251d6a7 has its CatchHandler @ 0241d778 */
    FUN_02132f7c(PTR_DAT_04cb8790);
    bRam0000000004f9c594 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0241d6bc to 0251d6c3 has its CatchHandler @ 0241d770 */
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar7 & 1) != 0) {
                    /* try { // try from 0241d6d4 to 0251d6d7 has its CatchHandler @ 0241d75c */
                    /* try { // try from 0241d6d8 to 0251d6e7 has its CatchHandler @ 0241d76c */
    if (*(long *)(param_1 + 0x38) != 0) {
      Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8
                (*(long *)(param_1 + 0x38),0,*(undefined8 *)PTR_DAT_04cb8790,0);
      if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 0241d6fc to 0251d703 has its CatchHandler @ 0241d760 */
        Dino_BusSand_App_Gameplay_GameplayController__LockInput_229dd28
                  (*(long *)(param_1 + 0x38),0,0);
        goto LAB_0241d708;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_0241d708:
                    /* try { // try from 0241d710 to 0251d747 has its CatchHandler @ 0241d77c */
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
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04cabb68;
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x10) != 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
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
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    uVar5 = UnityEngine_JsonUtility__ToJson_44323ac
                      (*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),0);
    if (*(int *)(*(long *)PTR_DAT_04cac008 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_DataPack__Seal_237a35c(uVar5,0);
    uVar6 = Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0();
    iVar3 = UnityEngine_PlayerPrefs__GetInt_43b5358(uVar6,0,0);
    System_IO_File__WriteAllBytes_47f9a38(uVar8,uVar5,0);
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
    System_IO_File__Copy_47f89f0(uVar8,uVar5,1,0);
    System_IO_File__Delete_47f8b84(uVar8,0);
    if (iVar3 == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0();
      UnityEngine_PlayerPrefs__SetInt_43b5300(uVar8,1,0);
      UnityEngine_PlayerPrefs__Save_43b5e3c(0);
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x28) = 0;
  }
  return;
}

