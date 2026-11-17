/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$Install
void Dino_BusSand_App_UI_PassportUi__Install (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$Install
   void Dino_BusSand_App_UI_PassportUi__Install (const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportUi__Install_21dad80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_DAT_04cb0350;
                    /* catch() { ... } // from try @ 022dad18 with catch @ 022dad8c */
  if ((bRam0000000004f9bb78 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caef48);
                    /* try { // try from 022dadb8 to 023daf33 has its CatchHandler @ 022dadb8
                       catch() { ... } // from try @ 022dadb8 with catch @ 022dadb8
                       catch() { ... } // from try @ 022daf54 with catch @ 022dadb8
                       catch() { ... } // from try @ 022dafb4 with catch @ 022dadb8 */
    FUN_02132f7c(PTR_DAT_04cb0350);
    FUN_02132f7c(PTR_DAT_04cb0990);
    FUN_02132f7c(PTR_DAT_04cb0998);
    bRam0000000004f9bb78 = 1;
  }
  puVar1 = PTR_DAT_04cb0998;
  if (**(char **)(*(long *)puVar2 + 0xb8) != '\0') {
    return;
  }
  **(char **)(*(long *)puVar2 + 0xb8) = '\x01';
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  puVar7 = *(undefined8 **)(lVar4 + 0xb8);
  lVar8 = puVar7[1];
  if (lVar8 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar9 = *puVar7;
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(lVar8,uVar9,*(undefined8 *)PTR_DAT_04cb0990,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar5 = lVar8;
    thunk_FUN_02134474(plVar5,lVar8);
  }
  if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04caef48;
  if ((bRam0000000004f9bf32 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458,0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf32 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04caa458;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  do {
    plVar5 = (long *)System_Delegate__Combine_4872324(lVar4,lVar8,0);
    if (plVar5 != (long *)0x0) {
      if (*plVar5 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar5);
      }
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = FUN_0216aff4(*(long *)(lVar6 + 0xb8) + 0x10,plVar5,lVar4);
    bVar3 = lVar6 != lVar4;
    lVar4 = lVar6;
  } while (bVar3);
  return;
}

