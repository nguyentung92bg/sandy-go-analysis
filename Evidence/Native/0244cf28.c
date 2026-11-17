/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<HomeOffers>d__47$$MoveNext
bool Dino_BusSand_Cheat_AutoQa__HomeOffers_d__47__MoveNext (Dino_BusSand_Cheat_AutoQa__HomeOffers_d__47_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<HomeOffers>d__47$$MoveNext
   bool Dino_BusSand_Cheat_AutoQa__HomeOffers_d__47__MoveNext
   (Dino_BusSand_Cheat_AutoQa__HomeOffers_d__47_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_AutoQa__HomeOffers_d__47__MoveNext_234cf28(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9c70c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cac8c0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb9bc8);
    FUN_02132f7c(PTR_DAT_04cb9bd0);
    FUN_02132f7c(PTR_DAT_04cb9bd8);
    FUN_02132f7c(PTR_DAT_04cb9be0);
    FUN_02132f7c(PTR_DAT_04cb9778);
    FUN_02132f7c(PTR_DAT_04cb9be8);
    FUN_02132f7c(PTR_DAT_04cb9bf0);
    FUN_02132f7c(PTR_DAT_04cb9bf8);
    FUN_02132f7c(PTR_DAT_04cb9c00);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb9c08);
    bRam0000000004f9c70c = 1;
  }
  puVar4 = PTR_DAT_04cb9568;
  puVar3 = PTR_DAT_04cabaf8;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x20);
  uStack_34 = 0;
  if (iVar1 < 4) {
    if (1 < iVar1) {
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (lVar10 == 0) goto LAB_0244d684;
        Dino_BusSand_Cheat_AutoQa__Add_23430d8
                  (lVar10,*(undefined1 *)(lVar10 + 0x28),*(undefined8 *)PTR_DAT_04cb9be8,
                   *(undefined8 *)PTR_DAT_04ca9c30);
        puVar3 = PTR_DAT_04cb9778;
        lVar7 = *(long *)PTR_DAT_04cb9778;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar3;
        }
        puVar9 = *(undefined8 **)(lVar7 + 0xb8);
        lVar11 = puVar9[0x44];
        if (lVar11 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            puVar9 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar6 = *puVar9;
          lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
          System_Func_bool____ctor_379d5fc(lVar11,uVar6,*(undefined8 *)PTR_DAT_04cb9bd0,0);
          lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
          *(long *)(lVar7 + 0x220) = lVar11;
          thunk_FUN_02134474(lVar7 + 0x220,lVar11);
        }
        uVar6 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x40000000,lVar10,lVar11);
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
        uVar8 = 3;
      }
      else {
        if (iVar1 != 3) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (lVar10 == 0) goto LAB_0244d684;
        uVar6 = Dino_BusSand_Cheat_AutoQa__Add_23430d8
                          (lVar10,*(undefined1 *)(lVar10 + 0x28),*(undefined8 *)PTR_DAT_04cb9c00,
                           *(undefined8 *)PTR_DAT_04ca9c30);
        uVar6 = Dino_BusSand_Cheat_AutoQa__Fresh_23421dc(uVar6,0xd);
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
        uVar8 = 4;
      }
