/* IL2CPP: Dino.BusSand.App.UI.KitPop$$HoldDim
void Dino_BusSand_App_UI_KitPop__HoldDim (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitPop$$HoldDim
   void Dino_BusSand_App_UI_KitPop__HoldDim (const MethodInfo* method); */

void Dino_BusSand_App_UI_KitPop__HoldDim_228ee9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((bRam0000000004f9c1a8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb52d8);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb1b08);
    FUN_02132f7c(PTR_DAT_04cb5110);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb52e0);
    bRam0000000004f9c1a8 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar8 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  puVar2 = PTR_DAT_04cb5110;
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar4 = *(long *)PTR_DAT_04cb5110;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar7 = *(long *)puVar1;
  uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar3 & 1) != 0) {
    if (lVar8 == 0) goto LAB_0238f174;
    uVar9 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,2,0);
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
    }
    lVar8 = Dino_BusSand_App_UI_UiKit__Fill_22817d8(0,0,0,0,uVar9,*(undefined8 *)PTR_DAT_04cb52e0);
    if ((lVar8 == 0) || (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar4 == 0)
       ) goto LAB_0238f174;
    UnityEngine_GameObject__AddComponent_object__275a54c(lVar4,*(undefined8 *)PTR_DAT_04cb1b08);
    lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
    if (lVar4 == 0) goto LAB_0238f174;
    uVar9 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar4,*(undefined8 *)PTR_DAT_04cacf98);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
      lVar4 = *(long *)puVar2;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
    *puVar5 = uVar9;
    thunk_FUN_02134474(puVar5,uVar9);
    plVar6 = *(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    if (plVar6 == (long *)0x0) goto LAB_0238f174;
    (**(code **)(*plVar6 + 0x2c8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x2d0));
    lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
    if (lVar8 == 0) goto LAB_0238f174;
    UnityEngine_GameObject__AddComponent_object__275a54c(lVar8,*(undefined8 *)PTR_DAT_04cb52d8);
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar2;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if ((lVar8 != 0) && (lVar8 = UnityEngine_Component__get_transform_43bcd18(lVar8,0), lVar8 != 0)) {
    UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar8,0);
    plVar6 = *(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x2a8))
                (_UNK_00e20840,_UNK_00e20844,_UNK_00e20754,_UNK_00e1fdd0,plVar6,
                 *(undefined8 *)(*plVar6 + 0x2b0));
      plVar6 = *(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x2c8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x2d0));
        *(undefined1 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = 0;
        return;
      }
    }
  }
LAB_0238f174:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

