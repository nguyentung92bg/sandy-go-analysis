/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$Show
System_String_o* Dino_BusSand_App_Meta_MonetizationSettings__Show (Il2CppObject* v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$Show
   System_String_o* Dino_BusSand_App_Meta_MonetizationSettings__Show (Il2CppObject* v, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_MonetizationSettings__Show_226b808(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  puVar2 = PTR_DAT_04caec70;
  if ((bRam0000000004f9c0b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b88);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb4718);
    FUN_02132f7c(PTR_DAT_04ca9b68);
    FUN_02132f7c(PTR_DAT_04ca9b70);
    FUN_02132f7c(PTR_DAT_04cae4f8);
    FUN_02132f7c(PTR_DAT_04cb2090);
    FUN_02132f7c(PTR_DAT_04cb2000);
    bRam0000000004f9c0b7 = 1;
  }
  lVar4 = thunk_FUN_0216e7a0(param_1,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_04cb2090;
  puVar2 = PTR_DAT_04cb2000;
  if (lVar4 != 0) {
    lVar5 = System_String__Join_int__28c85fc
                      (*(undefined8 *)PTR_DAT_04cae4f8,lVar4,*(undefined8 *)PTR_DAT_04cb4718);
    lVar10 = *(long *)puVar3;
    lVar9 = *(long *)puVar2;
    lVar4 = lVar5;
    lVar11 = lVar9;
    if (((((lVar10 != 0) && (*(int *)(lVar10 + 0x10) != 0)) && (lVar4 = lVar10, lVar5 != 0)) &&
        ((*(int *)(lVar5 + 0x10) != 0 && (lVar11 = lVar5, lVar9 != 0)))) &&
       (*(int *)(lVar9 + 0x10) != 0)) {
      lVar4 = thunk_FUN_0216c29c(*(int *)(lVar5 + 0x10) + *(int *)(lVar10 + 0x10) +
                                 *(int *)(lVar9 + 0x10),lVar5,lVar9,0);
      System_String__FillStringChecked_46d2a48(lVar4,0,lVar10);
      System_String__FillStringChecked_46d2a48(lVar4,*(undefined4 *)(lVar10 + 0x10),lVar5);
      System_String__FillStringChecked_46d2a48
                (lVar4,*(int *)(lVar5 + 0x10) + *(int *)(lVar10 + 0x10),lVar9);
      return lVar4;
    }
    if ((lVar4 == 0) || (iVar1 = *(int *)(lVar4 + 0x10), iVar1 == 0)) {
      if ((lVar11 == 0) || (lVar4 = lVar11, *(int *)(lVar11 + 0x10) == 0)) {
        lVar4 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
      }
    }
    else if ((lVar11 != 0) && (*(int *)(lVar11 + 0x10) != 0)) {
      lVar5 = thunk_FUN_0216c29c(*(int *)(lVar11 + 0x10) + iVar1,lVar11,lVar9,0);
      System_String__FillStringChecked_46d2a48(lVar5,0,lVar4);
      System_String__FillStringChecked_46d2a48(lVar5,iVar1,lVar11);
      lVar4 = lVar5;
    }
    return lVar4;
  }
  if ((param_1 != (long *)0x0) && (*param_1 == *(long *)(PTR_DAT_04ca9ac8 + 0x28))) {
    pcVar6 = (char *)thunk_FUN_0216e9e4(param_1);
    plVar7 = (long *)PTR_DAT_04ca9b68;
    if (*pcVar6 != '\0') {
      plVar7 = (long *)PTR_DAT_04ca9b70;
    }
    return *plVar7;
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9b88 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04ca9b88;
  if ((bRam0000000004fad32c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b88,0);
    bRam0000000004fad32c = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cc5b40;
  if ((bRam0000000004fad32d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc5b40);
    FUN_02132f7c(PTR_DAT_04cc0518);
    bRam0000000004fad32d = 1;
  }
  plVar7 = (long *)thunk_FUN_0216e7a0(param_1,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_04cc0518;
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)thunk_FUN_0216e7a0(param_1,*(undefined8 *)PTR_DAT_04cc0518);
    if (plVar7 == (long *)0x0) {
      if (param_1 == (long *)0x0) {
        return **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
      }
                    /* WARNING: Could not recover jumptable at 0x048c302c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar4 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      return lVar4;
    }
    lVar4 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_048c303c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar3,0);
LAB_048c303c:
                    /* WARNING: Could not recover jumptable at 0x048c3058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (*(code *)*puVar8)(plVar7,0,0,puVar8[1]);
    return lVar4;
  }
  lVar11 = *plVar7;
  lVar4 = *(long *)puVar2;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar4) {
        puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xf) * 0x10 + 0x138);
        goto LAB_048c2ff4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,lVar4,0xf);
LAB_048c2ff4:
                    /* WARNING: Could not recover jumptable at 0x048c300c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar4 = (*(code *)*puVar8)(plVar7,0,puVar8[1]);
  return lVar4;
}

