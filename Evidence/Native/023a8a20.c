/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar.<Count>d__16$$MoveNext
bool Dino_BusSand_App_UI_CommerceCoinBar__Count_d__16__MoveNext (Dino_BusSand_App_UI_CommerceCoinBar__Count_d__16_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar.<Count>d__16$$MoveNext
   bool Dino_BusSand_App_UI_CommerceCoinBar__Count_d__16__MoveNext
   (Dino_BusSand_App_UI_CommerceCoinBar__Count_d__16_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_CommerceCoinBar__Count_d__16__MoveNext_22a8a20(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  double dStack_38;
  
  if ((bRam0000000004f9c297 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c297 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar12 = *(float *)(param_1 + 0x40);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    fVar12 = 0.0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(float *)(param_1 + 0x20) <= fVar12) {
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x48) = 0;
      thunk_FUN_02134474((undefined8 *)(lVar7 + 0x48),0);
      Dino_BusSand_App_UI_CommerceCoinBar__SetImmediate_22a8240
                (lVar7,*(undefined8 *)(param_1 + 0x38));
      return 0;
    }
    goto LAB_023a8cac;
  }
  fVar10 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  puVar4 = PTR_DAT_04cac7b8;
  fVar14 = *(float *)(param_1 + 0x20);
  lVar5 = *(long *)PTR_DAT_04cac7b8;
  *(float *)(param_1 + 0x40) = fVar12 + fVar10;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04caa200;
  fVar14 = (fVar12 + fVar10) / fVar14;
  lVar5 = *(long *)(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x38);
  fVar12 = 1.0;
  if (fVar14 <= 1.0) {
    fVar12 = fVar14;
  }
  fVar10 = 1.0;
  if (0.0 <= fVar14) {
    fVar10 = 1.0 - fVar12;
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar13 = (double)(1.0 - fVar10 * fVar10 * fVar10 * fVar10) * (double)(lVar1 - lVar5) +
           (double)lVar5;
  dVar11 = (double)FUN_049b52f0(dVar13,&dStack_38);
  if (0.0 <= dVar13) {
    if (dVar11 == 0.5) {
      dVar11 = 1.0;
      goto LAB_023a8ba0;
    }
    dStack_38 = (double)(long)(dVar13 + 0.5);
  }
  else if (dVar11 == -0.5) {
    dVar11 = -1.0;
LAB_023a8ba0:
    if (((long)dStack_38 & 1U) != 0) {
      dStack_38 = dStack_38 + dVar11;
    }
  }
  else {
    dStack_38 = (double)(long)(dVar13 + -0.5);
  }
  if (lVar7 == 0) {
LAB_023a8cac:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x28);
  iVar2 = *(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4);
  lVar5 = -0x8000000000000000;
  if (dStack_38 != INFINITY) {
    lVar5 = (long)dStack_38;
  }
  *(long *)(lVar7 + 0x40) = lVar5;
  if (iVar2 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar6 & 1) != 0) {
    plVar9 = *(long **)(lVar7 + 0x28);
    uVar8 = *(undefined8 *)(lVar7 + 0x40);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = System_Math__Max_4830fd4(0,uVar8,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    uVar8 = Dino_BusSand_App_UI_CommerceUi__NumKM_22a8588(uVar8);
    if (plVar9 == (long *)0x0) goto LAB_023a8cac;
    (**(code **)(*plVar9 + 0x518))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x520));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

