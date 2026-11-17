/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$TickCreative
void Dino_BusSand_Cheat_CheatManager__TickCreative (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$TickCreative
   void Dino_BusSand_Cheat_CheatManager__TickCreative (Dino_BusSand_Cheat_CheatManager_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__TickCreative_235cd24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f9c733 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04cab6a0);
    FUN_02132f7c(PTR_DAT_04cab6c8);
    FUN_02132f7c(PTR_DAT_04cab6d0);
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04cab720);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac580);
    FUN_02132f7c(PTR_DAT_04cac6f0);
    FUN_02132f7c(PTR_DAT_04cba498);
    FUN_02132f7c(PTR_DAT_04cac518);
    FUN_02132f7c(PTR_DAT_04cb97b0);
    FUN_02132f7c(PTR_DAT_04cb0ea8);
    FUN_02132f7c(PTR_DAT_04cb1870);
    FUN_02132f7c(PTR_DAT_04cba4a0);
    bRam0000000004f9c733 = 1;
  }
  uStack_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  uVar5 = Dino_BusSand_Cheat_CheatManager__get_Creative_235c6f4(param_1);
  puVar3 = PTR_DAT_04cabaf8;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar3;
    }
    if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x10) == 0) {
      return;
    }
    plVar8 = (long *)(param_1 + 0x28);
    lVar9 = *plVar8;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar3;
    }
    if (lVar9 != *(long *)(*(long *)(lVar6 + 0xb8) + 0x10)) {
      if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Cheat_CheatManager__MarkTutorialsSeen_235d20c();
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar3;
      }
      *plVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      thunk_FUN_02134474(plVar8);
    }
    puVar1 = PTR_DAT_04cac868;
    if (*(int *)(*(long *)PTR_DAT_04cac868 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9bcf9 == '\0') {
      FUN_02132f7c(PTR_DAT_04cac868);
      cRam0000000004f9bcf9 = '\x01';
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_04ca9ae8;
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    if ((uVar5 & 1) != 0) {
      if (lVar6 == 0) goto LAB_0245d1ac;
      lVar6 = *(long *)(lVar6 + 0x30);
      if ((lVar6 != 0) && (plVar8 = (long *)(param_1 + 0x30), *plVar8 != lVar6)) {
        *plVar8 = lVar6;
        thunk_FUN_02134474(plVar8,lVar6);
        lVar6 = Dino_BusSand_App_Gameplay_MechanicIntro__Present_22a084c
                          (*(undefined8 *)(lVar6 + 0x20),0);
        if (lVar6 == 0) goto LAB_0245d1ac;
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_68,lVar6,*(undefined8 *)PTR_DAT_04cab720);
        puVar4 = PTR_DAT_04cb1870;
        puVar2 = PTR_DAT_04cab6c8;
        puStack_48 = puStack_60;
        uStack_50 = uStack_68;
        uStack_40 = uStack_58;
        uStack_68 = 0;
        puStack_60 = &uStack_50;
        while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                 (&uStack_50,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
          uVar7 = System_String__Concat_46c82e0(*(undefined8 *)puVar4,uStack_40,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__SetFlag_227375c(uVar7,1,0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_50,*(undefined8 *)PTR_DAT_04cab6a0);
      }
    }
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    lVar6 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
    if ((uVar5 & 1) == 0) {
      if (lVar6 == 0) {
LAB_0245d1ac:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar6,*(undefined8 *)PTR_DAT_04cac518);
      if ((uVar5 & 1) != 0) {
        Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                  (lVar6,*(undefined8 *)PTR_DAT_04cac580);
        if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Cheat_CheatManager__Log_235c924(*(undefined8 *)PTR_DAT_04cba4a0);
      }
      uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar6,*(undefined8 *)PTR_DAT_04cb97b0);
      if ((uVar5 & 1) != 0) {
        Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                  (lVar6,*(undefined8 *)PTR_DAT_04cac6f0);
      }
      uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar6,*(undefined8 *)PTR_DAT_04cb0ea8);
      if ((uVar5 & 1) != 0) {
        Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                  (lVar6,*(undefined8 *)PTR_DAT_04cba498);
      }
    }
  }
  return;
}

