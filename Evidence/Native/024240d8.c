/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterEntries>b__38_5
System_String_o* Dino_BusSand_App_UI_LiveOpsHome___c___RegisterEntries_b__38_5 (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterEntries>b__38_5
   System_String_o* Dino_BusSand_App_UI_LiveOpsHome___c___RegisterEntries_b__38_5
   (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_LiveOpsHome___c___RegisterEntries_b__38_5_23240d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong unaff_x30;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar1 = PTR_DAT_04ca9d18;
  if ((bRam0000000004f9c5ca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb0050);
    FUN_02132f7c(PTR_DAT_04cb0058);
    bRam0000000004f9c5ca = 1;
  }
  lVar9 = *(long *)puVar1;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_0216b4cc(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cad330;
  lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  puVar3 = PTR_DAT_04cb0058;
  puVar2 = PTR_DAT_04cb0050;
  lVar8 = **(long **)(lVar8 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  lVar9 = *(long *)puVar3;
  lVar7 = *(long *)puVar2;
  uStack_30 = unaff_x30;
  if ((bRam0000000004f9c186 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550,lVar7,lVar8,0);
    bRam0000000004f9c186 = 1;
  }
  uVar5 = System_String__IsNullOrEmpty_46d2084(lVar9,0);
  puVar1 = PTR_DAT_04cab550;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_App_Lang__Has_215fb88(lVar9,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if ((bRam0000000004f9b81c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cab550,lVar8,0);
        FUN_02132f7c(PTR_DAT_04cac078);
        FUN_02132f7c(PTR_DAT_04ca9c30);
        bRam0000000004f9b81c = 1;
      }
      lStack_28 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      uVar5 = System_String__IsNullOrEmpty_46d2084(lVar9,0);
      puVar1 = PTR_DAT_04cab550;
      if ((uVar5 & 1) != 0) {
        return *(long *)PTR_DAT_04ca9c30;
      }
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_App_Lang__Current_215f3d0();
      uVar5 = Dino_BusSand_App_Lang__Text_215f904(uVar4,lVar9,&lStack_28);
      if ((uVar5 & 1) == 0) {
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar1;
        }
        uVar5 = System_String__op_Equality_46d1108
                          (**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)PTR_DAT_04cac078,0);
        if ((uVar5 & 1) != 0) {
          return lVar9;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = Dino_BusSand_App_Lang__English_215f81c();
        uVar5 = Dino_BusSand_App_Lang__Text_215f904(uVar4,lVar9,&lStack_28);
        if ((uVar5 & 1) == 0) {
          return lVar9;
        }
      }
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
        lStack_28 = System_String__Format_46d3570(lStack_28,lVar8,0);
      }
      return lStack_28;
    }
  }
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
    if (lVar8 != 0) {
      uStack_38 = 0;
      uStack_40 = 0;
      lStack_28 = 0;
      uStack_30 = 0;
      System_ParamsArray___ctor_483f6e0(&uStack_40,lVar8,0);
      uStack_58 = uStack_38;
      uStack_60 = uStack_40;
      lStack_48 = lStack_28;
      uStack_50 = uStack_30;
      lVar8 = System_String__FormatHelper_46d33ec(0,lVar7,&uStack_60);
      return lVar8;
    }
    puVar1 = PTR_DAT_04ccc5f0;
    if (lVar7 != 0) {
      puVar1 = PTR_DAT_04cc6cb8;
    }
    uVar4 = thunk_FUN_021985a8(puVar1,0,0);
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
    uVar6 = thunk_FUN_0216e89c();
    System_ArgumentNullException___ctor_47afb54(uVar6,uVar4,0);
    uVar4 = thunk_FUN_021985a8(PTR_DAT_04d0b438);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar6,uVar4);
  }
  return lVar7;
}

