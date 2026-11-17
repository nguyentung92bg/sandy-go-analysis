/* IL2CPP: Dino.BusSand.App.UI.EventKit$$EndsIn
System_String_o* Dino_BusSand_App_UI_EventKit__EndsIn (int64_t seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventKit$$EndsIn
   System_String_o* Dino_BusSand_App_UI_EventKit__EndsIn (int64_t seconds, const MethodInfo*
   method); */

long Dino_BusSand_App_UI_EventKit__EndsIn_21b8344(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9bad4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf600);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf608);
    FUN_02132f7c(PTR_DAT_04caf610);
    FUN_02132f7c(PTR_DAT_04caf618);
    FUN_02132f7c(PTR_DAT_04caf620);
    bRam0000000004f9bad4 = 1;
  }
  puVar2 = PTR_DAT_04caf600;
  puVar1 = PTR_DAT_04cad330;
  if (param_1 < 1) {
    lVar8 = *(long *)PTR_DAT_04ca9d18;
    lVar7 = *(long *)(lVar8 + 0x38);
    if (lVar7 == 0) {
      FUN_0216b4cc(lVar8);
      lVar7 = *(long *)(lVar8 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    lVar8 = *(long *)puVar1;
    plVar6 = (long *)**(long **)(lVar7 + 0xb8);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar8);
    }
    lVar7 = *(long *)PTR_DAT_04caf610;
    lVar8 = *(long *)PTR_DAT_04caf620;
  }
  else {
    plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    lVar7 = Dino_BusSand_App_UI_HomeEntries__Clock_22e78a4(param_1,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
      uVar4 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar4,0);
    }
    puVar3 = PTR_DAT_04caf618;
    puVar2 = PTR_DAT_04caf608;
    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar6[4] = lVar7;
    thunk_FUN_02134474(plVar6 + 4,lVar7);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = *(long *)puVar3;
    lVar8 = *(long *)puVar2;
  }
  if ((bRam0000000004f9c186 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550,lVar8,plVar6,0);
    bRam0000000004f9c186 = 1;
  }
  uVar9 = System_String__IsNullOrEmpty_46d2084(lVar7,0);
  puVar1 = PTR_DAT_04cab550;
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = Dino_BusSand_App_Lang__Has_215fb88(lVar7,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if ((bRam0000000004f9b81c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cab550,plVar6,0);
        FUN_02132f7c(PTR_DAT_04cac078);
        FUN_02132f7c(PTR_DAT_04ca9c30);
        bRam0000000004f9b81c = 1;
      }
      lVar8 = 0;
      uVar9 = System_String__IsNullOrEmpty_46d2084(lVar7,0);
      puVar1 = PTR_DAT_04cab550;
      if ((uVar9 & 1) != 0) {
        return *(long *)PTR_DAT_04ca9c30;
      }
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_App_Lang__Current_215f3d0();
      uVar9 = Dino_BusSand_App_Lang__Text_215f904(uVar4,lVar7,&stack0xffffffffffffffd8);
      if ((uVar9 & 1) == 0) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar1;
        }
        uVar9 = System_String__op_Equality_46d1108
                          (**(undefined8 **)(lVar5 + 0xb8),*(undefined8 *)PTR_DAT_04cac078,0);
        if ((uVar9 & 1) != 0) {
          return lVar7;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = Dino_BusSand_App_Lang__English_215f81c();
        uVar9 = Dino_BusSand_App_Lang__Text_215f904(uVar4,lVar7,&stack0xffffffffffffffd8);
        if ((uVar9 & 1) == 0) {
          return lVar7;
        }
      }
      if ((plVar6 != (long *)0x0) && (plVar6[3] != 0)) {
        lVar8 = System_String__Format_46d3570(0,plVar6,0);
      }
      return lVar8;
    }
  }
  if ((plVar6 != (long *)0x0) && (plVar6[3] != 0)) {
    if (plVar6 != (long *)0x0) {
      uStack_38 = 0;
      uStack_40 = 0;
      System_ParamsArray___ctor_483f6e0(&uStack_40,plVar6,0);
      uStack_58 = uStack_38;
      uStack_60 = uStack_40;
      uStack_48 = 0;
      uStack_50 = 0;
      lVar7 = System_String__FormatHelper_46d33ec(0,lVar8,&uStack_60);
      return lVar7;
    }
    puVar1 = PTR_DAT_04ccc5f0;
    if (lVar8 != 0) {
      puVar1 = PTR_DAT_04cc6cb8;
    }
    uVar4 = thunk_FUN_021985a8(puVar1,0,0);
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
    uVar10 = thunk_FUN_0216e89c();
    System_ArgumentNullException___ctor_47afb54(uVar10,uVar4,0);
    uVar4 = thunk_FUN_021985a8(PTR_DAT_04d0b438);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar10,uVar4);
  }
  return lVar8;
}

