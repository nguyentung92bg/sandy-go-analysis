/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$ItemName
System_String_o* Dino_BusSand_App_UI_CommerceUi__ItemName (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$ItemName
   System_String_o* Dino_BusSand_App_UI_CommerceUi__ItemName (int32_t id, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_UI_CommerceUi__ItemName_22ab1c8(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04cac7b8;
  if ((bRam0000000004f9c2a1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabc70);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c2a1 = 1;
  }
  puVar3 = PTR_DAT_04cabc70;
  puVar1 = PTR_DAT_04ca9c30;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_UI_CommerceUi__ItemRow_22ab158(param_1);
  uVar5 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar5,*(undefined8 *)puVar3,0);
  uVar5 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar5,*(undefined8 *)puVar1,0);
  uVar6 = System_String__IsNullOrEmpty_46d2084(uVar5,0);
  if ((uVar6 & 1) != 0) {
    return *(undefined8 *)puVar1;
  }
  if (param_1 == 0x2711) {
    plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    uStack_28 = CONCAT44(3,(undefined4)uStack_28);
    lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),(long)&uStack_28 + 4);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
      uVar5 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar5,0);
    }
    if ((int)plVar7[3] != 0) {
      plVar7[4] = lVar8;
      thunk_FUN_02134474(plVar7 + 4,lVar8);
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_Lang__Get_215f9c0(uVar5,plVar7,0);
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  lVar9 = *(long *)PTR_DAT_04ca9d18;
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
  lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  lVar8 = **(long **)(lVar8 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
  }
  if ((bRam0000000004f9b81c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550,lVar8,0);
    FUN_02132f7c(PTR_DAT_04cac078);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b81c = 1;
  }
  uStack_28 = 0;
  uVar6 = System_String__IsNullOrEmpty_46d2084(uVar5,0);
  puVar2 = PTR_DAT_04cab550;
  if ((uVar6 & 1) != 0) {
    return *(undefined8 *)PTR_DAT_04ca9c30;
  }
  if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Lang__Current_215f3d0();
  uVar6 = Dino_BusSand_App_Lang__Text_215f904(uVar4,uVar5,&uStack_28);
  if ((uVar6 & 1) == 0) {
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar2;
    }
    uVar6 = System_String__op_Equality_46d1108
                      (**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)PTR_DAT_04cac078,0);
    if ((uVar6 & 1) != 0) {
      return uVar5;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_Lang__English_215f81c();
    uVar6 = Dino_BusSand_App_Lang__Text_215f904(uVar4,uVar5,&uStack_28);
    if ((uVar6 & 1) == 0) {
      return uVar5;
    }
  }
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
    uStack_28 = System_String__Format_46d3570(uStack_28,lVar8,0);
  }
  return uStack_28;
}

