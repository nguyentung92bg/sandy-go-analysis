/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ProgressPct
double Dino_BusSand_App_Meta_GameTracking__ProgressPct (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x049314ec) */
/* WARNING: Removing unreachable block (ram,0x049313a8) */
/* WARNING: Removing unreachable block (ram,0x049313ac) */
/* WARNING: Removing unreachable block (ram,0x049313b0) */
/* WARNING: Removing unreachable block (ram,0x049313cc) */
/* WARNING: Removing unreachable block (ram,0x049313d0) */
/* WARNING: Removing unreachable block (ram,0x049313d4) */
/* WARNING: Removing unreachable block (ram,0x049313e0) */
/* WARNING: Removing unreachable block (ram,0x049313e4) */
/* WARNING: Removing unreachable block (ram,0x04931490) */
/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ProgressPct
   double Dino_BusSand_App_Meta_GameTracking__ProgressPct (const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_GameTracking__ProgressPct_2213720(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dStack_38;
  
  puVar3 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd49 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bd49 = 1;
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_04caa200;
  if (*(int *)(*(long *)(lVar5 + 0xb8) + 0x10) < 1) {
    return ZEXT816(0);
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar4 = Dino_BusSand_App_Meta_GameTracking__ItemsCleared_221364c();
  lVar5 = *(long *)puVar2;
  iVar1 = *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar5);
  }
  if (cRam0000000004f9b890 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b890 = '\x01';
  }
  dVar10 = ((double)iVar4 * 100.0) / (double)iVar1;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((bRam0000000004fad703 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200,0,0);
    bRam0000000004fad703 = 1;
  }
  puVar3 = PTR_DAT_04caa200;
  lVar5 = *(long *)PTR_DAT_04caa200;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  pdVar6 = *(double **)(lVar5 + 0xb8);
  if (*pdVar6 <= ABS(dVar10)) goto LAB_04931474;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
    pdVar6 = *(double **)(lVar5 + 0xb8);
  }
  dVar7 = pdVar6[1];
  if (dVar7 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(uint *)((long)dVar7 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  dVar7 = *(double *)((long)dVar7 + 0x28);
  dVar10 = dVar7 * dVar10;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar8 = (double)FUN_049b52f0(dVar10,&dStack_38);
  if (0.0 <= dVar10) {
    if (dVar8 == 0.5) {
      dVar10 = 1.0;
      goto LAB_04931440;
    }
    dStack_38 = (double)(long)(dVar10 + 0.5);
  }
  else if (dVar8 == -0.5) {
    dVar10 = -1.0;
LAB_04931440:
    if (((long)dStack_38 & 1U) != 0) {
      dStack_38 = dStack_38 + dVar10;
    }
  }
  else {
    dStack_38 = (double)(long)(dVar10 + -0.5);
  }
  dVar10 = dStack_38 / dVar7;
LAB_04931474:
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar10;
  return auVar9;
}

