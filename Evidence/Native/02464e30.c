/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Register
void Dino_BusSand_Cheat_CheatManager__Register (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Register
   void Dino_BusSand_Cheat_CheatManager__Register (const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__Register_2364e30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cba8c8;
  if ((bRam0000000004f9c74e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cba8d0);
    FUN_02132f7c(PTR_DAT_04cba8c8);
    bRam0000000004f9c74e = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04cab380;
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(lVar6,uVar7,*(undefined8 *)PTR_DAT_04cba8d0,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar6;
    thunk_FUN_02134474(plVar4,lVar6);
  }
  plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *plVar4 = lVar6;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)plVar4 >> 0xc & 0x3f),
                 ((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

