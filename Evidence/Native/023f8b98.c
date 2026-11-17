/* IL2CPP: Dino.BusSand.App.UI.LanguagePanel$$OnPick
void Dino_BusSand_App_UI_LanguagePanel__OnPick (Dino_BusSand_App_UI_LanguagePanel_o* __this, System_Collections_Generic_List_string__o* codes, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LanguagePanel$$OnPick
   void Dino_BusSand_App_UI_LanguagePanel__OnPick (Dino_BusSand_App_UI_LanguagePanel_o* __this,
   System_Collections_Generic_List_string__o* codes, const MethodInfo* method); */

void Dino_BusSand_App_UI_LanguagePanel__OnPick_22f8b98(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  
  puVar1 = PTR_DAT_04cab1e8;
  if ((bRam0000000004f9c495 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb1930);
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cab6a0);
    FUN_02132f7c(PTR_DAT_04cab6c8);
    FUN_02132f7c(PTR_DAT_04cab6d0);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04cb7868);
    FUN_02132f7c(PTR_DAT_04cab720);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac6e8);
    FUN_02132f7c(PTR_DAT_04cb4fa0);
    FUN_02132f7c(PTR_DAT_04cb7960);
    FUN_02132f7c(PTR_DAT_04cb7968);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c495 = 1;
  }
  puVar2 = PTR_DAT_04cad948;
  puStack_68 = (undefined8 *)0x0;
  uStack_70 = 0;
  lStack_60 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)puVar2,0);
  puVar6 = PTR_DAT_04cb7868;
  puVar5 = PTR_DAT_04cb1930;
  puVar4 = PTR_DAT_04caba50;
  puVar3 = PTR_DAT_04cab6c8;
  puVar2 = PTR_DAT_04cab6a0;
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_2 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_88,param_2,*(undefined8 *)PTR_DAT_04cab720);
    lStack_60 = lStack_78;
    puStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
    do {
      uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_70,*(undefined8 *)puVar3);
      lVar12 = lStack_60;
      if ((uVar8 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_70,*(undefined8 *)puVar2);
        goto LAB_023f91a4;
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = Dino_BusSand_App_UI_LanguagePanel__get_Available_22f6b04();
      iVar7 = System_Array__IndexOf_object__2906334(uVar9,lVar12,*(undefined8 *)puVar5);
    } while (iVar7 < 0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_70,*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_04cab550;
    if (lVar12 == 0) {
LAB_023f91a4:
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
                    /* try { // try from 023f91c4 to 024f92df has its CatchHandler @ 023f91c4
                       catch() { ... } // from try @ 023f91c4 with catch @ 023f91c4
                       catch() { ... } // from try @ 023f9320 with catch @ 023f91c4
                       catch() { ... } // from try @ 023f9398 with catch @ 023f91c4
                       catch() { ... } // from try @ 023f9418 with catch @ 023f91c4
                       catch() { ... } // from try @ 023f9440 with catch @ 023f91c4
                       catch() { ... } // from try @ 023f9468 with catch @ 023f91c4
                       catch() { ... } // from try @ 023f9494 with catch @ 023f91c4 */
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar12 = *(long *)puVar4;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar4;
      }
      uVar9 = **(undefined8 **)(lVar12 + 0xb8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      if ((uVar8 & 1) == 0) {
        return;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar12 = *(long *)puVar4;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar4;
      }
      lVar13 = *(long *)PTR_DAT_04ca9d18;
      lVar10 = **(long **)(lVar12 + 0xb8);
      lVar12 = *(long *)(lVar13 + 0x38);
      if (lVar12 == 0) {
        FUN_0216b4cc(lVar13);
        lVar12 = *(long *)(lVar13 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0216b470();
      }
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0216b470();
      }
      uVar9 = **(undefined8 **)(lVar12 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
      }
                    /* try { // try from 023f92e0 to 024f92e7 has its CatchHandler @ 023f9444 */
      uVar9 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb4fa0,uVar9,0);
                    /* try { // try from 023f92f4 to 024f931f has its CatchHandler @ 023f9448 */
      if (lVar10 != 0) {
        Dino_BusSand_App_GameApp__Toast_2166a6c(lVar10,uVar9,0);
        return;
      }
    }
    else {
      lVar10 = *(long *)PTR_DAT_04cab550;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar2;
      }
      uVar8 = System_String__op_Inequality_46d110c(**(undefined8 **)(lVar10 + 0xb8),lVar12,0);
      puVar3 = PTR_DAT_04cabaf8;
      if ((uVar8 & 1) == 0) {
        Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
        goto LAB_023f9318;
      }
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar10 = *(long *)puVar3;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar3;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0x60);
        *plVar11 = lVar12;
        thunk_FUN_02134474(plVar11,lVar12);
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar10 = *(long *)puVar2;
        }
        **(long **)(lVar10 + 0xb8) = lVar12;
        thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar12);
        if (*(int *)(*(long *)PTR_DAT_04cab530 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_LanguageFonts__Apply_2152684(lVar12,0);
        Dino_BusSand_App_Meta_Profile__Save_226c548(0);
        plVar11 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
        puVar2 = PTR_DAT_04cb7960;
        if (plVar11 != (long *)0x0) {
          if ((*(long *)PTR_DAT_04cb7960 != 0) &&
             (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb7960,*(undefined8 *)(*plVar11 + 0x40)
                                         ), lVar10 == 0)) {
LAB_023f935c:
            uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar9,0);
          }
          if ((int)plVar11[3] != 0) {
            plVar11[4] = *(long *)puVar2;
            thunk_FUN_02134474();
            lVar10 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar11 + 0x40));
            if (lVar10 == 0) goto LAB_023f935c;
            if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
              plVar11[5] = lVar12;
              thunk_FUN_02134474(plVar11 + 5,lVar12);
              if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb7968,plVar11,0);
              Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b88f == '\0') {
                FUN_02132f7c(PTR_DAT_04caba50);
                cRam0000000004f9b88f = '\x01';
              }
              lVar12 = *(long *)puVar4;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar12 = *(long *)puVar4;
              }
              uVar9 = **(undefined8 **)(lVar12 + 0xb8);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar1);
              }
              uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
              if ((uVar8 & 1) == 0) {
LAB_023f9318:
                    /* try { // try from 023f9320 to 024f9357 has its CatchHandler @ 023f91c4 */
                if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_UI_LanguagePanel__OpenSettings_22f93c4();
                return;
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b88f == '\0') {
                FUN_02132f7c(PTR_DAT_04caba50);
                cRam0000000004f9b88f = '\x01';
              }
              lVar12 = *(long *)puVar4;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar12 = *(long *)puVar4;
              }
              if (**(long **)(lVar12 + 0xb8) != 0) {
                if (*(char *)(**(long **)(lVar12 + 0xb8) + 0x38) != '\0') goto LAB_023f9318;
                if (cRam0000000004f9b94d == '\0') {
                  FUN_02132f7c(PTR_DAT_04cad1b0);
                  cRam0000000004f9b94d = '\x01';
                }
                puVar2 = PTR_DAT_04cad1b0;
                uVar9 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
                if ((uVar8 & 1) != 0) {
                  if (cRam0000000004f9b94d == '\0') {
                    FUN_02132f7c(PTR_DAT_04cad1b0);
                    cRam0000000004f9b94d = '\x01';
                  }
                  if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_023f9354;
                  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                            (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)PTR_DAT_04cac6e8);
                }
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                if (cRam0000000004f9b88f == '\0') {
                  FUN_02132f7c(PTR_DAT_04caba50);
                  cRam0000000004f9b88f = '\x01';
                }
                lVar12 = *(long *)puVar4;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar12 = *(long *)puVar4;
                }
                if (**(long **)(lVar12 + 0xb8) != 0) {
                  lVar12 = Dino_BusSand_App_GameApp__get_Home_2169a38(**(long **)(lVar12 + 0xb8),0);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar1);
                  }
                  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
                  if ((uVar8 & 1) != 0) {
                    if (lVar12 == 0) goto LAB_023f9354;
                    if (*(char *)(lVar12 + 0x2c) == '\0') {
                      Dino_BusSand_App_UI_HomePanel__Rebuild_22eb580(lVar12);
                      goto LAB_023f9318;
                    }
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (cRam0000000004f9b88f == '\0') {
                    FUN_02132f7c(PTR_DAT_04caba50);
                    cRam0000000004f9b88f = '\x01';
                  }
                  lVar12 = *(long *)puVar4;
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar12 = *(long *)puVar4;
                  }
                  if (**(long **)(lVar12 + 0xb8) != 0) {
                    Dino_BusSand_App_GameApp__GoHall_21678c4(**(long **)(lVar12 + 0xb8),0,0);
                    goto LAB_023f9318;
                  }
                }
              }
              goto LAB_023f9354;
            }
          }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 023f9358 to 024f935f has its CatchHandler @ 023f93f4 */
          FUN_0213322c();
        }
      }
    }
  }
LAB_023f9354:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

