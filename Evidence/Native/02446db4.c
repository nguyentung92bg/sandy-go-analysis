/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c__DisplayClass39_0$$<Mechanics>b__1
bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass39_0___Mechanics_b__1 (Dino_BusSand_Cheat_AutoQa___c__DisplayClass39_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c__DisplayClass39_0$$<Mechanics>b__1
   bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass39_0___Mechanics_b__1
   (Dino_BusSand_Cheat_AutoQa___c__DisplayClass39_0_o* __this, const MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass39_0___Mechanics_b__1_2346db4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6f4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac518);
    FUN_02132f7c(PTR_DAT_04cb1870);
    bRam0000000004f9c6f4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                    (lVar3,*(undefined8 *)PTR_DAT_04cac518);
  if ((uVar4 & 1) != 0) {
    return true;
  }
  uVar5 = System_String__Concat_46c82e0
                    (*(undefined8 *)PTR_DAT_04cb1870,*(undefined8 *)(param_1 + 0x18),0);
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabaf8);
  }
  puVar1 = PTR_DAT_04cabaf8;
  uVar6 = 0;
  if ((bRam0000000004f9c109 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad298,0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c109 = 1;
    uVar6 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar6 = extraout_x1_00;
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8,uVar6);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      iVar2 = System_Array__IndexOf_object__297e5c0
                        (*(undefined8 *)(lVar3 + 0x10),uVar5,0,*(int *)(lVar3 + 0x18),
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  PTR_DAT_04cad298 + 0x20) + 0xc0) + 0xd0) + 0x20) +
                                    0xc0) + 0x150));
      return iVar2 != -1;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

