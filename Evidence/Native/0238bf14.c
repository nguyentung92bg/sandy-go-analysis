/* IL2CPP: Dino.BusSand.App.UI.UiKit$$TierText
System_String_o* Dino_BusSand_App_UI_UiKit__TierText (int32_t t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$TierText
   System_String_o* Dino_BusSand_App_UI_UiKit__TierText (int32_t t, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_UiKit__TierText_228bf14(int param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c18a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb0e28);
    FUN_02132f7c(PTR_DAT_04cb51c0);
    FUN_02132f7c(PTR_DAT_04cb51c8);
    FUN_02132f7c(PTR_DAT_04cb0e68);
    bRam0000000004f9c18a = 1;
  }
  if (param_1 == 2) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_UI_UiKit__get_English_228be14();
    puVar6 = (undefined8 *)PTR_DAT_04cb51c8;
    if ((uVar3 & 1) != 0) {
LAB_0238bfd4:
      return *puVar6;
    }
    lVar7 = *(long *)PTR_DAT_04ca9d18;
    lVar5 = *(long *)(lVar7 + 0x38);
    if (lVar5 == 0) {
      FUN_0216b4cc(lVar7);
      lVar5 = *(long *)(lVar7 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0216b470();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0216b470();
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    puVar6 = (undefined8 *)PTR_DAT_04cb0e28;
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
      puVar6 = (undefined8 *)PTR_DAT_04cb0e28;
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_UI_UiKit__get_English_228be14();
    puVar6 = (undefined8 *)PTR_DAT_04cb51c0;
    if ((uVar3 & 1) != 0) goto LAB_0238bfd4;
    lVar7 = *(long *)PTR_DAT_04ca9d18;
    lVar5 = *(long *)(lVar7 + 0x38);
    if (lVar5 == 0) {
      FUN_0216b4cc(lVar7);
      lVar5 = *(long *)(lVar7 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0216b470();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0216b470();
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    puVar6 = (undefined8 *)PTR_DAT_04cb0e68;
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
      puVar6 = (undefined8 *)PTR_DAT_04cb0e68;
    }
  }
  uVar4 = *puVar6;
  if ((bRam0000000004f9b81c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550,lVar5,0);
    FUN_02132f7c(PTR_DAT_04cac078);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b81c = 1;
  }
  uStack_28 = 0;
  uVar3 = System_String__IsNullOrEmpty_46d2084(uVar4,0);
  puVar1 = PTR_DAT_04cab550;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = Dino_BusSand_App_Lang__Current_215f3d0();
    uVar3 = Dino_BusSand_App_Lang__Text_215f904(uVar2,uVar4,&uStack_28);
    if ((uVar3 & 1) == 0) {
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar1;
      }
      uVar3 = System_String__op_Equality_46d1108
                        (**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)PTR_DAT_04cac078,0);
      if ((uVar3 & 1) != 0) {
        return uVar4;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = Dino_BusSand_App_Lang__English_215f81c();
      uVar3 = Dino_BusSand_App_Lang__Text_215f904(uVar2,uVar4,&uStack_28);
      if ((uVar3 & 1) == 0) {
        return uVar4;
      }
    }
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) {
      uStack_28 = System_String__Format_46d3570(uStack_28,lVar5,0);
    }
    return uStack_28;
  }
  return *(undefined8 *)PTR_DAT_04ca9c30;
}

