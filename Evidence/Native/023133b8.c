/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$PlayMs
int32_t Dino_BusSand_App_Meta_GameTracking__PlayMs (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$PlayMs
   int32_t Dino_BusSand_App_Meta_GameTracking__PlayMs (const MethodInfo* method); */

uint Dino_BusSand_App_Meta_GameTracking__PlayMs_22133b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dStack_48;
  
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd4a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bd4a = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_GameTracking__get_Gc_2210df0();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(float *)(lVar3 + 0x5c) <= 0.0) {
    return 0;
  }
  fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  fVar11 = 0.0;
  fVar7 = *(float *)(*(long *)(lVar5 + 0xb8) + 0x38);
  if (0.0 <= fVar7) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
      fVar7 = *(float *)(*(long *)(lVar5 + 0xb8) + 0x38);
    }
    fVar11 = fVar6 - fVar7;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  fVar12 = 0.0;
  fVar7 = *(float *)(*(long *)(lVar5 + 0xb8) + 0x34);
  if (0.0 <= fVar7) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
      fVar7 = *(float *)(*(long *)(lVar5 + 0xb8) + 0x34);
    }
    fVar12 = fVar6 - fVar7;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  fVar13 = 0.0;
  fVar7 = *(float *)(*(long *)(lVar5 + 0xb8) + 0x3c);
  if (0.0 <= fVar7) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
      fVar7 = *(float *)(*(long *)(lVar5 + 0xb8) + 0x3c);
    }
    fVar13 = fVar6 - fVar7;
  }
  fVar7 = *(float *)(lVar3 + 0x5c);
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  fVar9 = *(float *)(*(long *)(lVar5 + 0xb8) + 0x30);
  if (cRam0000000004f9b891 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b891 = '\x01';
  }
  fVar6 = (((((fVar6 - fVar7) - fVar9) - fVar11) - fVar12) - fVar13) * 1000.0;
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar10 = (double)fVar6;
  dVar8 = (double)FUN_049b52f0(dVar10,&dStack_48);
  if (0.0 <= fVar6) {
    if (dVar8 != 0.5) {
      dStack_48 = (double)(long)(dVar10 + 0.5);
      goto LAB_02313614;
    }
    dVar8 = 1.0;
  }
  else {
    if (dVar8 != -0.5) {
      dStack_48 = (double)(long)(dVar10 + -0.5);
      goto LAB_02313614;
    }
    dVar8 = -1.0;
  }
  if (((long)dStack_48 & 1U) != 0) {
    dStack_48 = dStack_48 + dVar8;
  }
LAB_02313614:
  if (dStack_48 != INFINITY) {
    return (int)dStack_48 & ((int)dStack_48 >> 0x1f ^ 0xffffffffU);
  }
  return 0;
}

