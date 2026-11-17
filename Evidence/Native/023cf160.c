/* IL2CPP: Dino.BusSand.App.UI.CommonHeadView$$Setup
void Dino_BusSand_App_UI_CommonHeadView__Setup (Dino_BusSand_App_UI_CommonHeadView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonHeadView$$Setup
   void Dino_BusSand_App_UI_CommonHeadView__Setup (Dino_BusSand_App_UI_CommonHeadView_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonHeadView__Setup_22cf160(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if ((bRam0000000004f9c39a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae428);
    FUN_02132f7c(PTR_DAT_04cb6c10);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cb6c18);
    bRam0000000004f9c39a = 1;
  }
  if (*(char *)(param_1 + 0x45) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x45) = 1;
  lVar2 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (lVar2 != 0) {
    lVar2 = UnityEngine_Transform__Find_43d4bec(lVar2,*(undefined8 *)PTR_DAT_04cadc80,0);
    puVar1 = PTR_DAT_04ca9ae8;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      uVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      lVar4 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar5,*(undefined8 *)PTR_DAT_04cae428,0)
      ;
    }
    else {
      if (lVar2 == 0) goto LAB_023cf3f0;
      lVar4 = UnityEngine_Transform__Find_43d4bec(lVar2,*(undefined8 *)PTR_DAT_04cae428,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
    uVar5 = 0;
    if ((uVar3 & 1) != 0) {
      if (lVar4 == 0) goto LAB_023cf3f0;
      uVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                        (lVar4,*(undefined8 *)PTR_DAT_04cad788);
    }
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    thunk_FUN_02134474();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      uVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      lVar2 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar5,*(undefined8 *)PTR_DAT_04cb6c10,0)
      ;
    }
    else {
      if (lVar2 == 0) goto LAB_023cf3f0;
      lVar2 = UnityEngine_Transform__Find_43d4bec(lVar2,*(undefined8 *)PTR_DAT_04cb6c10,0);
    }
    plVar7 = (long *)(param_1 + 0x28);
    *plVar7 = lVar2;
    thunk_FUN_02134474(plVar7,lVar2);
    lVar2 = *plVar7;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
    lVar2 = 0;
    if ((uVar3 & 1) != 0) {
      if (*plVar7 == 0) goto LAB_023cf3f0;
      lVar2 = UnityEngine_Transform__Find_43d4bec(*plVar7,*(undefined8 *)PTR_DAT_04cb6c18,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
    uVar5 = 0;
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) goto LAB_023cf3f0;
      uVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar2,0);
    }
    puVar6 = (undefined8 *)(param_1 + 0x30);
    *puVar6 = uVar5;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                   ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
LAB_023cf3f0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

