/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$Install
void Dino_BusSand_App_UI_GiftPackUi__Install (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$Install
   void Dino_BusSand_App_UI_GiftPackUi__Install (const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackUi__Install_21ab9a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_04caec68;
  if ((bRam0000000004f9ba61 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caedd8);
    FUN_02132f7c(PTR_DAT_04caede0);
    FUN_02132f7c(PTR_DAT_04caede8);
    FUN_02132f7c(PTR_DAT_04caedf0);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04caedf8);
    FUN_02132f7c(PTR_DAT_04caee00);
    FUN_02132f7c(PTR_DAT_04caee08);
    FUN_02132f7c(PTR_DAT_04caee10);
    bRam0000000004f9ba61 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar5 = *(long *)(lVar3 + 0xb8);
  if (*(char *)(lVar5 + 8) != '\0') {
    return;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
  }
  puVar1 = PTR_DAT_04caee10;
  *(undefined1 *)(lVar5 + 8) = 1;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  puVar6 = *(undefined8 **)(lVar3 + 0xb8);
  lVar5 = puVar6[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar7 = *puVar6;
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caede0);
    System_Func_int__bool____ctor_37a2278(lVar5,uVar7,*(undefined8 *)PTR_DAT_04caee00,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_02134474(plVar4,lVar5);
  }
  puVar2 = PTR_DAT_04caedf8;
  plVar4 = (long *)(*(long *)(*(long *)PTR_DAT_04caedf8 + 0xb8) + 8);
  *plVar4 = lVar5;
  thunk_FUN_02134474(plVar4,lVar5);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  puVar6 = *(undefined8 **)(lVar3 + 0xb8);
  lVar5 = puVar6[2];
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar7 = *puVar6;
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caede0);
    System_Func_int__bool____ctor_37a2278(lVar5,uVar7,*(undefined8 *)PTR_DAT_04caee08,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar4 = lVar5;
    thunk_FUN_02134474(plVar4,lVar5);
  }
  **(long **)(*(long *)puVar2 + 0xb8) = lVar5;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar5);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caede0);
  System_Func_int__bool____ctor_37a2278(uVar7,0,*(undefined8 *)PTR_DAT_04caede8,0);
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar6 = uVar7;
  thunk_FUN_02134474(puVar6,uVar7);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caedd8);
  System_Action_object__int____ctor_35f74d8(uVar7,0,*(undefined8 *)PTR_DAT_04caedf0,0);
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  *puVar6 = uVar7;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                 ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