LAB_0244d668:
      *(undefined4 *)(param_1 + 0x10) = uVar8;
                    /* try { // try from 0244d670 to 0254d697 has its CatchHandler @ 0244dadc */
      return 1;
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar10 != 0) {
        uVar6 = Dino_BusSand_Cheat_AutoQa__Fresh_23421dc(0,0xe);
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      puVar3 = PTR_DAT_04cb9568;
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0x138) = 1;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar7 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
        if (lVar7 != 0) {
          Dino_BusSand_App_GameApp__GoHall_21678c4(lVar7,0,0);
          puVar3 = PTR_DAT_04cb9778;
          lVar7 = *(long *)PTR_DAT_04cb9778;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar3;
          }
          puVar9 = *(undefined8 **)(lVar7 + 0xb8);
          lVar11 = puVar9[0x43];
          if (lVar11 == 0) {
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              puVar9 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
            }
            uVar6 = *puVar9;
            lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
            System_Func_bool____ctor_379d5fc(lVar11,uVar6,*(undefined8 *)PTR_DAT_04cb9bc8,0);
            lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
            *(long *)(lVar7 + 0x218) = lVar11;
            thunk_FUN_02134474(lVar7 + 0x218,lVar11);
          }
          if (lVar10 != 0) {
            uVar6 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x40a00000,lVar10,lVar11);
            *(undefined8 *)(param_1 + 0x18) = uVar6;
            thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
            uVar8 = 2;
            goto LAB_0244d668;
          }
        }
      }
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 0244d438 to 0254d66f has its CatchHandler @ 0244d438
                       catch() { ... } // from try @ 0244d438 with catch @ 0244d438
                       catch() { ... } // from try @ 0244d990 with catch @ 0244d438
                       catch() { ... } // from try @ 0244da58 with catch @ 0244d438
                       catch() { ... } // from try @ 0244db14 with catch @ 0244d438 */
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0x138) = 3;
        uVar5 = Dino_BusSand_App_Meta_StarterOffer__get_PopupDue_220ca94(0);
        if (lVar10 != 0) {
          Dino_BusSand_Cheat_AutoQa__Add_23430d8
                    (lVar10,uVar5 & 1,*(undefined8 *)PTR_DAT_04cb9c08,
                     *(undefined8 *)PTR_DAT_04ca9c30);
          if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar7 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
          if (lVar7 != 0) {
            Dino_BusSand_App_GameApp__GoHall_21678c4(lVar7,0,0);
            puVar3 = PTR_DAT_04cb9778;
            lVar7 = *(long *)PTR_DAT_04cb9778;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar7 = *(long *)puVar3;
            }
            puVar9 = *(undefined8 **)(lVar7 + 0xb8);
            lVar11 = puVar9[0x45];
            if (lVar11 == 0) {
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                puVar9 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
              }
              uVar6 = *puVar9;
              lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
              System_Func_bool____ctor_379d5fc(lVar11,uVar6,*(undefined8 *)PTR_DAT_04cb9bd8,0);
              lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
              *(long *)(lVar7 + 0x228) = lVar11;
              thunk_FUN_02134474(lVar7 + 0x228,lVar11);
            }
            uVar6 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x41200000,lVar10,lVar11);
            *(undefined8 *)(param_1 + 0x18) = uVar6;
            thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
            uVar8 = 5;
            goto LAB_0244d668;
          }
        }
      }
    }
    else {
      if (iVar1 != 5) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar10 != 0) {
        Dino_BusSand_Cheat_AutoQa__Add_23430d8
                  (lVar10,*(undefined1 *)(lVar10 + 0x28),*(undefined8 *)PTR_DAT_04cb9bf0,
                   *(undefined8 *)PTR_DAT_04ca9c30);
        if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar10 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
        if (lVar10 != 0) {
          Dino_BusSand_App_UI_UIManager__CloseAllPopups_21feed4(lVar10,0);
          uVar6 = Dino_BusSand_Cheat_AutoQa__Frames_2342f28(10);
          *(undefined8 *)(param_1 + 0x18) = uVar6;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
          uVar8 = 6;
          goto LAB_0244d668;
        }
      }
    }
  }
  else if (iVar1 == 6) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar6 = Dino_BusSand_App_Meta_WinStreak__get_UnlockLevel_2292964(0);
    if (lVar10 != 0) {
      uVar6 = Dino_BusSand_Cheat_AutoQa__Fresh_23421dc(uVar6,(int)uVar6 + 1);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
      uVar8 = 7;
      goto LAB_0244d668;
    }
  }
  else if (iVar1 == 7) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
    if (lVar7 != 0) {
      Dino_BusSand_App_GameApp__GoHall_21678c4(lVar7,0,0);
      puVar3 = PTR_DAT_04cb9778;
      lVar7 = *(long *)PTR_DAT_04cb9778;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      puVar9 = *(undefined8 **)(lVar7 + 0xb8);
      lVar11 = puVar9[0x46];
      if (lVar11 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar9 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar6 = *puVar9;
        lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar11,uVar6,*(undefined8 *)PTR_DAT_04cb9be0,0);
        lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
        *(long *)(lVar7 + 0x230) = lVar11;
        thunk_FUN_02134474(lVar7 + 0x230,lVar11);
      }
      if (lVar10 != 0) {
        uVar6 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x40c00000,lVar10,lVar11);
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
        uVar8 = 8;
        goto LAB_0244d668;
      }
    }
  }
  else {
    if (iVar1 != 8) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 != 0) {
      uVar2 = *(undefined1 *)(lVar10 + 0x28);
      uStack_34 = Dino_BusSand_App_Meta_WinStreak__get_UnlockLevel_2292964(0);
      uVar6 = System_Int32__ToString_482d750(&uStack_34,0);
      uVar6 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb9bf8,uVar6,0);
      Dino_BusSand_Cheat_AutoQa__Add_23430d8(lVar10,uVar2,uVar6,*(undefined8 *)PTR_DAT_04ca9c30);
      return 0;
    }
  }
LAB_0244d684:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

