/* IL2CPP: Dino.BusSand.App.GameApp$$Progress3
double Dino_BusSand_App_GameApp__Progress3 (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
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
/* IL2CPP: Dino.BusSand.App.GameApp$$Progress3
   double Dino_BusSand_App_GameApp__Progress3 (Dino_BusSand_App_GameApp_o* __this, const MethodInfo*
   method); */

undefined1  [16] Dino_BusSand_App_GameApp__Progress3_2165f30(long param_1)

{
  undefined *puVar1;
  long lVar2;
  double *pdVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dStack_38;
  
  if ((bRam0000000004f9b863 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9b863 = 1;
  }
  puVar1 = PTR_DAT_04caa200;
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  fVar5 = (float)Dino_BusSand_App_Gameplay_GameplayController__get_Progress01_229b3c8
                           (*(long *)(param_1 + 0x20),0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b890 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b890 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar6 = (double)fVar5;
  if ((bRam0000000004fad703 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200,0,0);
    bRam0000000004fad703 = 1;
  }
  puVar1 = PTR_DAT_04caa200;
  lVar2 = *(long *)PTR_DAT_04caa200;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  pdVar3 = *(double **)(lVar2 + 0xb8);
  if (*pdVar3 <= ABS(dVar6)) goto LAB_04931474;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
    pdVar3 = *(double **)(lVar2 + 0xb8);
  }
  dVar4 = pdVar3[1];
  if (dVar4 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(uint *)((long)dVar4 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  dVar4 = *(double *)((long)dVar4 + 0x38);
  dVar6 = dVar4 * dVar6;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar7 = (double)FUN_049b52f0(dVar6,&dStack_38);
  if (0.0 <= dVar6) {
    if (dVar7 == 0.5) {
      dVar6 = 1.0;
      goto LAB_04931440;
    }
    dStack_38 = (double)(long)(dVar6 + 0.5);
  }
  else if (dVar7 == -0.5) {
    dVar6 = -1.0;
LAB_04931440:
    if (((long)dStack_38 & 1U) != 0) {
      dStack_38 = dStack_38 + dVar6;
    }
  }
  else {
    dStack_38 = (double)(long)(dVar6 + -0.5);
  }
  dVar6 = dStack_38 / dVar4;
LAB_04931474:
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar6;
  return auVar8;
}

