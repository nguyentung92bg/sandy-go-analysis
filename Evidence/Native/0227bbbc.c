/* IL2CPP: Dino.BusSand.App.Iap$$MarkStarted
void Dino_BusSand_App_Iap__MarkStarted (System_String_o* pid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Iap$$MarkStarted
   void Dino_BusSand_App_Iap__MarkStarted (System_String_o* pid, const MethodInfo* method); */

void Dino_BusSand_App_Iap__MarkStarted_217bbbc(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9b904 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cad298);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9b904 = 1;
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
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 0x118);
    if (lVar6 == 0) {
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab748);
      System_Collections_Generic_List_object____ctor_3a8138c(uVar7,*(undefined8 *)PTR_DAT_04cab740);
      *(undefined8 *)(lVar5 + 0x118) = uVar7;
      thunk_FUN_02134474(lVar5 + 0x118,uVar7);
      lVar6 = *(long *)(lVar5 + 0x118);
      if (lVar6 == 0) goto LAB_0227bd70;
    }
    uVar8 = System_Collections_Generic_List_object___Contains_3a81f90
                      (lVar6,param_1,*(undefined8 *)PTR_DAT_04cad298);
    if ((uVar8 & 1) != 0) {
                    /* catch() { ... } // from try @ 0227bf3c with catch @ 0227bcd4 */
      return;
    }
    lVar5 = *(long *)(lVar5 + 0x118);
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar12 = *(long *)PTR_DAT_04cab718;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
                    /* try { // try from 0227bd14 to 0237bd23 has its CatchHandler @ 0227bf7c */
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          puVar11 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *puVar11 = param_1;
          thunk_FUN_02134474(puVar11,param_1);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar5,param_1,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar2 = PTR_DAT_04cabaf8;
                    /* try { // try from 0227bd64 to 0237bd6f has its CatchHandler @ 0227bf74 */
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
          uVar7 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
          uVar7 = System_String__Concat_46c82e0(uVar7,*(undefined8 *)puVar3,0);
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
          uVar9 = UnityEngine_JsonUtility__ToJson_44323ac
                            (*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),0);
          if (*(int *)(*(long *)PTR_DAT_04cac008 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = Dino_BusSand_DataPack__Seal_237a35c(uVar9,0);
          uVar10 = Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0();
          iVar4 = UnityEngine_PlayerPrefs__GetInt_43b5358(uVar10,0,0);
          System_IO_File__WriteAllBytes_47f9a38(uVar7,uVar9,0);
          if (iVar4 == 0) {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar10 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
            uVar10 = System_String__Concat_46c82e0(uVar10,*(undefined8 *)PTR_DAT_04cb4730,0);
            System_IO_File__WriteAllBytes_47f9a38(uVar10,uVar9,0);
          }
          else {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar9 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
            uVar8 = System_IO_File__Exists_47f230c(uVar9,0);
            if ((uVar8 & 1) != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar9 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
              uVar10 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
              uVar10 = System_String__Concat_46c82e0(uVar10,*(undefined8 *)PTR_DAT_04cb4730,0);
              System_IO_File__Copy_47f89f0(uVar9,uVar10,1,0);
            }
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0();
          System_IO_File__Copy_47f89f0(uVar7,uVar9,1,0);
          System_IO_File__Delete_47f8b84(uVar7,0);
          if (iVar4 == 0) {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar7 = Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0();
            UnityEngine_PlayerPrefs__SetInt_43b5300(uVar7,1,0);
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
    }
  }
LAB_0227bd70:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

